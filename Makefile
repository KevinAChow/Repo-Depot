CC=g++

all: application

application: main.o
	$(CC) main.o -o application

main.o: main.cpp
	$(CC) -c main.cpp

clean:
	rm *.o application