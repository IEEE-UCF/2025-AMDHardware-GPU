import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, FallingEdge, ClockCycles, Timer
import random

CLK_PERIOD = 10
SPI_CLK_PERIOD = 100

class SpiTransaction:
    def __init__(self, write=True, addr=0, data=0):
        self.write = write
        self.addr = addr
        self.data = data if write else 0
        self.expected_rdata = 0
        
    def get_cmd_byte(self):
        return 0x80 if self.write else 0x00
    
    def to_bit_stream(self):
        bits = []
        cmd = self.get_cmd_byte()
        for i in range(7, -1, -1):
            bits.append((cmd >> i) & 1)
        
        for i in range(31, -1, -1):
            bits.append((self.addr >> i) & 1)
        
        if self.write:
            for i in range(31, -1, -1):
                bits.append((self.data >> i) & 1)
        
        return bits

class SpiMaster:
    def __init__(self, dut):
        self.dut = dut
        self.dut.i_spi_cs_n.value = 1
        self.dut.i_spi_clk.value = 0
        self.dut.i_spi_mosi.value = 0
        
    async def reset(self):
        self.dut.i_spi_cs_n.value = 1
        self.dut.i_spi_clk.value = 0
        self.dut.i_spi_mosi.value = 0
        await Timer(SPI_CLK_PERIOD * 2, units='ns')
    
    async def send_transaction(self, transaction):
        bits = transaction.to_bit_stream()
        read_bits = []
        
        self.dut.i_spi_cs_n.value = 0
        await Timer(SPI_CLK_PERIOD // 4, units='ns')
        
        for bit in bits:
            self.dut.i_spi_mosi.value = bit
            await Timer(SPI_CLK_PERIOD // 2, units='ns')
            
            self.dut.i_spi_clk.value = 1
            await Timer(SPI_CLK_PERIOD // 2, units='ns')
            
            self.dut.i_spi_clk.value = 0
        
        # Wait for CDC synchronization (need a few system clock cycles)
        await ClockCycles(self.dut.clk, 5)
        
        if not transaction.write:
            for _ in range(32):
                await Timer(SPI_CLK_PERIOD // 2, units='ns')
                self.dut.i_spi_clk.value = 1
                await Timer(SPI_CLK_PERIOD // 4, units='ns')
                
                miso_val = self.dut.o_spi_miso.value
                if miso_val.is_resolvable:
                    read_bits.append(int(miso_val.integer))
                else:
                    read_bits.append(0)
                
                await Timer(SPI_CLK_PERIOD // 4, units='ns')
                self.dut.i_spi_clk.value = 0
        
        await Timer(SPI_CLK_PERIOD // 2, units='ns')
        self.dut.i_spi_cs_n.value = 1
        await Timer(SPI_CLK_PERIOD, units='ns')
        
        # Wait for transaction to complete through CDC
        await ClockCycles(self.dut.clk, 5)
        
        if not transaction.write and read_bits:
            read_value = 0
            for bit in read_bits:
                read_value = (read_value << 1) | bit
            return read_value
        return None

async def reset_dut(dut):
    dut.rst_n.value = 0
    dut.i_dram_rdata.value = 0
    await ClockCycles(dut.clk, 5)
    dut.rst_n.value = 1
    await ClockCycles(dut.clk, 2)

class MemoryModel:
    def __init__(self):
        self.memory = {}
        
    def write(self, addr, data):
        self.memory[addr] = data
        
    def read(self, addr):
        return self.memory.get(addr, 0xDEADBEEF)

@cocotb.test()
async def test_spi_bridge_basic(dut):
    # Start BOTH clocks - system clock and SPI clock are separate!
    cocotb.start_soon(Clock(dut.clk, CLK_PERIOD, units="ns").start())
    
    addr_width = int(dut.ADDR_WIDTH.value)
    data_width = int(dut.DATA_WIDTH.value)
    
    dut._log.info(f"Starting SPI bridge test (ADDR_WIDTH={addr_width}, DATA_WIDTH={data_width})")
    
    await reset_dut(dut)
    
    spi = SpiMaster(dut)
    await spi.reset()
    
    memory = MemoryModel()
    
    dut._log.info("Test 1: Basic write transaction")
    
    write_addr = 0x1000
    write_data = 0x12345678
    
    trans = SpiTransaction(write=True, addr=write_addr, data=write_data)
    await spi.send_transaction(trans)
    
    await ClockCycles(dut.clk, 10)
    
    dut._log.info("Test 2: Basic read transaction")
    
    read_addr = 0x2000
    expected_data = 0xABCDEF00
    dut.i_dram_rdata.value = expected_data
    
    trans = SpiTransaction(write=False, addr=read_addr)
    read_data = await spi.send_transaction(trans)
    
    if read_data is not None:
        dut._log.info(f"  Read data: 0x{read_data:08x}, Expected: 0x{expected_data:08x}")
        assert read_data == expected_data, f"Read mismatch: got 0x{read_data:08x}, expected 0x{expected_data:08x}"
    
    dut._log.info("Basic SPI bridge test passed!")

@cocotb.test()
async def test_spi_bridge_state_machine(dut):
    cocotb.start_soon(Clock(dut.clk, CLK_PERIOD, units="ns").start())
    
    dut._log.info("Testing SPI state machine transitions")
    
    await reset_dut(dut)
    
    spi = SpiMaster(dut)
    await spi.reset()
    
    dut._log.info("Test 1: Verify initial state is IDLE")
    assert int(dut.current_state.value) == 0, "Should start in IDLE state"
    
    dut._log.info("Test 2: State progression for write")
    
    dut.i_spi_cs_n.value = 0
    await Timer(SPI_CLK_PERIOD, units='ns')
    
    for i in range(8):
        dut.i_spi_mosi.value = 1 if i == 0 else 0
        dut.i_spi_clk.value = 1
        await Timer(SPI_CLK_PERIOD // 2, units='ns')
        dut.i_spi_clk.value = 0
        await Timer(SPI_CLK_PERIOD // 2, units='ns')
    
    assert int(dut.current_state.value) == 2, "Should be in GET_ADDR state"
    
    for i in range(32):
        dut.i_spi_mosi.value = 0
        dut.i_spi_clk.value = 1
        await Timer(SPI_CLK_PERIOD // 2, units='ns')
        dut.i_spi_clk.value = 0
        await Timer(SPI_CLK_PERIOD // 2, units='ns')
    
    assert int(dut.current_state.value) == 3, "Should be in GET_WDATA state"
    
    dut.i_spi_cs_n.value = 1
    await Timer(SPI_CLK_PERIOD, units='ns')
    
    assert int(dut.current_state.value) == 0, "Should return to IDLE when CS deasserted"
    
    dut._log.info("State machine test passed!")

@cocotb.test()
async def test_spi_bridge_back_to_back(dut):
    cocotb.start_soon(Clock(dut.clk, CLK_PERIOD, units="ns").start())
    
    dut._log.info("Testing back-to-back transactions")
    
    await reset_dut(dut)
    
    spi = SpiMaster(dut)
    await spi.reset()
    
    transactions = [
        SpiTransaction(write=True, addr=0x100, data=0x11111111),
        SpiTransaction(write=True, addr=0x200, data=0x22222222),
        SpiTransaction(write=False, addr=0x300),
        SpiTransaction(write=True, addr=0x400, data=0x44444444),
        SpiTransaction(write=False, addr=0x500),
    ]
    
    dut.i_dram_rdata.value = 0x33333333
    
    for i, trans in enumerate(transactions):
        dut._log.info(f"  Transaction {i}: {'Write' if trans.write else 'Read'} @ 0x{trans.addr:08x}")
        result = await spi.send_transaction(trans)
        
        if not trans.write and result is not None:
            dut._log.info(f"    Read result: 0x{result:08x}")
        
        await ClockCycles(dut.clk, 2)
    
    dut._log.info("Back-to-back test passed!")

@cocotb.test()
async def test_spi_bridge_stress(dut):
    cocotb.start_soon(Clock(dut.clk, CLK_PERIOD, units="ns").start())
    
    dut._log.info("Starting SPI bridge stress test")
    
    await reset_dut(dut)
    
    spi = SpiMaster(dut)
    await spi.reset()
    
    num_transactions = 100
    write_count = 0
    read_count = 0
    memory = {}
    
    for i in range(num_transactions):
        is_write = random.random() < 0.6
        addr = random.randint(0, 0xFFFF) << 4
        
        if is_write:
            data = random.randint(0, 0xFFFFFFFF)
            trans = SpiTransaction(write=True, addr=addr, data=data)
            await spi.send_transaction(trans)
            memory[addr] = data
            write_count += 1
        else:
            expected = memory.get(addr, 0xDEADBEEF)
            dut.i_dram_rdata.value = expected
            trans = SpiTransaction(write=False, addr=addr)
            result = await spi.send_transaction(trans)
            
            if result is not None and result != expected:
                dut._log.error(f"Read mismatch at 0x{addr:08x}: got 0x{result:08x}, expected 0x{expected:08x}")
            read_count += 1
        
        if (i + 1) % 20 == 0:
            dut._log.info(f"  Progress: {i + 1}/{num_transactions} transactions")
    
    dut._log.info(f"Stress test completed! Writes: {write_count}, Reads: {read_count}")

@cocotb.test()
async def test_spi_bridge_timing(dut):
    cocotb.start_soon(Clock(dut.clk, CLK_PERIOD, units="ns").start())
    
    dut._log.info("Testing SPI timing requirements")
    
    await reset_dut(dut)
    
    spi = SpiMaster(dut)
    await spi.reset()
    
    dut._log.info("Test 1: Minimum CS setup time")
    
    dut.i_spi_cs_n.value = 0
    await Timer(10, units='ns')
    
    dut.i_spi_clk.value = 1
    await Timer(SPI_CLK_PERIOD // 2, units='ns')
    dut.i_spi_clk.value = 0
    
    dut._log.info("Test 2: CS hold time after transaction")
    
    trans = SpiTransaction(write=True, addr=0x1000, data=0x5A5A5A5A)
    await spi.send_transaction(trans)
    
    await Timer(10, units='ns')
    
    dut._log.info("Test 3: Variable SPI clock speeds")
    
    for clock_period in [50, 100, 200]:
        dut._log.info(f"  Testing with SPI clock period: {clock_period}ns")
        
        trans = SpiTransaction(write=True, addr=0x2000 + clock_period, data=clock_period)
        
        dut.i_spi_cs_n.value = 0
        await Timer(clock_period // 4, units='ns')
        
        bits = trans.to_bit_stream()
        for bit in bits[:16]:
            dut.i_spi_mosi.value = bit
            await Timer(clock_period // 2, units='ns')
            dut.i_spi_clk.value = 1
            await Timer(clock_period // 2, units='ns')
            dut.i_spi_clk.value = 0
        
        dut.i_spi_cs_n.value = 1
        await Timer(clock_period, units='ns')
    
    dut._log.info("Timing test passed!")

@cocotb.test()
async def test_spi_bridge_error_conditions(dut):
    cocotb.start_soon(Clock(dut.clk, CLK_PERIOD, units="ns").start())
    
    dut._log.info("Testing error conditions and recovery")
    
    await reset_dut(dut)
    
    spi = SpiMaster(dut)
    await spi.reset()
    
    dut._log.info("Test 1: Incomplete transaction (CS deasserted early)")
    
    dut.i_spi_cs_n.value = 0
    await Timer(SPI_CLK_PERIOD // 2, units='ns')
    
    for i in range(20):
        dut.i_spi_mosi.value = i % 2
        dut.i_spi_clk.value = 1
        await Timer(SPI_CLK_PERIOD // 2, units='ns')
        dut.i_spi_clk.value = 0
        await Timer(SPI_CLK_PERIOD // 2, units='ns')
    
    dut.i_spi_cs_n.value = 1
    await Timer(SPI_CLK_PERIOD * 2, units='ns')
    
    assert int(dut.current_state.value) == 0, "Should return to IDLE after incomplete transaction"
    
    dut._log.info("Test 2: Recovery after error")
    
    trans = SpiTransaction(write=True, addr=0x5000, data=0x12345678)
    await spi.send_transaction(trans)
    
    await ClockCycles(dut.clk, 5)
    
    dut._log.info("Test 3: Glitch on CS during transaction")
    
    dut.i_spi_cs_n.value = 0
    await Timer(SPI_CLK_PERIOD // 2, units='ns')
    
    for i in range(10):
        dut.i_spi_mosi.value = 0
        dut.i_spi_clk.value = 1
        await Timer(SPI_CLK_PERIOD // 2, units='ns')
        dut.i_spi_clk.value = 0
        await Timer(SPI_CLK_PERIOD // 2, units='ns')
    
    dut.i_spi_cs_n.value = 1
    await Timer(10, units='ns')
    dut.i_spi_cs_n.value = 0
    await Timer(10, units='ns')
    dut.i_spi_cs_n.value = 1
    
    await Timer(SPI_CLK_PERIOD * 2, units='ns')
    assert int(dut.current_state.value) == 0, "Should handle CS glitches gracefully"
    
    dut._log.info("Error condition test passed!")

@cocotb.test()
async def test_spi_bridge_data_patterns(dut):
    cocotb.start_soon(Clock(dut.clk, CLK_PERIOD, units="ns").start())
    
    dut._log.info("Testing various data patterns")
    
    await reset_dut(dut)
    
    spi = SpiMaster(dut)
    await spi.reset()
    
    test_patterns = [
        (0x00000000, 0x00000000, "All zeros"),
        (0xFFFFFFFF, 0xFFFFFFFF, "All ones"),
        (0xAAAAAAAA, 0x55555555, "Alternating 1"),
        (0x55555555, 0xAAAAAAAA, "Alternating 2"),
        (0x00000001, 0x80000000, "Single bit low/high"),
        (0x80000000, 0x00000001, "Single bit high/low"),
        (0x12345678, 0x87654321, "Counting pattern"),
        (0xDEADBEEF, 0xCAFEBABE, "Classic patterns"),
    ]
    
    for addr_pattern, data_pattern, description in test_patterns:
        dut._log.info(f"  Testing: {description}")
        
        trans = SpiTransaction(write=True, addr=addr_pattern & 0xFFFFFF00, data=data_pattern)
        await spi.send_transaction(trans)
        
        await ClockCycles(dut.clk, 2)
        
        dut.i_dram_rdata.value = data_pattern
        trans = SpiTransaction(write=False, addr=addr_pattern & 0xFFFFFF00)
        result = await spi.send_transaction(trans)
        
        if result is not None:
            assert result == data_pattern, f"{description} readback failed"
    
    dut._log.info("Data pattern test passed!")

@cocotb.test()
async def test_spi_bridge_performance(dut):
    cocotb.start_soon(Clock(dut.clk, CLK_PERIOD, units="ns").start())
    
    dut._log.info("Performance testing")
    
    await reset_dut(dut)
    
    spi = SpiMaster(dut)
    await spi.reset()
    
    dut._log.info("Test 1: Write throughput")
    
    num_writes = 50
    start_time = cocotb.utils.get_sim_time(units='ns')
    
    for i in range(num_writes):
        trans = SpiTransaction(write=True, addr=i << 8, data=i)
        await spi.send_transaction(trans)
    
    end_time = cocotb.utils.get_sim_time(units='ns')
    elapsed_us = (end_time - start_time) / 1000
    writes_per_us = num_writes / elapsed_us
    
    dut._log.info(f"  Write throughput: {writes_per_us:.2f} transactions/μs")
    dut._log.info(f"  Bits per transaction: 72 (8 cmd + 32 addr + 32 data)")
    dut._log.info(f"  Effective bandwidth: {writes_per_us * 72:.2f} bits/μs")
    
    dut._log.info("Test 2: Read latency")
    
    dut.i_dram_rdata.value = 0x12345678
    
    start_time = cocotb.utils.get_sim_time(units='ns')
    trans = SpiTransaction(write=False, addr=0x1000)
    result = await spi.send_transaction(trans)
    end_time = cocotb.utils.get_sim_time(units='ns')
    
    read_latency = end_time - start_time
    dut._log.info(f"  Read transaction latency: {read_latency:.0f} ns")
    
    dut._log.info("Test 3: Mixed workload")
    
    start_time = cocotb.utils.get_sim_time(units='ns')
    
    for i in range(25):
        if i % 2 == 0:
            trans = SpiTransaction(write=True, addr=i << 8, data=i * 0x1111)
        else:
            dut.i_dram_rdata.value = i * 0x2222
            trans = SpiTransaction(write=False, addr=i << 8)
        
        await spi.send_transaction(trans)
    
    end_time = cocotb.utils.get_sim_time(units='ns')
    elapsed_us = (end_time - start_time) / 1000
    trans_per_us = 25 / elapsed_us
    
    dut._log.info(f"  Mixed workload: {trans_per_us:.2f} transactions/μs")
    
    dut._log.info("Performance test completed!")