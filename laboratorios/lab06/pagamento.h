#ifndef PAGAMENTO_H
#define PAGAMENTO_H

#include <string>

class Pagamento
{
protected:
    double m_valor;
    std::string m_titular;

public:
    Pagamento(double valor, std::string titular);

    virtual bool autenticar() = 0;
    virtual void processar() = 0;
    virtual void gerarComprovante() = 0;
    virtual void exibirResumo();
};

#endif