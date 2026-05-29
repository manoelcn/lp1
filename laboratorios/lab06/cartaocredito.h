#ifndef CARTAOCREDITO_H
#define CARTAOCREDITO_H

#include "pagamento.h"
#include <string>

class CartaoCredito : public Pagamento
{
protected:
    std::string m_numeroCartao;
    std::string m_cvv;

public:
    CartaoCredito(double valor, std::string titular, std::string numeroCartao, std::string cvv);

    bool autenticar() override;
    void processar() override;
    void gerarComprovante() override;
};

#endif