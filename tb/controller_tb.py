import cocotb
import random
from cocotb.triggers import ReadOnly, Timer


@cocotb.test()
async def test_controller(dut):
    numIter: int = 10

    dut._log.info(f"---- CONTROLLER TEST STARTS HERE ----")
    dut._log.info(f"Running {numIter} tests...")

    for i in range(numIter):
        rst_n = random.randint(0, 1)
        instrValid = random.randint(0, 1)
        memValid = random.randint(0, 1)
        
        dut.clk.value = # whatever clock is
        dut.rst_n = rst_n
        dut.i_instruction_valid = instrValid
        dut.i_memory_ready = memValid

        await ReadOnly()
        # read data here now

        pc_we
        

        await Timer(10, units="ns")
