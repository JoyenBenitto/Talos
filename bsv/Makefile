TOP_FILE  := ./axistream.bsv
BSC_FLAGS := -verilog -u -keep-fires
BUILD_DIR := build
INTRM_DIR := $(BUILD_DIR)/intermediate
VERILOG_DIR := $(BUILD_DIR)/verilog

.PHONY: generate_verilog
generate_verilog:
	@echo "Generating Verilog code from Bluespec..."
	@mkdir -p $(INTRM_DIR) $(VERILOG_DIR)
	@bsc  $(BSC_FLAGS) -vdir $(VERILOG_DIR) -bdir $(INTRM_DIR) $(TOP_FILE)

.PHONY: clean
clean:
	@echo "Cleaning build directories..."
	@rm -rf $(BUILD_DIR)