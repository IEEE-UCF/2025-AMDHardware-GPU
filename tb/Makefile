SIM ?= icarus

VERILOG_SOURCES += $(shell pwd)/../src/alu.sv
VERILOG_SOURCES += $(shell pwd)/../src/attribute_interpolator.sv
VERILOG_SOURCES += $(shell pwd)/../src/controller.sv
VERILOG_SOURCES += $(shell pwd)/../src/fragment_shader.sv
VERILOG_SOURCES += $(shell pwd)/../src/framebuffer.sv
VERILOG_SOURCES += $(shell pwd)/../src/gpu_register_file.sv
VERILOG_SOURCES += $(shell pwd)/../src/gpu_top.sv
VERILOG_SOURCES += $(shell pwd)/../src/instruction_decoder.sv
VERILOG_SOURCES += $(shell pwd)/../src/_interconnect.sv
VERILOG_SOURCES += $(shell pwd)/../src/mmu.sv
VERILOG_SOURCES += $(shell pwd)/../src/rasterizer.sv
VERILOG_SOURCES += $(shell pwd)/../src/shader_core.sv
VERILOG_SOURCES += $(shell pwd)/../src/shader_loader.sv
VERILOG_SOURCES += $(shell pwd)/../src/spi_to_parallel_bridge.sv
VERILOG_SOURCES += $(shell pwd)/../src/texture_unit.sv
VERILOG_SOURCES += $(shell pwd)/../src/vertex_fetch.sv

TOPLEVEL_LANG = verilog

# TOPLEVEL = alu
# MODULE = alu_tb

# TOPLEVEL = attribute_interpolator
# MODULE = attribute_interpolator_tb

TOPLEVEL = fragment_shader
MODULE = fragment_shader_tb

include $(shell cocotb-config --makefiles)/Makefile.sim
