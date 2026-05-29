TARGET = pagamentos

CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -I.

SRCS = main.cpp \
       pagamento.cpp \
       pix.cpp \
       cartaocredito.cpp \
       boleto.cpp \
       sistemapagamento.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)