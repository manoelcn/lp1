CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -Iinclude

SRC = src/main.cpp src/tempo.cpp
OBJ = $(SRC:.cpp=.o)
BIN = tempo

all: $(BIN)

$(BIN): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f src/*.o $(BIN)
