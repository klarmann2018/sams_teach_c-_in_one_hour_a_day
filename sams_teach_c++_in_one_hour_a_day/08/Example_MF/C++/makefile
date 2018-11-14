main: main.o employee.o
	g++ main.o employee.o -o main

main.o: main.cpp employee.h
	g++ -c main.cpp

employee.o: employee.cpp employee.h
	g++ -c employee.cpp

clean:
	rm *.o

