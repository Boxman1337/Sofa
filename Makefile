# Define Compiler
CC = g++

# Compiler Flags
CFLAGS = -g -Wall -lncurses

# Build target executable
SRC = src
INCLUDES = include
TARGET = main

all: $(TARGET)

$(TARGET): $(SRC)/$(TARGET).cpp
	$(CC) $(CFLAGS) -I $(INCLUDES) -o $@ $^




