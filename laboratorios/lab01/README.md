[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/Lc_TcZK6)
[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-2972f46106e565e64193e422d61a12cf1da4916b45550586e14ef0a7c637dd04.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=23268841)
# Lab #01 - A linguagem C++

Neste laboratório iremos ter um primeiro contato com a linguagem C++. A proposta é usarmos um ambiente de programação e desenvolvimento em nuvem com o auxílio das ferramentas e serviços oferecidos pelo GitHub para começar a ter familiaridade com a linguagem.

### GitHub

Visão geral do [GitHub](https://docs.github.com/pt/get-started/start-your-journey/about-github-and-git).

### GitHub Classrooom

Visão geral do [GitHub Classroom](https://docs.github.com/pt/education/manage-coursework-with-github-classroom/get-started-with-github-classroom/about-github-classroom).

### GitHub Codespaces

Visão geral do [GitHub Codespaces](https://docs.github.com/pt/codespaces/overview).

### Tipos de dados em C++

O C++, assim como o C, é uma linguagem fortemente tipada, o que significa que é necessário especificar o tipo da variável ao declará-la. Os tipos primitivos são:

- `int`: números inteiros;
- `char`: caracteres ASCII (`‘A’`, `‘a’`, etc.);
- `float` / `double`: números de ponto flutuante (sem e com dupla precisão);
- `bool`: verdadeiro (_true_) ou falso (_false_).

Existem algumas outras variações destes tipos fundamentais que basicamente mudam sua precisão e consequentemente o seu espaço de armzazenamento.

A seguir, é demonstrado um exemplo de código com diferentes tipos de declarações.

```c++
#include <iostream>

int main() {
    int inteiro = 10;
    char caractere = 'A';
    double num1ponto5 = 1.5;
    float num1ponto5f = 1.5f;
    bool condicao = true;

    std::cout << "Inteiro: " << inteiro << '\n'
              << "Caractere: " << caractere << '\n'
              << "Double: " << num1ponto5 << '\n'
              << "Float: " << num1ponto5f << '\n';

    if (condicao == true) {
        // Exibe o valor de condicao usando std::boolalpha para mostrar
        // true/false em vez de 1/0
        std::cout << std::boolalpha << condicao << '\n';
        condicao = false;
    }
    if (condicao == false) {
        std::cout << std::boolalpha << condicao << '\n';
    }

    // Saída:
    // Inteiro: 10
    // Caractere: A
    // Double: 1.5
    // Float: 1.5
    // true
    // false

    return 0;
}
```

### Entrada e saída de dados em C++

Em C++, a entrada e saída de dados permitem que o programa interaja com o usuário. Isso é feito principalmente por meio da biblioteca `<iostream>`, utilizando dois objetos fundamentais: `cin` (entrada) e `cout` (saída). Todos eles ficam no _namespace_ `std`.

O `std::cout` é usado para exibir informações na tela, enviando dados para a saída padrão (geralmente o terminal). Já o `std::cin` é utilizado para ler dados digitados pelo usuário, capturando valores da entrada padrão (teclado).

Para usarmos esses objetos de saída e entrada usamos, respectivamente, os operadores de inserção (`<<`) e extração (`>>`). Veja um exemplo:

```c++
#include <iostream>

int main() {
    int numeros[3];

    std::cout << "Digite 3 numeros:" << std::endl;

    for(int i = 0; i < 3; i++) {
        std::cin >> numeros[i];
    }

    std::cout << "Numeros digitados:" << std::endl;

    for(int i = 0; i < 3; i++) {
        std::cout << numeros[i] << std::endl;
    }

    return 0;
}
```

## Atividade 1.1. Manipulando entrada e saída com C++

Para fixarmos as diferenças entre C e C++ ao se manipular entrada e saída, desenvolva um programa (em um arquivo chamado `media.cpp` na raiz do projeto) que calcula a média aritmética de 3 números inteiros fornecidos pelo usuário através da entrada padrão. A saída do programa deve ser somente a nota referente a média aritmética das 3 notas fornecidas pelo usuário. Exemplo de interação com o programa:

```bash
$ ./media
Entre com a nota da unidade 1: 7
Entre com a nota da unidade 2: 6
Entre com a nota da unidade 3: 9
Média: 7.33
```

**Obs:** Pesquise como arredondar um número de ponto flutuante em exatamente duas casas decimais! Veja a biblioteca `iomanip`!

## Atividade 1.2. Controlando o fluxo em C++

Implemente um programa (em um arquivo chamado `fluxo.cpp` na raiz do projeto) que recebe dois números, onde o primeiro deve ser menor que o segundo (faça essa validação, e solicite novas entradas para o usuário caso seja inválido). Em seguida, o programa calcula a porcentagem que o primeiro representa do segundo.

Por exemplo, se digitou 12 e 21, isso quer dizer que 12 representa 57.14% de 21. 

Exemplo de interação com o programa:

```bash
$ ./fluxo
Entre com o primeiro valor: 2
Entre com o segundo valor: 5
40.00%
```

Outro exemplo de interação com o programa:

```bash
$ ./fluxo
Entre com o primeiro valor: 9
Entre com o segundo valor: 3
Erro! Entre com um primeiro valor menor ou igual ao segundo.
Entre com o primeiro valor: 3
Entre com o segundo valor: 9
33.33%
```

**Obs:** Garanta que sempre aparecerão duas casas decimais. Veja a biblioteca `iomanip`!

**Obs2:** Note que caso o primeiro valor seja maior que o segundo valor seu programa deve retornar a mensagem "Erro!" e retornar a solicitar o primeiro valor.

## Dicas

- Não é necessário versionar o seu binário, somente o código fonte!
- Siga rigorosamente o nome e a localização dos arquivos fonte.
- É importante também seguir as orientações relacionadas a saída de dados do seu programa, pois os testes são automatizados!
-  Utilize as *option flags* `-Wall`,  `-std=c++17` e `-o` no momento da compilação. Exemplo: 
```bash
g++ -Wall -std=c++17 -o helloworld helloworld.cpp
```

## Objetivos do laboratório

Nossa ideia é se familiarizar com o fluxo de desenvolvimento no ambiente configurado e ter um primeiro contato com a resolução de problemas usando C++. Os objetivos a serem atingidos:

- [ ] Aceitar a atividade através do GitHub Classroom;
- [ ] Abrir o repositório no GitHub Codespaces (ou no ambiente desejado);
- [ ] Codificar o(s) programa(s) requisitado(s);
- [ ] Compilar o código usando o compilador g++ dentro do ambiente de nuvem (ou no ambiente desejado);
- [ ] Executar o código dentro do ambiente de nuvem (ou no ambiente desejado);
- [ ] Realizar o *commit* e o *push* do seu código para a *branch main* do seu repositório privado;
- [ ] Verificar o *pipeline* de correção automática.