SRC_DIR = ./src/

all:
	@ $(MAKE) -C $(SRC_DIR) --no-print-directory
	@ $(MAKE) -c $(SRC_DIR) clean --no-print-directory
.PHONY: all

