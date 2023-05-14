OBJECTS = Dictionary.o List.o Node.o Person.o
CXXFLAGS = -g
LDFLAGS =
CXX = g++

main: main.o $(OBJECTS)
	$(CXX) -g -o main main.o $(OBJECTS)

tests: tests.o $(OBJECTS)
	$(CXX) -g -o tests tests.o $(OBJECTS)

main.o: main.cpp Dictionary.h List.h Node.h Person.h

tests.o: tests.cpp doctest.h Dictionary.h List.h Node.h Person.h

Dictionary.o: Dictionary.cpp Dictionary.h List.h Node.h Person.h

List.o: List.cpp List.h Node.h Person.h

Node.o: Node.cpp Node.h Person.h

Person.o: Person.cpp Person.h

clean: 
	rm -f main tests main.o tests.o $(OBJECTS)