import cocotb
from cocotb.triggers import RisingEdge, Timer
import random

# helper to pack python list into a 128-bit vector
def pack_vector(lanes):
    val = 0
    for i, lane in enumerate(reversed(lanes)):
        val = (val << 32) | (lane & 0xFFFFFFFF)
    return val

# helper to unpack 128-bit vector into a python list
def unpack_vector(vec_val):
    lanes = []
    for i in range(4):
        lanes.append((vec_val >> (i * 32)) & 0xFFFFFFFF)
    return lanes

@cocotb.test()
async def final_alu_test(dut):
    """verifying the final vector ALU while accounting for its 4-stage pipeline latency"""
    
    # clock and reset
    cocotb.start_soon(cocotb.clock.Clock(dut.clk, 10, units="ns").start())
    dut.rst.value = 1
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)
    dut.rst.value = 0
    await RisingEdge(dut.clk)
    dut._log.info("Reset complete! ALU pipeline flushed.")

    # operation codes ---
    V_ADD = 0b00001
    V_MUL = 0b00011
    DOT4  = 0b10001
    
    # pipeline latency
    # this ALU has a 4-stage pipeline!!! wow!!!
    # result appears at the output 4 cycles after inputs are applied
    PIPELINE_DEPTH = 4

    # test 1: vector add and
    dut._log.info("Starting Vector Add Test")
    vec_a_data = [10, 20, 30, 40]
    vec_b_data = [2,  3,  4,  5]
    expected_add = [12, 23, 34, 45]

    dut.vec_a.value = pack_vector(vec_a_data)
    dut.vec_b.value = pack_vector(vec_b_data)
    dut.op_code.value = V_ADD
    
    # wait for the pipeline to process the data
    for _ in range(PIPELINE_DEPTH):
        await RisingEdge(dut.clk)

    # now check the result
    result_lanes = unpack_vector(dut.result_vec.value)
    dut._log.info(f"V_ADD Input A: {vec_a_data}")
    dut._log.info(f"V_ADD Input B: {vec_b_data}")
    dut._log.info(f"V_ADD Expected: {expected_add}")
    dut._log.info(f"V_ADD Actual:   {result_lanes}")
    assert result_lanes == expected_add, "Vector Add test FAILED!!! :("
    dut._log.info("Vector Add test PASSED!!! :)")
    
    # test 2: 4-component dot product ---
    await RisingEdge(dut.clk) # move to next cycle to load new data
    dut._log.info("Starting Dot Product Test")
    vec_a_dot = [2, 3, 4, 5]
    vec_b_dot = [10, 20, 30, 40]
    expected_dot = (2*10) + (3*20) + (4*30) + (5*40) # 20 + 60 + 120 + 200 = 400 incase u didnt know...

    dut.vec_a.value = pack_vector(vec_a_dot)
    dut.vec_b.value = pack_vector(vec_b_dot)
    dut.op_code.value = DOT4

    # wait for pipeline latency
    for _ in range(PIPELINE_DEPTH):
        await RisingEdge(dut.clk)

    # check the scalar result
    dut._log.info(f"DOT4 Input A: {vec_a_dot}")
    dut._log.info(f"DOT4 Input B: {vec_b_dot}")
    dut._log.info(f"DOT4 Expected: {expected_dot}")
    dut._log.info(f"DOT4 Actual:   {int(dut.result_scalar.value)}")
    assert dut.result_scalar.value == expected_dot, "Dot Product test FAILED!!! :("
    dut._log.info("Dot Product test PASSED!!! :)")

    await Timer(50, units="ns") # small delay before ending the test