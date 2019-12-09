/*
 * Poupanca.h
 *
 *  Created on: 9 de set de 2019
 *      Author: egidio
 */

#ifndef POUPANCA_H_
#define POUPANCA_H_

#include "Conta.h"

class Poupanca: public Conta {
	int variacao;
	double taxaRendimento;
public:
	Poupanca(std::string nome, int numero, double saldo, int variacao, double taxaRendimento);
	Poupanca();

	int getVariacao();
	void setvariacao(int variacao);

	double getTaxa();
	void setTaxa(double taxaVariacao);

	double Render();

	virtual ~Poupanca();
};

#endif /* POUPANCA_H_ */
