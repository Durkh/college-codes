/*
 * Funcionario.cpp
 *
 *  Created on: 3 de ago de 2019
 *      Author: egidio
 */

#include "Funcionario.h"

Funcionario::Funcionario(): matricula("default"), salario(0) {

}

std::string Funcionario::getMatricula() {
	return this->matricula;
}

void Funcionario::setMatricula(std::string matricula) {
	this->matricula = matricula;
}

double Funcionario::getSalario() {
	return this->salario;
}

void Funcionario::setSalario(double salario) {
	this->salario = salario;
}

Funcionario::~Funcionario() {
	// TODO Auto-generated destructor stub
}

Consultor::Consultor() {
}

double Consultor::getSalario() {
	this->salario += (salario*10)/100;

	return this->salario;
}

double Consultor::getSalario(float percentual) {
	this->salario += (salario*percentual)/100;

	return this->salario;
}

Consultor::~Consultor() {
}
