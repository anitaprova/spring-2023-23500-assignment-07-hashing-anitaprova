OBJECTS = Dictionary.o List.o Node.o
CXXFLAGS = -g
LDFLAGS =
CXX = g++

main: main.o $(OBJECTS)
	$(CXX) -g -o main main.o $(OBJECTS)

tests: tests.o $(OBJECTS)
	g++ -g -o tests tests.o $(OBJECTS)

main.o: main.cpp Dictionary.h Node.h

tests.o: tests.cpp doctest.h Node.h

Dictionary.o: Dictionary.cpp Dictionary.h Node.h List.h

List.o: List.cpp List.h Node.h 

Node.o: Node.cpp Node.h

clean: 
	rm -f main tests main.o tests.o $(OBJECTS)