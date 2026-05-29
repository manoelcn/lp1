#ifndef PIX_H
#define PIX_H

#include "pagamento.h"
#include <string>

class Pix : public Pagamento
{
protected:
    std::string m_chavePix;

public:
    Pix(double valor, std::string titular, std::string chavePix);

    bool autenticar() override;
    void processar() override;
    void gerarComprovante() override;
    void exibirResumo() override;
};

#endif