#ifndef BOLETO_H
#define BOLETO_H

#include "pagamento.h"

class Boleto : public Pagamento
{
    protected:
        std::string m_codigoBarras;

    public:
        Boleto(double valor, std::string titular, std::string codigoBarras);

        bool autenticar()  override;
        void processar() override;
        void gerarComprovante() override;
};

#endif