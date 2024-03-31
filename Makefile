CC = gcc  # Set the compiler (replace with your compiler if different)

# Target program
TARGET = main.c

# Source files
SRC = addstudents.c calculateaverage.c displaystudents.c functions.c  # Replace with your actual file names

# Rule to compile and link object files
all: $(TARGET)

$(TARGET): $(SRC)
    $(CC) -o $(TARGET) $(SRC)  # Compile and link source files

# Clean rule to remove object files (optional)
clean:
    rm -f *.o $(TARGET)