import cocotb
import random
from cocotb.triggers import ReadOnly, Timer


@cocotb.test()
async def test_attribute_interpolator(dut):
    numIter: int = 1000000
    attr_width: int = dut.ATTR_WIDTH.value
    weight_width: int = dut.WEIGHT_WIDTH.value
    max_attr = (1 << (attr_width - 1)) - 1
    min_attr = -(1 << (attr_width - 1))
    max_weight = (1 << (weight_width - 1)) - 1
    min_weight = -(1 << (weight_width - 1))

    dut._log.info(f"---- ATTRIBUTE INTERPOLATOR TEST STARTS HERE ----")

    dut._log.info(f"Running {numIter} tests...")

    for i in range(numIter):
        ia0 = random.randint(min_attr, max_attr)
        ia1 = random.randint(min_attr, max_attr)
        ia2 = random.randint(min_attr, max_attr)

        il0 = random.randint(min_weight, max_weight)
        il1 = random.randint(min_weight, max_weight)
        il2 = random.randint(min_weight, max_weight)

        # finding our version
        testSum = (ia0 * il0) + (ia1 * il1) + (ia2 * il2)
        testSum = testSum // (
            2**weight_width
        )  # doing an effective left shift of 32 bits

        # plugging into dut
        dut.i_attr0.value = ia0
        dut.i_attr1.value = ia1
        dut.i_attr2.value = ia2

        dut.i_lambda0.value = il0
        dut.i_lambda1.value = il1
        dut.i_lambda2.value = il2

        await ReadOnly()
        dutRes = dut.o_interpolated_attr.value.signed_integer

        # outputting
        dut._log.info(f"Test Iteration {i + 1}:")
        dut._log.info(f"    Attributes: [{ia0}, {ia1}, {ia2}]")
        dut._log.info(f"    Lambdas   : [{il0}, {il1}, {il2}]")
        dut._log.info(f"    DUT Result: {dutRes}")
        dut._log.info(f"    Expected  : {testSum}")

        assert dutRes == testSum, (
            f"Mismatch on iteration {i + 1}!, DUT Returned {dutRes} while it expected {testSum} using Attributes [{ia0}, {ia1}, {ia2}] and Lambdas [{il0, il1, il2}]!!!!"
        )

        await Timer(1, units="ns")

    dut._log.info(f"--- TEST FINISHED ---")
