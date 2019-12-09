/*
 * Pessoa.cpp
 *
 *  Created on: 9 de jul de 2019
 *      Author: egidio
 */

#include "Pessoa.h"

Pessoa::Pessoa(string nome): idade(0){
	this->nome = nome;
	telefone = "0";
}

Pessoa::Pessoa(string nome, int idade, string telefone): idade(idade){
	this->nome = nome;
	this->telefone = telefone;
}

Pessoa::~Pessoa() {
	// TODO Auto-generated destructor stub
}

