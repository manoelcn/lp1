main: main.o io.o
	g++ -std=c++17 -Wall -pedantic main.o io.o -o main

main.o: main.cpp io.h
	g++ -std=c++17 -Wall -pedantic -c main.cpp

io.o: io.cpp
	g++ -std=c++17 -Wall -pedantic -c io.cpp

test: main
	./main

clean:
	rm -f main *.o