
relinvent: relinvent.o readline.o
	gcc -o relinvent relinvent.o readline.o

relinvent.o: relinvent.c readline.h
	gcc -c relinvent.c

readline.o: readline.c readline.h
	gcc -c readline.c

clean:
	rm *.o 
