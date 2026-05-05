all: primo.o main.o
	g++ -Wall -std=c++17 -o main primo.o main.o

main.o: main.cpp primo.h
	g++ -Wall -std=c++17 -c main.cpp

primo.o: primo.cpp primo.h
	g++ -Wall -std=c++17 -c primo.cpp

clean:
	rm -f main *.o
