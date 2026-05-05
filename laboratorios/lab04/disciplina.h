#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <string>

class Disciplina
{
private:
    std::string m_codigo;
    std::string m_nome;
    int m_cargaHoraria;
    static int m_totalDisciplinas;

public:
    std::string getCodigo() const;
    std::string getNome() const;
    int getCargaHoraria() const;

    void setNome(std::string nome);
    void setCargaHoraria(int cargaHoraria);

    static int getTotalDisciplinas();

    Disciplina(std::string codigo, std::string nome, int cargaHoraria);
};

#endif