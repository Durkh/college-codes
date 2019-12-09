#ifndef __ASSALA__
#define __ASSALA__

#include "Funcionario.h"

class Assalariado: public Funcionario{
private:
  double salario;
public:
  Assalariado();

  double getSalario();
  void setSalario(double salario);

  double CalculaSalario();

  virtual ~Assalariado();
};

#endif
