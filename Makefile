CC=gcc
OBJS=my_mat.o  main.o
EXEC=connections
DEBUG = -g
CFLAGS = -std=c99  -Wall -Werror $(DEBUG)

all : $(OBJS)
	$(CC) $(OBJS) -o $(EXEC)


my_mat.o: my_mat.c my_mat.h
main.o: main.c my_mat.h

clean:
	rm -f $(EXEC) $(OBJS)
