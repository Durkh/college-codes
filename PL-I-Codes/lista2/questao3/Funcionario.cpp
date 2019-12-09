#include "Funcionario.h"


Funcionario::Funcionario(): nome("none"), matricula(0){
}

std::string Funcionario::getNome(){
  return this->nome;
}

void Funcionario::setNome(std::string nome){
  this->nome = nome;
}

unsigned int Funcionario::getMatricula(){
  return this->matricula;
}

void Funcionario::setMatricula(unsigned int matricula){
  this->matricula = matricula;
}

Funcionario::~Funcionario(){
}
