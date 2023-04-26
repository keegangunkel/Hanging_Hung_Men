CC=gcc
CFLAGS=-g -Wall -Wextra -Wpedantic
LDFLAGS=-lm -lcurl -ljansson
DEPS = http.h
OBJ = main.c
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LDFLAGS)
clean:
	rm -f *.o main
