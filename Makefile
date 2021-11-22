.PHONY = all clean
CC=gcc
OBJ=my_mat.o  main.o
NAME = connections
CFLAGS = -Wall -Werror -g

all : $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

my_mat.o: my_mat.c my_mat.h
main.o: main.c my_mat.h

clean:
	rm -f *.o *.a *.so my_mat main
