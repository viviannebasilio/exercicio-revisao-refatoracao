#ifndef VENDEDOR_H
#define VENDEDOR_H

#define MESES_TOTAL 12

#include "Empregado.hpp"

class Vendedor:public Empregado{

	public:
  double quotaTotalAnual();

  Vendedor(std::string _nome, double _salarioHora, double _quotaMensalVendas);
	
};

#endif
