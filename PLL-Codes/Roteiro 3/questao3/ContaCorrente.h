/*
 * ContaCorrente.h
 *
 *  Created on: 9 de set de 2019
 *      Author: egidio
 */

#include "Conta.h"

#ifndef CONTACORRENTE_H_
#define CONTACORRENTE_H_

class ContaCorrente: public Conta {
protected:
	double salario;
	int limite;
public:
	ContaCorrente(std::string nome, int numero, double saldo, double salario);
	ContaCorrente();

	double getSalario();
	void setSalario(double salario);
	int getLimite();

	double DefinirLimite();
	void Depositar(double valor);

	virtual ~ContaCorrente();
};

#endif /* CONTACORRENTE_H_ */
