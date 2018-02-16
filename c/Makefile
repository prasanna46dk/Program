CC=gcc
CFLAGS=-g -c 
INCLUDE=-I include/
LDFLAGS=-g
SRCFILE=queue.c stack.c tree.c
OBJFILE=$(SRCFILE:.c=.o)

main: stack.o queue.o tree.o
	$(CC) $(LDFLAGS) src/main.c bin/stack.o bin/queue.o bin/tree.o -o bin/treeMain $(INCLUDE) 
tree.o:
	$(CC) $(CFLAGS) src/tree.c -o bin/tree.o $(INCLUDE)
queue.o:
	$(CC) $(CFLAGS) src/queue.c -o bin/queue.o $(INCLUDE)
stack.o:
	$(CC) $(CFLAGS) src/stack.c -o bin/stack.o $(INCLUDE)
#.c.o:
#	$(CC) $(CFLAGS) src/$< -o bin/$@
clean:
	rm -rf bin/*
