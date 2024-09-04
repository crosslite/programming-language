SRC_DIR = ./src/

all:
	@ $(MAKE) -C $(SRC_DIR) --no-print-directory
	@ $(MAKE) -C $(SRC_DIR) clean --no-print-directory
.PHONY: all

