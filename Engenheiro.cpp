#include "Engenheiro.hpp"

Engenheiro::Engenheiro(std::string _nome, double _salarioHora, int _projetos):Empregado(_nome, _salarioHora){
  projetos = _projetos;
}

int Engenheiro::getProjetos(){
  return projetos;
}
void Engenheiro::setProjetos(int Projetos){
  projetos = Projetos;
}

