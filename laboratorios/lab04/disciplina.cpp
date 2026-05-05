#include "disciplina.h"

int Disciplina::m_totalDisciplinas = 0;

std::string Disciplina::getCodigo() const
{
    return m_codigo;
}

std::string Disciplina::getNome() const
{
    return m_nome;
}

int Disciplina::getCargaHoraria() const
{
    return m_cargaHoraria;
}

void Disciplina::setNome(std::string nome)
{
    if (nome.empty())
    {
        return;
    }
    m_nome = nome;
}

void Disciplina::setCargaHoraria(int cargaHoraria)
{
    if (cargaHoraria > 0)
    {
        m_cargaHoraria = cargaHoraria;
    }
}

int Disciplina::getTotalDisciplinas()
{
    return m_totalDisciplinas;
}

Disciplina::Disciplina(std::string codigo, std::string nome, int cargaHoraria)
    : m_codigo(codigo), m_nome(nome), m_cargaHoraria(60)
{
    m_totalDisciplinas++;

    if (cargaHoraria > 0)
    {
        m_cargaHoraria = cargaHoraria;
    }
}