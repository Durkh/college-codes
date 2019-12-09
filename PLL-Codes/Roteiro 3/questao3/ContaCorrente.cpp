/*
 * ContaCorrente.cpp
 *
 *  Created on: 9 de set de 2019
 *      Author: egidio
 */

#include "ContaCorrente.h"

ContaCorrente::ContaCorrente(){
Conta();
this->salario = 0;
this->limite = 0;
}

ContaCorrente::ContaCorrente(std::string nome, int numero, double saldo,
		double salario) {

	this->NomeCliente = nome;
	this->numero = numero;
	this->saldo = saldo;
	this->salario = salario;
	this->limite = 0;
}

void ContaCorrente::Depositar(double valor) {
	if( (this->saldo + valor) > limite){
	  std::cout << "operacao invalida" << std::endl;
	  return;
	}

	if(this->saldo < limite){
	  this->saldo +=valor;
	}
}

double ContaCorrente::getSalario() {
	return this-> salario;
}

void ContaCorrente::setSalario(double salario) {
	this-> salario = salario;
}

int ContaCorrente::getLimite() {
	return this-> limite;
}

double ContaCorrente::DefinirLimite(){
	this->limite = 2 * salario;
	return this->limite;
}

ContaCorrente::~ContaCorrente() {
	// TODO Auto-generated destructor stub
}
