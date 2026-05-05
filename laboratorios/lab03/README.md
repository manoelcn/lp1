[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/ymloRE_B)
[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-2972f46106e565e64193e422d61a12cf1da4916b45550586e14ef0a7c637dd04.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=23568941)
# Lab #03 - Recursividade em C++

Neste laboratório iremos explorar os aspectos relacionados a recursividade em programas escritos em C++. O mais importante é identificar os casos base, definir os casos recursivos e garantir a convergência do seu problema.

# Atividade 1

> **IMPORTANTE:** Faça essa atividade em arquivos dentro do diretório [atividade-01/](atividade-01/).

Implemente uma **função recursiva** para calcular a soma dos dígitos de um número inteiro positivo. Por exemplo, a soma dos dígitos de 123 é 1 + 2 + 3 = 6.

Já foi disponibilizado um arquivo `main.cpp` com as declarações necessárias e as instruções dentro da função `main()`. Você deve somente implementar a lógica recursiva na definição da função `int somaDigitos(int n)`. Para esta atividade não será necessário fornecer arquivo `Makefile`.

Exemplo da execução do programa:

```bash
# ./atividade-01/main
Entre com um número inteiro positivo: 123
A soma dos digitos de 123 é 6

# ./atividade-01/main
Entre com um número inteiro positivo: 12345
A soma dos digitos de 12345 é 15
```

> Dica: Lembre que a divisão entre valores do tipo `int` positivos em C++ sempre arredonda para baixo (*floor*). Exemplo: `57/10` é igual a `5`.


# Atividade 2

> **IMPORTANTE:** Faça essa atividade em arquivos dentro do diretório [atividade-02/](atividade-02/).

Dado um número decimal como entrada, precisamos escrever um programa em C++ para converter o número decimal fornecido em um número binário equivalente. Utilize uma **abordagem recursiva**. 

Já foi disponibilizado um arquivo `main.cpp`, `dec2bin.cpp` e `dec2bin.h` com as declarações necessárias e as instruções dentro da função `main()`. Você deve somente implementar a lógica recursiva na definição da função `int dec2bin(int decimal)` no arquivo `dec2bin.cpp`. Foi também disponibilizado um arquivo `Makefile` já funcional para compilação do seu programa.

Exemplo da execução do programa:

```bash
# ./atividade-02/main
Entre com um número decimal: 7                                                         
O número 7 em binário é 111

# ./atividade-02/main
Entre com um número decimal: 10 
O número 10 em binário é 1010
```

> **Dica:** Lembra de como converter um decimal em um binário?
>
> ![image](https://github.com/danilocurvelo-ufrn/imd0030-lab-03/assets/26229607/9ba8b05a-0e5c-42d6-9505-740c6d9992a1)


# Atividade 3

> **IMPORTANTE:** Faça essa atividade em arquivos dentro do diretório [atividade-03/](atividade-03/). 

Implemente uma **função recursiva** que dado um número `n`, verifique se é um número primo ou não (retornando `true` ou `false`). Faça a modularização do seu código da forma que achar mais adequada, mas seu executável deve ser chamado `main`. **Obrigatoriamente** você deve fornecer um `Makefile` funcional para compilar seu programa com `make`, caso contrário não será possível validar seu algoritmo de forma automática.

Exemplo da execução do programa:

```bash
# ./atividade-03/main
Entre com um número inteiro positivo: 1                                                       
O número 1 não é primo.

# ./atividade-03/main
Entre com um número inteiro positivo: 2    
O número 2 é primo.

# ./atividade-03/main
Entre com um número inteiro positivo: 3
O número 3 é primo.

# ./atividade-03/main
Entre com um número inteiro positivo: 4 
O número 4 não é primo.

# ./atividade-03/main
Entre com um número inteiro positivo: 5 
O número 5 é primo.

# ./atividade-03/main
Entre com um número inteiro positivo: 6
O número 6 não é primo.

# ./atividade-03/main
Entre com um número inteiro positivo: 7
O número 7 é primo.
```

> **Dica:** Um número primo é aquele que é divisível somente por 1 e ele mesmo. Os números 0 e 1 não são considerados primos. Veja mais na [wikipedia](https://pt.wikipedia.org/wiki/N%C3%BAmero_primo).
