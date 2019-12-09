#ifndef __ICONTA__
#define __ICONTA__

#include <iostream>
#include "MyExceptions.h"

using std::string;

class Iconta{
public:
  Iconta();

  virtual void sacar(double valor) = 0;
  virtual void depositar(double valor)=0;

  virtual string getNome()=0;
  virtual double getSalario()=0;
  virtual long int getNum()=0;
  virtual double getSaldo()=0;
  virtual void definirLimite()=0;
  virtual void setLimite(double limite)=0;

  virtual ~Iconta();
};



#endif
