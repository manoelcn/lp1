#include "io.h"

int main() {
    int number1 = readNumber();
    int number2 = readNumber();
    int result = number1 + number2;
    writeAnswer(result);
    return 0;
}
