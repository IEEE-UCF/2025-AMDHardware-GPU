import cocotb
import random
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, ReadOnly, Timer
from cocotb.binary import BinaryValue


async def reset_dut(dut):
    """Resets the DUT and initializes inputs."""
    dut.rst_n.value = 0
    dut.i_frag_valid.value = 0
    dut.i_frag_x.value = 0
    dut.i_frag_y.value = 0

    dut.i_frag_tex_coord[0].value = 0
    dut.i_frag_tex_coord[1].value = 0

    dut.i_texel_valid.value = 0
    for i in range(dut.VEC_SIZE.value):
        dut.i_frag_color[i].value = 0
        dut.i_texel_color[i].value = 0

    await Timer(20, units="ns")
    dut.rst_n.value = 1
    await RisingEdge(dut.clk)
    dut._log.info("Reset complete.")


@cocotb.test()
async def test_shader_pipeline(dut):
    """
    Tests the fragment shader by sending a fragment, simulating a texture
    unit response, and checking the final pixel output.
    """
    # Get parameters from the DUT
    data_width = dut.DATA_WIDTH.value
    vec_size = dut.VEC_SIZE.value
    cord_width = dut.CORD_WIDTH.value

    # Calculate max values based on bit widths
    max_data_val = (1 << data_width) - 1
    max_cord_val = (1 << (cord_width - 1)) - 1
    min_cord_val = -(1 << (cord_width - 1))

    # Start the clock
    clock = Clock(dut.clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Reset the DUT
    await reset_dut(dut)

    num_tests = 10
    dut._log.info(f"Running {num_tests} randomized fragment tests...")

    for i in range(num_tests):
        dut._log.info(f"--- Test Iteration {i + 1}/{num_tests} ---")

        # 1. Generate random stimulus for a fragment
        frag_x = random.randint(min_cord_val, max_cord_val)
        frag_y = random.randint(min_cord_val, max_cord_val)
        frag_color = [random.randint(0, max_data_val) for _ in range(vec_size)]
        frag_tex_coord = [random.randint(0, max_data_val) for _ in range(2)]

        # 2. Drive the fragment input on a clock edge
        await RisingEdge(dut.clk)
        dut.i_frag_valid.value = 1
        dut.i_frag_x.value = frag_x
        dut.i_frag_y.value = frag_y
        for i in range(vec_size):
            dut.i_frag_color[i].value = frag_color[i]

        dut.i_frag_tex_coord[0].value = BinaryValue(value=frag_tex_coord[0], n_bits=32, bigEndian=False)
        dut.i_frag_tex_coord[1].value = frag_tex_coord[1]

        dut._log.info(
            f"Sent fragment at ({frag_x}, {frag_y}) with tex coords U={frag_tex_coord[0]}, V={frag_tex_coord[1]}"
        )

        # 3. Check the texture request from the shader (combinational output)
        await ReadOnly()
        assert dut.o_tex_req_valid.value == 1, "Shader did not request texture data!"
        assert dut.o_tex_u_coord.value == frag_tex_coord[0], (
            "Shader requested incorrect U coordinate"
        )
        assert dut.o_tex_v_coord.value == frag_tex_coord[1], (
            "Shader requested incorrect V coordinate"
        )
        dut._log.info("Shader correctly requested texture data.")

        # De-assert the fragment valid signal on the next cycle
        await RisingEdge(dut.clk)
        dut.i_frag_valid.value = 0

        # 4. Simulate the texture unit: wait for a random latency, then provide a response
        texture_latency = random.randint(1, 5)
        await RisingEdge(dut.clk, count=texture_latency)

        texel_color = [random.randint(0, max_data_val) for _ in range(vec_size)]
        dut.i_texel_valid.value = 1
        for i in range(vec_size):
            dut.i_texel_color[i].value = texel_color[i]

        dut._log.info(
            f"Texture unit responding with color after {texture_latency} cycles."
        )

        # 5. The shader's output is registered, so it will be valid on the *next* clock edge
        await RisingEdge(dut.clk)
        # De-assert the texel valid signal now that the shader has sampled it
        dut.i_texel_valid.value = 0

        # 6. Check the final pixel output
        await ReadOnly()
        assert dut.o_pixel_valid.value == 1, "Final pixel output is not valid!"
        assert dut.o_pixel_x.value == frag_x, (
            f"Expected X={frag_x}, got {dut.o_pixel_x.value}"
        )
        assert dut.o_pixel_y.value == frag_y, (
            f"Expected Y={frag_y}, got {dut.o_pixel_y.value}"
        )

        # 7. Calculate the expected color (element-wise multiplication) and verify
        # The hardware result will be truncated to DATA_WIDTH bits.
        color_mask = (1 << data_width) - 1
        expected_color = [
            (c1 * c2) & color_mask for c1, c2 in zip(frag_color, texel_color)
        ]

        # Read the DUT's vector output
        dut_pixel_color = (
            dut.o_pixel_color.value.to_signed()
        )  # .to_signed() converts the binary value to a list of ints

        assert dut_pixel_color == expected_color, (
            f"Pixel color mismatch! Expected {expected_color}, got {dut_pixel_color}"
        )
        dut._log.info(
            f"SUCCESS: Pixel output at ({dut.o_pixel_x.value}, {dut.o_pixel_y.value}) is correct."
        )

        # Add a small delay between tests
        await RisingEdge(dut.clk)

    dut._log.info("All tests passed!")
