#include "Comissionado.h"

Comissionado::Comissionado():vendaSemanais(0), percentualComissao(0){

}

double Comissionado::getVendas(){
  return this->vendaSemanais;
}

void Comissionado::setVendas(double vendaSemanais){
  this->vendaSemanais = vendaSemanais;
}

double Comissionado::getComissao(){
  return this->percentualComissao;
}

void Comissionado::setComissao(double percentualComissao){
  this->percentualComissao = percentualComissao;
}

double Comissionado::CalculaSalario(){
  return vendaSemanais * (percentualComissao/100);
}


Comissionado::~Comissionado(){

}
