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
