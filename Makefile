CC=g++
PROJECT=application

all: $(PROJECT)

$(PROJECT): main.o
	$(CC) main.o -o $(PROJECT)

main.o: main.cpp
	$(CC) -c main.cpp

clean:
	rm *.o $(PROJECT)