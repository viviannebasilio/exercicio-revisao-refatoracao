#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H
#include "Empregado.hpp"

class Engenheiro:public Empregado{

  private:
    int projetos;

  public:
    Engenheiro(std::string _nome, double _salarioHora, int _projetos);

    int getProjetos();
    void setProjetos(int _projetos);
    void informacao(double horas);
};

#endif
