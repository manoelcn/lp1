#include <iostream>
#include "pix.h"
#include "cartaocredito.h"
#include "boleto.h"
#include "sistemapagamento.h"

int main() {
    SistemaPagamento sistema;
    Pix pix1(150.0, "Joao", "joao@email.com");
    Pix pix2(200.0, "Maria", "abc");
    CartaoCredito cartao1(500.0, "Carlos", "1234567812345678", "123");
    CartaoCredito cartao2(300.0, "Ana", "123", "12");
    Boleto boleto1(1000.0, "Fernanda", "12345678901234567890123456789012345678901234");
    Boleto boleto2(1000.0, "Joana", "12345678901234567890123");
    sistema.executarPagamento(pix1);
    sistema.executarPagamento(pix2);
    sistema.executarPagamento(cartao1);
    sistema.executarPagamento(cartao2);
    sistema.executarPagamento(boleto1);
    sistema.executarPagamento(boleto2);
    
    return 0;
}