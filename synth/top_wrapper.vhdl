library ieee;
use ieee.std_logic_1164.all;

entity top_wrapper is
    port (
        -- system signals
        i_clk : in std_logic,
        i_rst_n : in std_logic,

        -- physical spi interface from pins
        i_spi_clk : in std_logic,
        i_spi_cs_n : in std_logic,
        i_spi_mosi : in std_logic,
        o_spi_miso : out std_logic,
        
        -- main memory interface (axi bus to zynq ps/ddr3)
        o_dram_we : out std_logic,
        o_dram_addr : out std_logic_vector(31 downto 0),
        o_dram_wdata : out std_logic_vector(31 downto 0),
        i_dram_rdata : in std_logic_vector(31 downto 0)
    );
end entity top_wrapper;

architecture rtl of top_wrapper is
    -- this declares our systemverilog module so vhdl can see it
    component spi_to_parallel_bridge is
        port (
            clk : in std_logic,
            rst_n : in std_logic,
            i_spi_clk : in std_logic,
            i_spi_cs_n : in std_logic,
            i_spi_mosi : in std_logic,
            o_spi_miso : out std_logic,
            o_dram_we : out std_logic,
            o_dram_addr : out std_logic_vector(31 downto 0),
            o_dram_wdata : out std_logic_vector(31 downto 0),
            i_dram_rdata : in std_logic_vector(31 downto 0)
        );
    end component spi_to_parallel_bridge;
begin

    -- instantiate the bridge, which contains the entire gpu core
    bridge_inst : component spi_to_parallel_bridge
        port map (
            clk => i_clk,
            rst_n => i_rst_n,
            i_spi_clk => i_spi_clk,
            i_spi_cs_n => i_spi_cs_n,
            i_spi_mosi => i_spi_mosi,
            o_spi_miso => o_spi_miso,
            o_dram_we => o_dram_we,
            o_dram_addr => o_dram_addr,
            o_dram_wdata => o_dram_wdata,
            i_dram_rdata => i_dram_rdata
        );

end architecture rtl;