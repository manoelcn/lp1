#include <iostream>
#include "io.h"

int readNumber(){
    int number;
    std::cout << "enter a number: ";
    std::cin >> number;
    return number;
}

void writeAnswer(int answer){
    std::cout << "result: " << answer << std::endl;
}

