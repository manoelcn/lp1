#include "pagamento.h"

#include <iostream>

Pagamento::Pagamento(double valor, std::string titular)
    : m_valor(valor), m_titular(titular)
{
}

void Pagamento::exibirResumo()
{
    std::cout << "Titular: " << m_titular << std::endl;
    std::cout << "Valor do pagamento: " << m_valor << std::endl;
}