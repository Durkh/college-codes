#include "Assalariado.h"

Assalariado::Assalariado(): salario(0){

}

double Assalariado::getSalario(){
  return this->salario;
}

void Assalariado::setSalario(double salario){
  this->salario = salario;
}

double Assalariado::CalculaSalario(){
  return this->salario;
}

Assalariado::~Assalariado(){

}
