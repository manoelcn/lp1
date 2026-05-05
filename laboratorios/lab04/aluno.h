#ifndef ALUNO_H
#define ALUNO_H

#include <string>

class Aluno
{
private:
    std::string m_matricula;
    std::string m_nome;
    std::string m_email;
    double m_cr;
    bool m_ativo;
    static int m_totalAlunos;

public:
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

    Aluno(std::string matricula, std::string nome, std::string email, double cr);
    Aluno();
};

#endif