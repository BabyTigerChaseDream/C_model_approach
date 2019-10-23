inventory: inventory.o readline.o qsort.o
	gcc -o inventory inventory.o readline.o qsort.o

inventory.o: inventory.c inventory.h readline.h qsort.h
	gcc -c -g3 inventory.c

readline.o: readline.c readline.h
	gcc -c -g3 readline.c

qsort.o: qsort.c qsort.h inventory.h
	gcc -c -g3 qsort.c

clean:
	rm *.o inventory
