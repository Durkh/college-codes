/*
 * Despesa.h
 *
 *  Created on: 12 de jul de 2019
 *      Author: egidio
 */

#ifndef DESPESA_H_
#define DESPESA_H_

#include <iostream>

using namespace std;

class Despesa {
private:
	double valor;
	string tipoDeGasto;
public:
	Despesa();
	Despesa(double valor, string tipoDeGasto):valor(valor), tipoDeGasto(tipoDeGasto) {}

	void setValor(double valor){this->valor=valor;}
	void setTipo(string tipo){this->tipoDeGasto= tipo;}

	double getValor(){return this->valor;}
	string getTipo(){return this->tipoDeGasto;}

	virtual ~Despesa();
};


class ControleDeGastos{
private:
	Despesa despesas[100];
public:
	ControleDeGastos();

	void setDespesa(Despesa d, int pos);
	double CalculaTotalDespesa();
	bool ExisteDespesaTipo(string tipo);

	virtual ~ControleDeGastos();
};

#endif /* DESPESA_H_ */
