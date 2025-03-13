CC = gcc
CFLAGS = -Wall -std=c99
TARGETS = p1 p2 p3 p4
all: $(TARGETS)
p1: p1.c
	$(CC) $(CFLAGS) -o p1 p1.c

p2: p2.c
	$(CC) $(CFLAGS) -o p2 p2.c

p3: p3.c
	$(CC) $(CFLAGS) -o p3 p3.c

p4: p4.c
	$(CC) $(CFLAGS) -o p4 p4.c

clean:
	rm -f $(TARGETS)

.PHONY: all clean
