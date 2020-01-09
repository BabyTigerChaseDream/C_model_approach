inventory: inventory.o readline.o
	gcc -o inventory inventory.o readline.o

inventory.o: inventory.c readline.h
	gcc -c inventory.c

inventory2fd: inventory2fd.o readline.o
	gcc -o inventory2fd inventory2fd.o readline.o

inventory2fd.o: inventory2fd.c readline.h
	gcc -c inventory2fd.c

readline.o: readline.c readline.h
	gcc -c readline.c
