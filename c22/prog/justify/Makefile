justify: justify.o word.o line.o
	gcc -o justify justify.o word.o line.o

justify.o: justify.c word.h line.h
	gcc -g3 -c justify.c

word.o: word.c word.h
	gcc -g3 -c word.c

line.o: line.c line.h
	gcc -g3 -c line.c

