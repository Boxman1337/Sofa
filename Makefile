COMPILER = g++
CPP_FILES = ./src/main.cpp

OUTPUT_FILENAME_LINUX = sofa.bin
CURSES_LIB_LINUX = -lncurses

OUTPUT_FILENAME_WINDOWS = sofa.exe
CURSES_LIB_WINDOWS = -lpdcurses

DEBUG_FLAGS = -Wall -Wextra

linux:
		$(COMPILER) $(CPP_FILES) -o $(OUTPUT_FILENAME_LINUX) $(CURSES_LIB_LINUX)

windows:
		$(COMPILER) $(DEBUG_FLAGS) $(CPP_FILES) -o $(OUTPUT_FILENAME_WINDOWS) $(CURSES_LIB_WINDOWS)

# https://stackoverflow.com/questions/32410125/valgrind-shows-memory-leaks-from-ncurses-commands-after-using-appropriate-free
valgrind:
		valgrind --leak-check=full ./$(OUTPUT_FILENAME_LINUX)
