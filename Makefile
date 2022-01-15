all: menu.o stats.o main.c
	gcc -Wall -o wordstat main.c menu.o stats.o

menu.o: menu.h menu.c
	gcc -Wall -c menu.c

stats.o: stats.h stats.c
	gcc -Wall -c stats.c

clean:
	rm -f *.o wordstat