torreDeHanoi: torreDeHanoi.o
	g++ -std=c++17 -Wall -pedantic torreDeHanoi.o -o torreDeHanoi.out

torreDeHanoi.o: torreDeHanoi.cpp
	g++ -std=c++17 -Wall -pedantic -c torreDeHanoi.cpp

test: torreDeHanoi
	./torreDeHanoi.out

clean:
	rm -f torreDeHanoi.out *.o