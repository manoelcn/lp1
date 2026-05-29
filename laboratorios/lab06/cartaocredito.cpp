#include "cartaocredito.h"

#include <iostream>

CartaoCredito::CartaoCredito(double valor, std::string titular, std::string numeroCartao, std::string cvv)
    : Pagamento(valor, titular), m_numeroCartao(numeroCartao), m_cvv(cvv)
{
}

bool CartaoCredito::autenticar()
{
    if (m_numeroCartao.size() == 16 && m_cvv.size() == 3)
    {
        return true;
    }
    return false;
}

void CartaoCredito::processar()
{
    std::cout << "Processando pagamento no cartão..." << std::endl;
}

void CartaoCredito::gerarComprovante()
{
    std::cout << "Comprovante do cartão gerado." << std::endl;
}