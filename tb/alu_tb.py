import cocotb
import random
from cocotb.triggers import Timer
from cocotb.binary import BinaryValue


@cocotb.test()
async def test_alu(dut):
    pack = lambda vec: sum(
        (int(v) & MAXVAL) << (i * data_width) for i, v in enumerate(vec)
    )
    unpack = lambda bits: [
        (bits >> (i * data_width)) & MAXVAL for i in range(vector_size)
    ]
    valid_opcodes = [
        0b00001,
        0b00010,
        0b00011,
        0b01001,
        0b01010,
        0b01011,
        0b10001,
        0b10010,
    ]
    data_width = dut.DATA_WIDTH.value
    vector_size = dut.VECTOR_SIZE.value
    MAXVAL = (1 << data_width) - 1  # for easier use later on

    test_opcodes = valid_opcodes + [
        0b00000
    ]  # adding an invalid opcode to test default case

    dut._log.info("---- ALU TEST STARTS HERE ----")

    num_iterations = 100
    dut._log.info(f"Running {num_iterations} tests on ALU...")

    for i in range(num_iterations):
        # choose a random opcode
        opcode = random.choice(test_opcodes)
        op_a = [random.randint(0, MAXVAL) for _ in range(vector_size)]
        op_b = [random.randint(0, MAXVAL) for _ in range(vector_size)]

        packed_a = BinaryValue(n_bits=vector_size * data_width, bigEndian=False)
        packed_b = BinaryValue(n_bits=vector_size * data_width, bigEndian=False)

        for k in range(vector_size):
            packed_a[(k + 1) * data_width - 1 : k * data_width] = op_a[k]
            packed_b[(k + 1) * data_width - 1 : k * data_width] = op_b[k]

        dut.i_opcode.value = opcode
        dut.i_operand_a.value = packed_a
        dut.i_operand_b.value = packed_b

        await Timer(1, units="ns")

        dut_result = unpack(int(dut.o_result.value))

        # Calculating the expected result
        expected_results = []
        for j in range(vector_size):
            expected_val = 0
            match opcode:
                case 0b00001:
                    expected_val = op_a[j] + op_b[j]
                case 0b00010:
                    expected_val = op_a[j] - op_b[j]
                case 0b00011:
                    expected_val = op_a[j] * op_b[j]
                case 0b01001:
                    expected_val = op_a[j] & op_b[j]
                case 0b01010:
                    expected_val = op_a[j] | op_b[j]
                case 0b01011:
                    expected_val = op_a[j] ^ op_b[j]
                case 0b10001:
                    expected_val = op_a[j]
                case 0b10010:
                    expected_val = op_b[j]
                case _:
                    expected_val = 0

            expected_results.append(expected_val & MAXVAL)

        dut._log.info(f"Test Iteration {i + 1}:")
        dut._log.info(f"    Opcode: {opcode:05b}")
        dut._log.info(f"    Operand A: {op_a}")
        dut._log.info(f"    Operand B: {op_b}")
        dut._log.info(f"    DUT Result: {dut_result}")
        dut._log.info(f"    Expected: {expected_results}")

        assert dut_result == expected_results, (
            f"Mismatch on iteration {i + 1}!, DUT Returned {dut_result} while it expected {expected_results} using opcode {opcode:05b}!!!!"
        )

    dut._log.info(f"--- TEST FINISHED ---")
