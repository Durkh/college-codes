/*
 * Conta.cpp
 *
 *  Created on: 9 de set de 2019
 *      Author: egidio
 */

#include "Conta.h"

Conta::Conta() {
	this->NomeCliente = "Default";
	this->numero = 0;
	this->saldo = 0;
}

Conta::Conta(std::string nome, int numero, double saldo) {
	this->NomeCliente = nome;
	this->numero = numero;
	this->saldo = saldo;
}

std::string Conta::getNomeCliente() {
		return NomeCliente;
}

void Conta::setNomeCliente(std::string nomeCliente) {
		NomeCliente = nomeCliente;
}

int Conta::getNumero() {
		return numero;
}

void Conta::setNumero(int numero) {
		this->numero = numero;
}


double Conta::getSaldo() {
		return saldo;
}

void Conta::setSaldo(double saldo) {
		this->saldo = saldo;
}

void Conta::Sacar(double valor) {
	if( (this->saldo - valor) < 0){
      std::cout << "saldo insuficiente" << std::endl;
      return;
  }

  if(this->saldo > 0){
    this-> saldo -= valor;
	}
}

void Conta::Depositar(double valor) {
	this-> saldo += valor;
}

Conta::~Conta() {
	// TODO Auto-generated destructor stub
}

