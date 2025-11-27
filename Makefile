CC := gcc
CFLAGS := -Wall -Wextra -pedantic -std=c11 -Isrc/heads

TARGET := main
SRCS := main.c $(wildcard src/impls/*.c)
OBJS := $(patsubst %.c, %.o, $(SRCS))

.PHONY: all clean run

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $@ -lm

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

run: $(TARGET)
	./$(TARGET)
