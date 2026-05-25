CC     = gcc
FLAGS  = -Wall -g

# Find ALL .c files in ALL folders and subfolders
SRCS   = $(shell find . -name "*.c")

OBJS   = $(SRCS:.c=.o)
TARGET = lsm

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -lm -o $(TARGET)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	find . -name "*.o" -delete
	rm -f $(TARGET)
