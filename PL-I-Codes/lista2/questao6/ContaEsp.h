#ifndef __CON__ESP__
#define __CON__ESP__

#include "Conta.h"

class ContaEspecial: public Conta{
public:
  ContaEspecial(string nomeCliente, double salarioMensal, long int numeroConta, double saldo);

  void definirLimite();

  virtual ~ContaEspecial();
};

#endif
