#include "sistemapagamento.h"

#include <iostream>

void SistemaPagamento::executarPagamento(Pagamento &pagamento)
{
    pagamento.exibirResumo();
    if (pagamento.autenticar() == false)
    {
        std::cout << "Falha na autenticação." << std::endl;
        return;
    }
    pagamento.processar();
    pagamento.gerarComprovante();
}