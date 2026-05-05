#include "aluno.h"

int Aluno::m_totalAlunos = 0;

std::string Aluno::getMatricula() const
{
    return m_matricula;
}

std::string Aluno::getNome() const
{
    return m_nome;
}

std::string Aluno::getEmail() const
{
    return m_email;
}

double Aluno::getCr() const
{
    return m_cr;
}

bool Aluno::isAtivo() const
{
    return m_ativo;
}

void Aluno::ativar()
{
    m_ativo = true;
}

void Aluno::desativar()
{
    m_ativo = false;
}

void Aluno::setNome(std::string nome)
{
    if (nome.empty())
    {
        return;
    }
    m_nome = nome;
}

void Aluno::setEmail(std::string email)
{
    if (email.empty())
    {
        return;
    }
    m_email = email;
}

void Aluno::setCr(double cr)
{
    if (cr >= 0.0 && cr <= 10.0)
    {
        m_cr = cr;
    }
}

int Aluno::getTotalAlunos()
{
    return m_totalAlunos;
}

Aluno::Aluno()
{
}

Aluno::Aluno(std::string matricula, std::string nome, std::string email, double cr)
    : m_matricula(matricula), m_nome(nome), m_email(email), m_cr(0.0), m_ativo(true)
{
    m_totalAlunos++;

    if (cr >= 0.0 && cr <= 10.0)
    {
        m_cr = cr;
    }
}