#include "Empregado.hpp"

Empregado::Empregado(std::string _nome, double _salarioHora, double _quotaMensalVendas){
    nome = _nome;
    salarioHora = _salarioHora;
    quotaMensalVendas = _quotaMensalVendas;
}

Empregado::Empregado(std::string _nome, double _salarioHora){
      nome = _nome;
      salarioHora = _salarioHora;
}
    
double Empregado::pagamentoMes(double horasTrabalhadas){
  double totalHoras = horasTrabalhadas;
	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > HORAS_MAXIMO) {
        double horasExcedido = horasTrabalhadas - HORAS_MAXIMO;
        totalHoras += horasExcedido / 2;
      }
	  return totalHoras * salarioHora;
}

double Empregado::getsalarioHora(){
    return salarioHora;
}
double Empregado::getquotaMensalVendas(){
    return quotaMensalVendas;
}
std::string Empregado::getNome(){
    return nome;
}
void Empregado::setNome(std::string Nome){
    nome = Nome;
}
void Empregado::setsalarioHora(double Salario){
    salarioHora = Salario;
}
void Empregado::setquotaMensalVendas(double Quota){ 
    quotaMensalVendas = Quota;
	
};
