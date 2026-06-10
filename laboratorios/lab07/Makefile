CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -Iinclude

SRC = main.cpp
OBJ = $(SRC:.cpp=.o)
BIN = main

all: $(BIN)

$(BIN): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f *.o $(BIN)
