#ifndef __FUNC__
#define __FUNC__

#include <iostream>

class Funcionario{
protected:
  std::string nome;
  unsigned int matricula;
public:
  Funcionario();
  virtual double CalculaSalario()=0;

  virtual std::string getNome();
  virtual void setNome(std::string nome);
  virtual unsigned int getMatricula();
  virtual void setMatricula(unsigned int matricula);

  //Assalariado methods
  virtual double getSalario(){return 0;};
  virtual void setSalario(double salario){};

  //horista methods
  virtual double getHoras(){return 0;};
  virtual void setHoras(double Horas){};

  //comissionado methods
  virtual double getVendas(){return 0;};
  virtual void setVendas(double vendaSemanais){};
  virtual double getComissao(){return 0;};
  virtual void setComissao(double percentualComissao){};

  virtual ~Funcionario();
};


#endif
