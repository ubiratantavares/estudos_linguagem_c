CC = gcc
CFLAGS = -Wall -Wextra
OBJ = main.o menu.o arquivo.o crud.o

agenda: $(OBJ)
	$(CC) $(CFLAGS) -o agenda $(OBJ)

main.o: main.c agenda.h
menu.o: menu.c agenda.h
arquivo.o: arquivo.c agenda.h
crud.o: crud.c agenda.h

clean:
	rm -f *.o agenda

