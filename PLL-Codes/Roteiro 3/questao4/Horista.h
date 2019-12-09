#ifndef __HORI__
#define __HORI__

#include "Funcionario.h"

class Horista: public Funcionario{
  double salarioHora;
  double horasTrabalhadas;
public:
  Horista();

  double getSalario();
  void setSalario(double salario);
  double getHoras();
  void setHoras(double Horas);

  double CalculaSalario();

  virtual ~Horista();
};


#endif
