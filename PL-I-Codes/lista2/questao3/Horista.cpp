#include "Horista.h"

Horista::Horista():salarioHora(0), horasTrabalhadas(0){

}

double Horista::getSalario(){
  return this->salarioHora;
}

void Horista::setSalario(double salario){
  this->salarioHora = salario;
}

double Horista::getHoras(){
  return this->horasTrabalhadas;
}

void Horista::setHoras(double horasTrabalhadas){
  this->horasTrabalhadas = horasTrabalhadas;
}

double Horista::CalculaSalario(){
  
  if(this->horasTrabalhadas <= 40){
		return this->horasTrabalhadas * this->salarioHora;
	}else{
		double buffer;
		buffer = (this->horasTrabalhadas * 40);
		for(int i=(this->horasTrabalhadas- 40); i!= 0; i--){
			buffer += 1.5 * this->salarioHora;
		}
		return buffer;
	}
}

Horista::~Horista(){

}
