[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/7Ub43yjY)
[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-2972f46106e565e64193e422d61a12cf1da4916b45550586e14ef0a7c637dd04.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=24030230)
# Lab #07 — Herança e Polimorfismo em C++

# Objetivos

Neste laboratório, você irá desenvolver parte de um sistema de processamento de pagamentos semelhante ao que é encontrado em plataformas reais de e-commerce, marketplaces e aplicativos financeiros.

O objetivo principal é praticar conceitos fundamentais de Programação Orientada a Objetos em C++, especialmente:

* herança;
* sobrescrita de métodos;
* classes abstratas;
* métodos virtuais;
* polimorfismo.

Ao final da atividade, espera-se que você seja capaz de construir hierarquias de classes reutilizáveis e extensíveis, utilizando técnicas comuns no desenvolvimento profissional de software.

---

# Contextualização

Uma plataforma de pagamentos precisa suportar diferentes formas de pagamento, como:

* Pix;
* Cartão de Crédito;
* Boleto Bancário.

Cada forma de pagamento possui comportamentos específicos:

* autenticação;
* processamento;
* geração de comprovantes.

O sistema deve ser desenvolvido de forma flexível, permitindo a adição de novos tipos de pagamento futuramente sem alterar a lógica principal do sistema.

---

# Estrutura Esperada do Projeto

```txt
/
│
├── main.cpp
├── pagamento.h
├── pagamento.cpp
├── pix.h
├── pix.cpp
├── cartaoCredito.h
├── cartaoCredito.cpp
├── boleto.h
├── boleto.cpp
├── sistemapagamento.h
├── sistemapagamento.cpp
├── Makefile
└── README.md
```

---

# Parte 1 — Classe Base Abstrata

Crie uma classe abstrata chamada:

```cpp
Pagamento
```

Com os seguintes atributos **protegidos**:

```cpp
double valor;
std::string titular;
```

## Métodos obrigatórios

### Construtor

```cpp
Pagamento(double valor, std::string titular);
```

### Métodos virtuais puros

```cpp
virtual bool autenticar() = 0;
virtual void processar() = 0;
virtual void gerarComprovante() = 0;
```

### Método virtual

```cpp
virtual void exibirResumo();
```

A implementação padrão deve exibir:

* titular;
* valor do pagamento.

---

# Parte 2 — Classe Pix

Crie a classe:

```cpp
Pix
```

herdando de:

```cpp
Pagamento
```

Com o atributo adicional:

```cpp
std::string chavePix;
```

## Regras

### `autenticar()`

Deve retornar `true` apenas se a chave Pix possuir pelo menos 5 caracteres.


### `processar()`

Exibir:

```txt
Processando pagamento via Pix...
```


### `gerarComprovante()`

Exibir:

```txt
Comprovante Pix gerado.
```


### `exibirResumo()`

Sobrescrever o método da classe base.

Utilize:

```cpp
Pagamento::exibirResumo();
```

para reaproveitar parte da implementação original e acrescente a informação da chave pix.

---

# Parte 3 — Classe CartaoCredito

Crie a classe:

```cpp
CartaoCredito
```

herdando de:

```cpp
Pagamento
```

Com os atributos adicionais:

```cpp
std::string numeroCartao;
std::string cvv;
```

## Regras

### `autenticar()`

Deve validar:

* cartão com 16 caracteres;
* CVV com 3 caracteres.


### `processar()`

Exibir:

```txt
Processando pagamento no cartão...
```


### `gerarComprovante()`

Exibir:

```txt
Comprovante do cartão gerado.
```

---

# Parte 4 — Classe Boleto

Crie a classe:

```cpp
Boleto
```

herdando de:

```cpp
Pagamento
```

Com o atributo adicional:

```cpp
std::string codigoBarras;
```


## Regras

### `autenticar()`

Deve retornar `true` apenas se o código possuir 44 caracteres.


### `processar()`

Exibir:

```txt
Gerando boleto bancário...
```


### `gerarComprovante()`

Exibir:

```txt
Boleto emitido com sucesso.
```

---

# Parte 5 — Sistema de Pagamentos

Crie a classe:

```cpp
SistemaPagamento
```

Responsável por gerenciar vários pagamentos utilizando **polimorfismo**.

##  Método obrigatório

```cpp
void executarPagamento(Pagamento& pagamento);
```

Responsável por adicionar pagamentos ao sistema. O método deve:

1. `exibirResumo();`
2. `autenticar();`
3. `processar();`
4. `gerarComprovante();`

Caso a autenticação falhe:

```
Falha na autenticação.
```

deve ser exibido, e o pagamento não deve ser processado.

---

# Compilação

O projeto deve compilar com:

```bash
make
```

Execução:

```bash
./pagamentos
```

Você precisa implementar o `Makefile` e garantir que o binário gerado se chama `pagamentos`.