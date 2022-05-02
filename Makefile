CC = gcc
CFLAGS=-g -Wall -Werror -fsanitize=address -std=c99
 

206H4: 206H4.c
	$(CC) $(CFLAGS) -c 206H4.c
	$(CC) $(CFLAGS) -o 206H4 206H4.o