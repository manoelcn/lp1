#include <iostream>
#include <iomanip>

int main()
{
    double numero1, numero2;
    double resultado;

    do
    {
        std::cout << "Entre com o primeiro valor: ";
        std::cin >> numero1;
        std::cout << "Entre com o segundo valor: ";
        std::cin >> numero2;

        if (numero1 > numero2)
        {
            std::cout << "Erro! Entre com um primeiro valor menor ou igual ao segundo." << std::endl;
        }

    } while (numero1 > numero2);

    resultado = (numero1 / numero2) * 100;
    std::cout << std::fixed << std::setprecision(2) << resultado << "%" << std::endl;

    return 0;
}