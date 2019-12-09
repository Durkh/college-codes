/*
 * ContaEspecial.cpp
 *
 *  Created on: 9 de set de 2019
 *      Author: egidio
 */

#include "ContaEspecial.h"

ContaEspecial::ContaEspecial() {
ContaCorrente();
}

ContaEspecial::ContaEspecial(std::string nome, int numero, double saldo,
		double salario) {

	this->NomeCliente = nome;
	this->numero = numero;
	this->saldo = saldo;
	this->salario = salario;
	this->limite = 0;
}

double ContaEspecial::DefinirLimite() {
	this->limite = 4 * salario;
	return this->limite;
}

ContaEspecial::~ContaEspecial() {
	// TODO Auto-generated destructor stub
}

