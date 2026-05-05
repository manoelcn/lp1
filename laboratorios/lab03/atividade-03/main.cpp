#include <iostream>
#include "primo.h"

int main()
{

    int n;
    int i = 2;
    std::cout << "Entre com um número decimal: ";
    std::cin >> n;

    int result = primo(n, i);

    if (result == true)
    {
        std::cout << "O número " << n << " é primo. " << std::endl;
    }
    else
    {
        std::cout << "O número " << n << " não é primo. " << std::endl;
    }
    return 0;
}