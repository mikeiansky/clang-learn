CC = gcc
CFLAGS = -Wall -g

SRCS = $(wildcard *.c) $(wildcard **/*.c)
OBJS = $(SRCS:.c=.o)
TARGET = executable

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
