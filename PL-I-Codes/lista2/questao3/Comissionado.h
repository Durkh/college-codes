#ifndef __COMISSIO__
#define __COMISSIO__

#include "Funcionario.h"

class Comissionado: public Funcionario{
  double vendaSemanais;
  double percentualComissao;
public:
  Comissionado();

  double getVendas();
  void setVendas(double vendaSemanais);
  double getComissao();
  void setComissao(double percentualComissao);

  double CalculaSalario();

  virtual ~Comissionado();
};

#endif
