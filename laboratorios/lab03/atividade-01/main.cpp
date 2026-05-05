#include <iostream>

int somaDigitos(int n);

int main()
{
    int input;
    std::cout << "Entre com um número inteiro positivo: ";
    std::cin >> input;
    std::cout << "A soma dos digitos de " << input << " é " << somaDigitos(input) << std::endl;
}

int somaDigitos(int n)
{
    if (n < 10)
    {
        return n;
    }
    int ultimoDigito = n % 10;
    return somaDigitos(n / 10) + ultimoDigito;
}