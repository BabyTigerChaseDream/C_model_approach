inventory: inventory.o readline.o
	gcc -o inventory inventory.o readline.o

inventory.o: inventory.c readline.h
	gcc -c -g3 inventory.c

readline.o: readline.c readline.h
	gcc -c -g3 readline.c

clean:
	rm *.o inventory
