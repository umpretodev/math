CC := gcc
CFLAGS := -Wall -Wextra -pedantic -std=c11

TARGET := main

SRCS := main.c src/impls/sum.c

OBJS := $(SRCS:.c=.o)

.PHONY: all clean run

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $@

main.o: main.c src/heads/sum.h
src/sum.o: src/impls/sum.c src/impls/sum.h

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
