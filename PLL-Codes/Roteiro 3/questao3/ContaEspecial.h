/*
 * ContaEspecial.h
 *
 *  Created on: 9 de set de 2019
 *      Author: egidio
 */

#ifndef CONTAESPECIAL_H_
#define CONTAESPECIAL_H_

#include "ContaCorrente.h"

class ContaEspecial: public ContaCorrente {
public:
	ContaEspecial();
	ContaEspecial(std::string nome, int numero, double saldo, double salario);

	double DefinirLimite();

	virtual ~ContaEspecial();
};

#endif /* CONTAESPECIAL_H_ */
