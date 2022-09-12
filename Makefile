CC = gcc
CFlags = -lm -Wall -ggdb

output: main.c
	$(CC) $(CFlags) main.c -o cplot
