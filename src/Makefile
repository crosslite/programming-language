CC = gcc

INCLUDE_DIR = ../include/

CFLAGS += -I$(INCLUDE_DIR)

OBJS += main.o
OBJS += comp.o

TARGET = ../compiler

all: $(TARGET)

$(TARGET): $(OBJS)
	@ echo linking $(OBJS)
	@ $(CC) $(OBJS) -o $(TARGET)

.c.o:
	@ echo compiling $<
	@ $(CC) -c $< -o $@ $(CFLAGS)

clean:
	@ rm -f $(OBJS)
.PHONY: clean

