// Objetivo inicial: Mover todos os N discos de A para C
// A = origem, C = destino, B = auxiliar

// Mova N-1 discos de A para B, usando C;
// Mova o último disco de A para C;
// Mova N-1 discos de B para C, usando A.

// Caso base: com 1 disco, mova de A para C

#include <iostream>

void torreDeHanoi(int numeroDeDiscos, char origem, char destino, char auxiliar)
{
    if (numeroDeDiscos == 1)
    {
        std::cout << "Mova o disco de " << origem << " para " << destino << std::endl;
        return;
    }

    torreDeHanoi(numeroDeDiscos - 1, origem, auxiliar, destino);

    std::cout << "Mova o disco de " << origem << " para " << destino << std::endl;

    torreDeHanoi(numeroDeDiscos - 1, auxiliar, destino, origem);
}

int main()
{
    int numeroDeDiscos;
    char origem = 'A';
    char destino = 'C';
    char auxiliar = 'B';
    std::cout << "Entre com o número de discos para resolver a torre de Hanoi (A, B, C): ";
    std::cin >> numeroDeDiscos;

    torreDeHanoi(numeroDeDiscos, origem, destino, auxiliar);

    return 0;
}
