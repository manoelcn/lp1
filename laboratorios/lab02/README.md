[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/P_TL8wZg)
[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-2972f46106e565e64193e422d61a12cf1da4916b45550586e14ef0a7c637dd04.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=23463629)
# Lab #02 - Modularização em C++

Neste laboratório iremos explorar os aspectos relacionados a modularização interna e externa de programas escritos em C++. 

## Atividade 1. Modularização interna

> **IMPORTANTE:** Faça essa atividade em arquivos dentro do diretório [atividade-01/](atividade-01/).

Escreva um programa em um único arquivo (chamado [`main.cpp`](atividade-01/main.cpp)) que leia dois números inteiros separados do usuário, some-os e então produza a resposta. O programa deve usar três funções, explorando os conceitos de modularização interna:

- Uma função chamada `readNumber` deve ser usada para obter um **único** número inteiro do usuário a partir do teclado e retornar este mesmo número inteiro.
- Uma função chamada `writeAnswer` deve ser usada para imprimir na tela (saída padrão) o argumento do tipo inteiro passado como parâmetro. Esta função deve receber um único parâmetro e não ter valor de retorno.
- Uma função `main()` deve ser usada para invocar as funções acima descritas.

## Atividade 2. Modularização externa

> **IMPORTANTE:** Faça essa atividade em arquivos dentro do diretório [atividade-02/](atividade-02/).

Replique o programa que você escreveu na atividade 1 e utilize conceitos de modularização externa para que as funções `readNumber()` e `writeAnswer()` fiquem em um arquivo separado chamado [`io.cpp`](atividade-02/io.cpp). Lembre de incluir as declarações das funções no arquivo [`main.cpp`](atividade-02/main.cpp), mas não as definições. Perceba que nesta atividade **não** iremos utilizar arquivos de cabeçalho.

## Atividade 3. Modularização externa com arquivos de cabeçalho

> **IMPORTANTE:** Faça essa atividade em arquivos dentro do diretório [atividade-03/](atividade-03/).

Replique o programa que você escreveu na atividade 2 e o modifique para que ele use um arquivo de cabeçalho (chamado [`io.h`](atividade-03/io.h)) para conhecer as funções em vez de usar declarações diretamente em seus arquivos de corpo (`.cpp`). Certifique-se de que seu arquivo de cabeçalho use **protetores de cabeçalho** utilizando diretivas de compilação `#DEFINE`, `#IFNDEF` e `#ENDIF`.

## Atividade 4. Criando um arquivo `Makefile` para seu programa

Crie um arquivo `Makefile` dentro do diretório da atividade anterior ([atividade-03/](atividade-03/)) com as seguintes ações:

- *main* : para compilar o programa e gerar o executável `main`
- *main.o* : para gerar o arquivo objeto do arquivo `main.cpp`
- *io.o* : para gerar o arquivo objeto do arquivo `io.cpp`
- *test* : para executar o arquivo executável `main`
- *clean* : para limpar/remover o binário gerado e os arquivo objeto (`.o`)
