CC=g++
PROJECT=application
SOURCES=main.cpp Rectangle.cpp
OBJECTS=$(SOURCES:.cpp=.o)

all: $(PROJECT)

$(PROJECT): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(PROJECT)

.cpp.o:
	$(CC) -c $< -o $@

clean:
	rm *.o $(PROJECT)