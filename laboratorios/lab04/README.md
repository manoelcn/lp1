[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/Px-F14YK)
[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-2972f46106e565e64193e422d61a12cf1da4916b45550586e14ef0a7c637dd04.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=23782309)
# Lab #04 — Orientação a Objetos em C++

## Sistema de Matrícula Acadêmica Simplificado

Neste laboratório, você irá implementar um pequeno sistema acadêmico utilizando conceitos de **orientação a objetos em C++**.

O objetivo é praticar a criação de classes, objetos, atributos, métodos, encapsulamento, construtores, membros estáticos e modularização em arquivos `.h` e `.cpp`.

A proposta segue a ideia central da orientação a objetos: objetos possuem **estado** e **comportamento**, e devem controlar o próprio estado por meio de métodos públicos bem definidos. A aula também destaca que nem todo atributo precisa ter setter e que é melhor expor ações do domínio do que apenas dados internos. 

---

## 1. Contexto

Em um sistema acadêmico real, alunos são matriculados em turmas de componentes curriculares.

Cada aluno possui dados próprios, como matrícula, nome, e-mail e coeficiente de rendimento. Cada disciplina possui um código, nome e carga horária. Cada turma está associada a uma disciplina e possui uma capacidade máxima de alunos.

Neste laboratório, você deverá modelar esse cenário usando classes em C++.

---

## 2. Classes obrigatórias

Você deverá implementar as seguintes classes:

- Aluno
- Disciplina
- Turma

Cada classe deverá ter seu próprio arquivo de cabeçalho e implementação.

A estrutura mínima esperada é:

```
.
├── aluno.h
├── aluno.cpp
├── disciplina.h
├── disciplina.cpp
├── turma.h
├── turma.cpp
└── main.cpp
```

### Classe `Aluno`

A classe `Aluno` representa um aluno do sistema acadêmico.

#### Atributos privados obrigatórios

A classe deve possuir os seguintes atributos privados:

```c++
std::string m_matricula;
std::string m_nome;
std::string m_email;
double m_cr;
bool m_ativo;
static int m_totalAlunos;
```

#### Construtor obrigatório

A classe deve possuir o seguinte construtor parametrizado:

```c++
Aluno(std::string matricula, std::string nome, std::string email, double cr);
```

Esse construtor deve:

- inicializar todos os atributos usando lista de inicialização;
- definir `m_ativo` como `true`;
- incrementar o contador estático de alunos criados;
- validar o CR recebido.

O CR deve estar no intervalo de `0.0` a `10.0`.

Caso o valor recebido seja inválido, o CR deve ser definido como `0.0`.

Exemplos:

```c++
Aluno a1("20240001", "Ana Silva", "ana@imd.ufrn.br", 8.5);
Aluno a2("20240002", "Carlos Souza", "carlos@imd.ufrn.br", 15.0);
```

No segundo caso, o CR de Carlos deverá ser `0.0`.

Inclua também o construtor padrão. Esse vai ser necessário exclusivamente para conseguirmos alocar dinamicamente um _array_ de objetos `Aluno`. O construtor padrão não precisa inicializar nada, uma vez que será meramente auxiliar.

```c++
Aluno();
```

#### Métodos obrigatórios

A classe `Aluno` deve possuir os seguintes métodos públicos:

```c++
std::string getMatricula() const;
std::string getNome() const;
std::string getEmail() const;
double getCr() const;
bool isAtivo() const;

void setNome(std::string nome);
void setEmail(std::string email);
void setCr(double cr);

void desativar();
void ativar();

static int getTotalAlunos();
```

#### Regras de validação

`setNome`: O nome só deve ser alterado se não for uma string vazia.

`setEmail`: O e-mail só deve ser alterado se não for uma string vazia.

`setCr`: O CR só deve ser alterado se estiver no intervalo de 0.0 a 10.0.

Valores inválidos devem ser ignorados, mantendo o valor anterior.

`desativar`: O método deve tornar o aluno inativo.

`ativar`: O método deve tornar o aluno ativo.

`isAtivo`: O método deve retornar `true` para alunos ativos, `false` caso contrário.

### Classe `Disciplina`

A classe `Disciplina` representa uma disciplina/componente curricular.

#### Atributos privados obrigatórios

A classe deve possuir os seguintes atributos privados:

```c++
std::string m_codigo;
std::string m_nome;
int m_cargaHoraria;
static int m_totalDisciplinas;
```

#### Construtor obrigatório

A classe deve possuir o seguinte construtor parametrizado:

```c++
Disciplina(std::string codigo, std::string nome, int cargaHoraria);
```

Esse construtor deve:

- inicializar os atributos usando lista de inicialização;
- incrementar o contador estático de disciplinas criadas;
- validar a carga horária.

A carga horária deve ser maior que `0`. Caso o valor recebido seja inválido, a carga horária deve ser definida como `60`.

Exemplos:

```c++
Disciplina d1("IMD0030", "Linguagem de Programação I", 60);
Disciplina d2("IMD0000", "Disciplina Inválida", -20);
```

No segundo caso, a carga horária deverá ser 60.

#### Métodos obrigatórios

A classe `Disciplina` deve possuir os seguintes métodos públicos:

```c++
std::string getCodigo() const;
std::string getNome() const;
int getCargaHoraria() const;

void setNome(std::string nome);
void setCargaHoraria(int cargaHoraria);

static int getTotalDisciplinas();
```

