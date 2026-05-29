TOP_FILE    := ./axistream.bsv
BSC_FLAGS   := -verilog -u -keep-fires
BUILD_DIR   := build
INTRM_DIR   := $(BUILD_DIR)/intermediate
VERILOG_DIR := $(BUILD_DIR)/verilog

SIM_DIR     := sim_build
SIM_BIN     := $(SIM_DIR)/sim_axistream
DUT_V       := $(VERILOG_DIR)/mkAxistream32.v
TB_V        := axistream_tb.v

.PHONY: generate_verilog
generate_verilog:
	@echo "Generating Verilog code from Bluespec..."
	@mkdir -p $(INTRM_DIR) $(VERILOG_DIR)
	@bsc $(BSC_FLAGS) -vdir $(VERILOG_DIR) -bdir $(INTRM_DIR) $(TOP_FILE)

.PHONY: sim
sim: $(DUT_V)
	@echo "Compiling simulation..."
	@verilator --binary --timing --trace \
		-top-module axistream_tb \
		-Wno-TIMESCALEMOD \
		$(DUT_V) $(TB_V) \
		--Mdir $(SIM_DIR) \
		-o sim_axistream

.PHONY: run
run: sim
	@echo "Running simulation..."
	@$(SIM_BIN)
	@echo "VCD written to $(SIM_DIR)/axistream.vcd"

.PHONY: clean
clean:
	@echo "Cleaning build directories..."
	@rm -rf $(BUILD_DIR) $(SIM_DIR)