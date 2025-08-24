# --- 1. system clock and reset ---
create_clock -period 8.000 -name sys_clk_pin [get_ports i_clk]
set_property IOSTANDARD LVCMOS33 [get_ports i_clk]
set_property PACKAGE_PIN H16 [get_ports i_clk]

set_property IOSTANDARD LVCMOS33 [get_ports i_rst_n]
set_property PACKAGE_PIN W12 [get_ports i_rst_n] ; # dio0_p on connector e1

# --- 2. host interface (spi) ---
set_property IOSTANDARD LVCMOS33 [get_ports i_spi_clk]
set_property PACKAGE_PIN U12 [get_ports i_spi_clk] ; # spi_clk on e2

set_property IOSTANDARD LVCMOS33 [get_ports i_spi_cs_n]
set_property PACKAGE_PIN T12 [get_ports i_spi_cs_n]  ; # spi_cs on e2

set_property IOSTANDARD LVCMOS33 [get_ports i_spi_mosi]
set_property PACKAGE_PIN Y11 [get_ports i_spi_mosi] ; # spi_mosi on e2

set_property IOSTANDARD LVCMOS33 [get_ports o_spi_miso]
set_property PACKAGE_PIN W11 [get_ports o_spi_miso] ; # spi_miso on e2

# # ok so for the main memory (ddr3)
# ddr3 is wired to the zynq ps, not pl
# vivado handles these pins automatically, no manual constraints needed!!