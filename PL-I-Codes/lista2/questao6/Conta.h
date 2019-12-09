#ifndef __CONTA__
#define __CONTA__

#include "Iconta.h"

class Conta: public Iconta{
protected:
  string nomeCliente;
  double salarioMensal;
  long int numeroConta;
  double saldo;
  double limite;
public:
  Conta(){};
  Conta(string nomeCliente, double salarioMensal, long int numeroConta, double saldo);

  string getNome();
  double getSalario();
  long int getNum();
  double getSaldo();
  void definirLimite();
  void setLimite(double limite);

  void sacar(double valor);
  void depositar(double valor);

  virtual ~Conta();
};


#endif
