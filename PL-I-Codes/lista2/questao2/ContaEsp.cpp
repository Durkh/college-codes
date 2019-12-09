#include "ContaEsp.h"

ContaEspecial::ContaEspecial(string nomeCliente, double salarioMensal, long int numeroConta, double saldo){
  this->nomeCliente = nomeCliente;
  this->salarioMensal = salarioMensal;
  this->numeroConta = numeroConta;
  this->saldo = saldo;
  this->limite = 0;
}

void ContaEspecial::definirLimite(){
    this->limite = 3 * this->salarioMensal;
}

ContaEspecial::~ContaEspecial(){

}
