#include <iostream>
#include <iomanip>

int readNumber(){
    int number;
    std::cout << "enter a number: ";
    std::cin >> number;
    return number;
}

void writeAnswer(int answer){
    std::cout << "result: " << answer << std::endl;
}

int main() {
    int number1 = readNumber();
    int number2 = readNumber();
    int result = number1 + number2;
    writeAnswer(result);
    return 0;
}
