/*
 * Poupanca.cpp
 *
 *  Created on: 9 de set de 2019
 *      Author: egidio
 */

#include "Poupanca.h"

Poupanca::Poupanca(): variacao(0), taxaRendimento(0) {
Conta();
}

Poupanca::Poupanca(std::string nome, int numero, double saldo, int variacao,
		double taxaRendimento) {

	this->NomeCliente = nome;
	this->numero = numero;
	this->saldo = saldo;
	this->variacao = variacao;
	this->taxaRendimento = taxaRendimento;
}

int Poupanca::getVariacao() {
	return this->variacao;
}

void Poupanca::setvariacao(int variacao) {
	this->variacao = variacao;
}

double Poupanca::getTaxa() {
	return this->taxaRendimento;
}

void Poupanca::setTaxa(double taxaVariacao) {
	this->taxaRendimento = taxaRendimento;
}

double Poupanca::Render() {
	if(variacao == 51){
		this->saldo += saldo *(taxaRendimento/100);
		return this->saldo;
	}
	else{
		this->saldo += (saldo * (taxaRendimento+0.5)/100);
		return this->saldo;
	}
}

Poupanca::~Poupanca() {
	// TODO Auto-generated destructor stub
}

