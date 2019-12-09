/*
 * Assalariado.h
 *
 *  Created on: 3 de ago de 2019
 *      Author: egidio
 */

#ifndef ASSALARIADO_H_
#define ASSALARIADO_H_

#include "Trabalhador.h"

class Assalariado: public Trabalhador {
public:
	Assalariado();

	double CalcularPagamentoSemanal();

	virtual ~Assalariado();
};

#endif /* ASSALARIADO_H_ */
