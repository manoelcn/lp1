#include "boleto.h"

#include <iostream>

Boleto::Boleto(double valor, std::string titular, std::string codigoBarras)
    : Pagamento(valor, titular), m_codigoBarras(codigoBarras)
{
}

bool Boleto::autenticar()
{
    if (m_codigoBarras.size() == 44)
    {
        return true;
    }
    return false;
}

void Boleto::processar()
{
    std::cout << "Gerando boleto bancário..." << std::endl;
}

void Boleto::gerarComprovante()
{
    std::cout << "Boleto emitido com sucesso." << std::endl;
}