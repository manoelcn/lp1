#include "pix.h"

#include <iostream>

Pix::Pix(double valor, std::string titular, std::string chavePix)
    : Pagamento(valor, titular), m_chavePix(chavePix)
{
}

bool Pix::autenticar()
{
    if (m_chavePix.size() >= 5)
    {
        return true;
    }
    return false;
}

void Pix::processar()
{
    std::cout << "Processando pagamento via Pix..." << std::endl;
}

void Pix::gerarComprovante()
{
    std::cout << "Comprovante Pix gerado." << std::endl;
}

void Pix::exibirResumo()
{
    Pagamento::exibirResumo();
    std::cout << "Chave Pix: " << m_chavePix << std::endl;
}