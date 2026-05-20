[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/jNZzt0N1)
[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-2972f46106e565e64193e422d61a12cf1da4916b45550586e14ef0a7c637dd04.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=23961042)
# Lab #05 - Sobrecarga de operadores

Neste laboratório iremos explorar os aspectos e conceitos relacionados a sobrecarga de operadores em C++, além de diversos outras funcionalidades e conceitos vistos em sala de aula. 

## Contexto do problema

Você irá implementar uma classe chamada `Tempo`, que representa uma duração em horas, minutos e segundos.

Essa classe poderá ser usada, por exemplo, em um sistema que registra o tempo de execução de robôs em uma competição.

Cada robô realiza uma tarefa em determinado tempo. O sistema precisa permitir somar tempos, comparar tempos e exibir os resultados de forma amigável.

Exemplo:

```cpp
Tempo t1(1, 20, 30);
Tempo t2(0, 50, 45);

Tempo total = t1 + t2;

std::cout << total << std::endl;
```

Saída esperada:

```bash
02:11:15
```

## Estrutura inicial do projeto

Organize seu projeto da seguinte forma:

```
laboratorio-operadores/
├── include/
│   └── Tempo.h
├── src/
│   ├── Tempo.cpp
│   └── main.cpp
└── Makefile
```

## 1. Criando a classe `Tempo`

Implemente a classe `Tempo` com os seguintes atributos privados:

```cpp
int horas;
int minutos;
int segundos;
```

A classe deve possuir:

```cpp
Tempo();
Tempo(int h, int m, int s);
```

O construtor deve garantir que o tempo fique sempre normalizado.

Exemplo:

```cpp
Tempo t(1, 70, 80);
```

Deve ser armazenado como:

```txt
02:11:20
```

---

## 2. Método auxiliar de normalização

Crie um método privado:

```cpp
void normalizar();
```

Esse método deve ajustar segundos e minutos maiores ou iguais a 60.

Exemplo:

```cpp
75 segundos = 1 minuto e 15 segundos
90 minutos = 1 hora e 30 minutos
```

---

## 3. Sobrecarga do operador de saída

Sobrecarregue o operador `<<` para exibir um tempo no formato:

```txt
hh:mm:ss
```

Exemplo:

```cpp
Tempo t(2, 5, 9);
cout << t << endl;
```

Saída:

```txt
02:05:09
```

Assinatura sugerida:

```cpp
friend std::ostream& operator<<(std::ostream& os, const Tempo& t);
```

---

## 4. Sobrecarga do operador de entrada

Sobrecarregue o operador `>>` para permitir leitura de tempo.

Exemplo:

```cpp
Tempo t;
cin >> t;
```

O usuário deve digitar:

```txt
1 30 20
```

Representando:

```txt
1 hora, 30 minutos e 20 segundos
```

Assinatura sugerida:

```cpp
friend std::istream& operator>>(std::istream& is, Tempo& t);
```

---

## 5. Sobrecarga do operador `+`

Implemente a soma de dois tempos:

```cpp
Tempo operator+(const Tempo& outro) const;
```

Exemplo:

```cpp
Tempo t1(1, 20, 30);
Tempo t2(0, 50, 45);

Tempo total = t1 + t2;
```

Resultado:

```txt
02:11:15
```

---

## 6. Sobrecarga do operador `-`

Implemente a subtração entre dois tempos:

```cpp
Tempo operator-(const Tempo& outro) const;
```

Caso o segundo tempo seja maior que o primeiro, o resultado deve ser `00:00:00`.

Exemplo:

```cpp
Tempo t1(1, 0, 0);
Tempo t2(0, 30, 0);

std::cout << t1 - t2 << std::endl;
```

Saída:

```txt
00:30:00
```

---

## 7. Sobrecarga dos operadores de comparação

Implemente os operadores:

```cpp
bool operator==(const Tempo& outro) const;
bool operator!=(const Tempo& outro) const;
bool operator<(const Tempo& outro) const;
bool operator>(const Tempo& outro) const;
bool operator<=(const Tempo& outro) const;
bool operator>=(const Tempo& outro) const;
```

Esses operadores devem comparar o tempo total em segundos.

Exemplo:

```cpp
Tempo a(0, 2, 0);
Tempo b(0, 1, 90);

std::cout << (a == b) << std::endl;
```

Saída esperada:

```txt
1
```

Pois ambos representam 120 segundos.

---

## 8. Sobrecarga dos operadores de incremento

Implemente:

```cpp
Tempo& operator++();      // pré-incremento
Tempo operator++(int);    // pós-incremento
```

Cada incremento deve adicionar 1 segundo ao tempo.

Exemplo:

```cpp
Tempo t(0, 0, 59);

std::cout << ++t << std::endl;
```

Saída:

```txt
00:01:00
```

---

## Programa principal

No arquivo `main.cpp`, está presente o programa principal, que apresenta o seguinte menu:

```txt
1 - Cadastrar tempo do Robô A
2 - Cadastrar tempo do Robô B
3 - Somar tempos
4 - Comparar tempos
5 - Incrementar tempo do Robô A
0 - Sair
```

O programa deve usar os operadores sobrecarregados sempre que possível. O teste automatizado irá testar todas as opções do seu programa.

---

# 14. Exemplo de uso esperado

```txt
Digite o tempo do Robô A: 0 2 30
Digite o tempo do Robô B: 0 1 45

Tempo do Robô A: 00:02:30
Tempo do Robô B: 00:01:45

Soma dos tempos: 00:04:15

O Robô B foi mais rápido.
```
