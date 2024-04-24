# Compiler
CC = gcc
# Compiler flags
CFLAGS = -Wall -Wextra -g

# Source files
SRCS = addstudents2.c calculateaverage2.c displaystudents2.c freeStudents2.c functions2.h main2.c

# Object files
OBJS = $(SRCS:.c=.o)

# Executable name
TARGET = myprogram

# Default target
all: $(TARGET)

# Linking the object files to create the executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Compiling individual source files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean command to remove object files and the executable
clean:
	rm -f $(OBJS) $(TARGET)
