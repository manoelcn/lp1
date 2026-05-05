#include "turma.h"

int Turma::m_totalTurmas = 0;

std::string Turma::getCodigo() const
{
    return m_codigo;
}

Disciplina Turma::getDisciplina() const
{
    return m_disciplina;
}

int Turma::getCapacidade() const
{
    return m_capacidade;
}

int Turma::getQuantidadeMatriculados() const
{
    return m_quantidadeMatriculados;
}

bool Turma::estaCheia() const
{
    if (m_quantidadeMatriculados == m_capacidade)
    {
        return true;
    }
    return false;
}

bool Turma::matricularAluno(Aluno aluno)
{
    if (estaCheia() == false && aluno.isAtivo() == true && possuiAluno(aluno.getMatricula()) == false)
    {
        m_alunos[m_quantidadeMatriculados] = aluno;
        m_quantidadeMatriculados++;
        return true;
    }
    return false;
}

bool Turma::removerAluno(std::string matricula)
{
    if (possuiAluno(matricula) == true)
    {
        for (int i = 0; i < m_quantidadeMatriculados; i++)
        {
            if (m_alunos[i].getMatricula() == matricula)
            {
                m_alunos[i] = m_alunos[m_quantidadeMatriculados - 1];
                m_quantidadeMatriculados--;
                break;
            }
        }

        return true;
    }
    return false;
}

bool Turma::possuiAluno(std::string matricula) const
{
    for (int i = 0; i < m_quantidadeMatriculados; i++)
    {
        if (m_alunos[i].getMatricula() == matricula)
        {
            return true;
        }
    }
    return false;
}

int Turma::getTotalTurmas()
{
    return m_totalTurmas;
}

Turma::Turma(std::string codigo, Disciplina disciplina, int capacidade)
    : m_codigo(codigo), m_disciplina(disciplina), m_capacidade(30), m_quantidadeMatriculados(0)
{
    m_totalTurmas++;

    if (capacidade > 0)
    {
        m_capacidade = capacidade;
    }

    m_alunos = new Aluno[m_capacidade];
}

Turma::~Turma()
{
    delete[] m_alunos;
}