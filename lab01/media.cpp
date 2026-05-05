#include <iostream>
#include <iomanip>

int main()
{
    double nota;
    double soma = 0;
    double media;

    for (int i = 0; i < 3; i++)
    {
        std::cout << "Entre com a nota da unidade " << i + 1 << " : ";
        std::cin >> nota;
        soma += nota;
    }

    media = soma / 3;

    std::cout << "Média: " << std::fixed << std::setprecision(2) << media << std::endl;

    return 0;
}