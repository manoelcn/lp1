#ifndef TURMA_H
#define TURMA_H

#include <string>

#include "aluno.h"
#include "disciplina.h"

class Turma
{
private:
    std::string m_codigo;
    Disciplina m_disciplina;
    int m_capacidade;
    Aluno *m_alunos;
    int m_quantidadeMatriculados;
    static int m_totalTurmas;

public:
    std::string getCodigo() const;
    Disciplina getDisciplina() const;
    int getCapacidade() const;
    int getQuantidadeMatriculados() const;

    bool estaCheia() const;
    bool matricularAluno(Aluno aluno);
    bool removerAluno(std::string matricula);
    bool possuiAluno(std::string matricula) const;

    static int getTotalTurmas();

    Turma(std::string codigo, Disciplina disciplina, int capacidade);
    ~Turma();
};

#endif