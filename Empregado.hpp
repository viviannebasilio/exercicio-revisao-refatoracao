#ifndef EMPREGADO_H
#define EMPREGADO_H
#define HORAS_MAXIMO 8

#include <iostream>
#include <string>

class Empregado{
	
  private:
    std::string nome;
    double salarioHora;
    double quotaMensalVendas;

  public:
    Empregado(std::string _nome, double _salarioHora);

    Empregado(std::string _nome, double _salarioHora, double _quotaMensalVendas);

    double pagamentoMes(double horasTrabalhadas);
    std::string getNome();
    double getsalarioHora();
    double getquotaMensalVendas();
    
    void setNome(std::string);
    void setsalarioHora(double);
    void setquotaMensalVendas(double);

};

#endif
