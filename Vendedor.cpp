#include "Vendedor.hpp"

Vendedor::Vendedor(std::string _nome, double _salarioHora, double _quotaMensalVendas):Empregado(_nome, _salarioHora, _quotaMensalVendas){
	setNome(_nome);
	setquotaMensalVendas(_quotaMensalVendas);
	setsalarioHora(_salarioHora);
}

double Vendedor::quotaTotalAnual(){
  return getquotaMensalVendas() * MESES_TOTAL;
}
