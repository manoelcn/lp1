CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -pedantic
TARGET = app

SRCS = main.cpp aluno.cpp disciplina.cpp turma.cpp
OBJS = $(SRCS:.cpp=.o)

.PHONY: all run clean rebuild

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)

rebuild: clean all
