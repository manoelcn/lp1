#include <iostream>
#include "../include/tempo.h"

void exibirMenu() {
    std::cout << "\n========== SISTEMA DE TEMPO DOS ROBOS ==========\n";
    std::cout << "1 - Cadastrar tempo do Robo A\n";
    std::cout << "2 - Cadastrar tempo do Robo B\n";
    std::cout << "3 - Exibir tempos\n";
    std::cout << "4 - Somar tempos\n";
    std::cout << "5 - Subtrair tempos\n";
    std::cout << "6 - Comparar tempos\n";
    std::cout << "7 - Incrementar Robo A (pre-incremento)\n";
    std::cout << "8 - Incrementar Robo A (pos-incremento)\n";
    std::cout << "0 - Sair\n";
    std::cout << "Opcao: ";
}

int main() {
    Tempo roboA;
    Tempo roboB;

    int opcao;

    do {
        exibirMenu();
        std::cin >> opcao;

        std::cout << std::endl;

        switch (opcao) {

            case 1:
                std::cout << "Digite o tempo do Robo A (h m s): ";
                std::cin >> roboA;
                std::cout << "Tempo cadastrado com sucesso!\n";
                break;

            case 2:
                std::cout << "Digite o tempo do Robo B (h m s): ";
                std::cin >> roboB;
                std::cout << "Tempo cadastrado com sucesso!\n";
                break;

            case 3:
                std::cout << "Robo A: " << roboA << std::endl;
                std::cout << "Robo B: " << roboB << std::endl;
                break;

            case 4: {
                Tempo soma = roboA + roboB;

                std::cout << "Robo A: " << roboA << std::endl;
                std::cout << "Robo B: " << roboB << std::endl;
                std::cout << "Soma dos tempos: " << soma << std::endl;

                break;
            }

            case 5: {
                Tempo diferenca = roboA - roboB;

                std::cout << "Robo A: " << roboA << std::endl;
                std::cout << "Robo B: " << roboB << std::endl;
                std::cout << "Diferenca (A - B): " << diferenca << std::endl;

                break;
            }

            case 6:

                std::cout << "Robo A: " << roboA << std::endl;
                std::cout << "Robo B: " << roboB << std::endl;

                if (roboA == roboB) {
                    std::cout << "Os robos fizeram exatamente o mesmo tempo.\n";
                }
                else if (roboA < roboB) {
                    std::cout << "O Robo A foi mais rapido.\n";
                }
                else {
                    std::cout << "O Robo B foi mais rapido.\n";
                }

                std::cout << "\nOutras comparacoes:\n";

                std::cout << "Robo A == Robo B: " << (roboA == roboB) << std::endl;
                std::cout << "Robo A != Robo B: " << (roboA != roboB) << std::endl;
                std::cout << "Robo A < Robo B : " << (roboA < roboB) << std::endl;
                std::cout << "Robo A > Robo B : " << (roboA > roboB) << std::endl;
                std::cout << "Robo A <= Robo B: " << (roboA <= roboB) << std::endl;
                std::cout << "Robo A >= Robo B: " << (roboA >= roboB) << std::endl;

                break;

            case 7:

                std::cout << "Tempo atual do Robo A: " << roboA << std::endl;

                ++roboA;

                std::cout << "Depois do pre-incremento: " << roboA << std::endl;

                break;

            case 8: {
                std::cout << "Tempo atual do Robo A: " << roboA << std::endl;

                Tempo antigo = roboA++;

                std::cout << "Valor retornado pelo pos-incremento: "
                     << antigo << std::endl;

                std::cout << "Novo valor do Robo A: "
                     << roboA << std::endl;

                break;
            }

            case 0:
                std::cout << "Encerrando o sistema...\n";
                break;

            default:
                std::cout << "Opcao invalida!\n";
        }

    } while (opcao != 0);

    return 0;
}