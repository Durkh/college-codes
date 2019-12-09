/*
 * Trabalhador.cpp
 *
 *  Created on: 3 de ago de 2019
 *      Author: egidio
 */

#include "Trabalhador.h"

Trabalhador::Trabalhador(): nome("default"), salario(0) {
	// TODO Auto-generated constructor stub

}

std::string Trabalhador::getNome() {
	return this->nome;
}

void Trabalhador::setNome(std::string nome) {
	this->nome = nome;
}

double Trabalhador::getSalario() {
	return this->salario;
}

void Trabalhador::setSalario(double salario) {
	this->salario = salario;
}

Trabalhador::~Trabalhador() {
	// TODO Auto-generated destructor stub
}

