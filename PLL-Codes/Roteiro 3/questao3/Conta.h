/*
 * Conta.h
 *
 *  Created on: 9 de set de 2019
 *      Author: egidio
 */

#ifndef CONTA_H_
#define CONTA_H_

#include <iostream>

using namespace std;

class Conta {
protected:
	std::string NomeCliente;
	int numero;
	double saldo;
public:
	Conta(std::string nome, int numero, double saldo);
	Conta();

	std::string getNomeCliente();
	void setNomeCliente(std::string nomeCliente);
	int getNumero();
	void setNumero(int numero);
	double getSaldo();
	void setSaldo(double saldo);

	void Sacar(double valor);
	virtual void Depositar(double valor);

	virtual ~Conta();
};

#endif /* CONTA_H_ */
