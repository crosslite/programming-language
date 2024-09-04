SRC_DIR = ./src/
TEST_DIR = ./test/

all:
	@ $(MAKE) -C $(SRC_DIR) --no-print-directory
	@ $(MAKE) -C $(SRC_DIR) clean --no-print-directory
.PHONY: all

test:
	./compiler ./test/main.pl -o ./test/main.txt
.PHONY: test