#### Regras de validação

`setNome`: O nome só deve ser alterado se não for vazio.

`setCargaHoraria`: A carga horária só deve ser alterada se for maior que 0.

Valores inválidos devem ser ignorados.

### Classe `Turma`

A classe `Turma` representa uma turma de uma determinada disciplina.

Uma turma possui código, disciplina, capacidade máxima e uma lista de alunos matriculados.

#### Atributos privados obrigatórios

A classe deve possuir os seguintes atributos privados:

```c++
std::string m_codigo;
Disciplina m_disciplina;
int m_capacidade;
Aluno* m_alunos;
static int m_totalTurmas;
```

#### Construtor obrigatório

A classe deve possuir o seguinte construtor parametrizado:

```c++
Turma(std::string codigo, Disciplina disciplina, int capacidade);
```

Esse construtor deve:

- inicializar os atributos usando lista de inicialização;
- alocar dinamicamente um _array_ de `Aluno` com a capacidade indicada;
- incrementar o contador estático de turmas criadas;
- validar a capacidade.

A capacidade deve ser maior que `0`. Caso a capacidade recebida seja inválida, ela deve ser definida como `30`.

Exemplos:

```c++
Disciplina lp1("IMD0030", "Linguagem de Programação I", 60);

Turma t1("T01", lp1, 40);
Turma t2("T02", lp1, -5);
```

No segundo caso, a capacidade da turma deverá ser `30`.

#### Destrutor obrigatório

Como estamos alocando o _array_ dinamicamente, defina um destrutor para liberar a memória previamente alocada.

#### Métodos obrigatórios

A classe `Turma` deve possuir os seguintes métodos públicos:

```c++
std::string getCodigo() const;
Disciplina getDisciplina() const;
int getCapacidade() const;
int getQuantidadeMatriculados() const;

bool estaCheia() const;
bool matricularAluno(Aluno aluno);
bool removerAluno(std::string matricula);
bool possuiAluno(std::string matricula) const;

static int getTotalTurmas();
```

#### Regras de validação

`getQuantidadeMatriculados`: Deve retornar a quantidade atual de alunos matriculados na turma.

`estaCheia`: Deve retornar `true` se a quantidade de alunos matriculados for igual à capacidade da turma, `false` caso contrário.

`possuiAluno`: Deve retornar true se existir um aluno com a matrícula informada na turma.

`matricularAluno`: O método deve tentar matricular um aluno na turma. Retorna `true` se a matrícula for realizada com sucesso, `false` caso contrário.

A matrícula não deve ser realizada se:

- a turma estiver cheia;
- o aluno já estiver matriculado;
- o aluno estiver inativo.

`removerAluno`: O método deve remover um aluno da turma a partir da matrícula. Retorna `true` se o aluno foi encontrado e removido com sucesso, `false` caso contrário.

## 3. Membros estáticos

Cada classe deve possuir um contador estático privado.

Esses contadores devem armazenar a quantidade total de objetos criados daquela classe.

Atributos estáticos representam dados da classe, e não de um objeto específico. Eles são úteis, por exemplo, para guardar informações comuns entre todas as instâncias, como um contador de objetos criados.

### Classe Aluno

```c++
static int m_totalAlunos;
static int getTotalAlunos();
```

O contador deve ser incrementado sempre que um objeto `Aluno` for criado.

### Classe Disciplina

```c++
static int m_totalDisciplinas;
static int getTotalDisciplinas();
```

O contador deve ser incrementado sempre que um objeto `Disciplina` for criado.

### Classe Turma

```c++
static int m_totalTurmas;
static int getTotalTurmas();
```

O contador deve ser incrementado sempre que um objeto `Turma` for criado.

## 4. Exemplo de uso esperado

O código abaixo mostra um exemplo de uso das classes implementadas. Este exemplo está implementado em [main.cpp](main.cpp).

```c++
#include <iostream>
#include "aluno.h"
#include "disciplina.h"
#include "turma.h"

int main() {
    Disciplina lp1("IMD0030", "Linguagem de Programacao I", 60);

    Aluno a1("20240001", "Ana Silva", "ana@imd.ufrn.br", 8.5);
    Aluno a2("20240002", "Bruno Lima", "bruno@imd.ufrn.br", 7.0);
    Aluno a3("20240003", "Carla Souza", "carla@imd.ufrn.br", 9.1);

    Turma turma("T01", lp1, 2);

    std::cout << turma.matricularAluno(a1) << std::endl; // 1
    std::cout << turma.matricularAluno(a2) << std::endl; // 1
    std::cout << turma.matricularAluno(a3) << std::endl; // 0, turma cheia

    std::cout << turma.getQuantidadeMatriculados() << std::endl; // 2
    std::cout << turma.estaCheia() << std::endl; // 1

    std::cout << turma.possuiAluno("20240001") << std::endl; // 1
    std::cout << turma.removerAluno("20240001") << std::endl; // 1
    std::cout << turma.possuiAluno("20240001") << std::endl; // 0

    std::cout << Aluno::getTotalAlunos() << std::endl;
    std::cout << Disciplina::getTotalDisciplinas() << std::endl;
    std::cout << Turma::getTotalTurmas() << std::endl;

    return 0;
}
```

