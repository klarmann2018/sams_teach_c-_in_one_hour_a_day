#MakeFile
main: main.o tool.o
	gcc -o main main.o tool.o
main.o: main.c tool.h
	cc -c main.c

tool.o: tool.c tool.h
	cc -c tool.c

.PHONY:clean
clean:
	rm *.o main
