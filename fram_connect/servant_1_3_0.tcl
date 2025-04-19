project_new servant_1_3_0 -overwrite
set_global_assignment -name FAMILY "Cyclone IV E"
set_global_assignment -name DEVICE EP4CE22F17C6
set_global_assignment -name TOP_LEVEL_ENTITY servive
set_parameter -name memfile /mnt/d/serv_project/fusesoc_libraries/serv/sw/zephyr_phil.hex
set_parameter -name memsize 32768
set_global_assignment -name VERILOG_FILE src/serv_1.3.0/rtl/serv_bufreg.v
set_global_assignment -name VERILOG_FILE src/serv_1.3.0/rtl/serv_bufreg2.v
set_global_assignment -name VERILOG_FILE src/serv_1.3.0/rtl/serv_alu.v
set_global_assignment -name VERILOG_FILE src/serv_1.3.0/rtl/serv_csr.v
set_global_assignment -name VERILOG_FILE src/serv_1.3.0/rtl/serv_ctrl.v
set_global_assignment -name VERILOG_FILE src/serv_1.3.0/rtl/serv_decode.v
set_global_assignment -name VERILOG_FILE src/serv_1.3.0/rtl/serv_immdec.v
set_global_assignment -name VERILOG_FILE src/serv_1.3.0/rtl/serv_mem_if.v
set_global_assignment -name VERILOG_FILE src/serv_1.3.0/rtl/serv_rf_if.v
set_global_assignment -name VERILOG_FILE src/serv_1.3.0/rtl/serv_rf_ram_if.v
set_global_assignment -name VERILOG_FILE src/serv_1.3.0/rtl/serv_rf_ram.v
set_global_assignment -name VERILOG_FILE src/serv_1.3.0/rtl/serv_state.v
set_global_assignment -name VERILOG_FILE src/serv_1.3.0/rtl/serv_debug.v
set_global_assignment -name VERILOG_FILE src/serv_1.3.0/rtl/serv_top.v
set_global_assignment -name VERILOG_FILE src/serv_1.3.0/rtl/serv_rf_top.v
set_global_assignment -name VERILOG_FILE src/serv_1.3.0/rtl/serv_aligner.v
set_global_assignment -name VERILOG_FILE src/serv_1.3.0/rtl/serv_compdec.v
set_global_assignment -name VERILOG_FILE src/servile_1.3.0/servile/servile_rf_mem_if.v
set_global_assignment -name VERILOG_FILE src/servile_1.3.0/servile/servile_mux.v
set_global_assignment -name VERILOG_FILE src/servile_1.3.0/servile/servile_arbiter.v
set_global_assignment -name VERILOG_FILE src/servile_1.3.0/servile/servile.v
set_global_assignment -name VERILOG_FILE src/servant_1.3.0/servant/servant_timer.v
set_global_assignment -name VERILOG_FILE src/servant_1.3.0/servant/servant_gpio.v
set_global_assignment -name VERILOG_FILE src/servant_1.3.0/servant/servant_mux.v
set_global_assignment -name SYSTEMVERILOG_FILE src/servant_1.3.0/servant/servant_ram_quartus.sv
set_global_assignment -name VERILOG_FILE src/servant_1.3.0/servant/servant.v
set_global_assignment -name SDC_FILE src/servant_1.3.0/data/de0_nano.sdc
source src/servant_1.3.0/data/de0_nano.tcl
set_global_assignment -name VERILOG_FILE src/servant_1.3.0/servant/servive_clock_gen.v
set_global_assignment -name VERILOG_FILE src/servant_1.3.0/servant/servive.v
