/*
 * TrabalhadorHora.h
 *
 *  Created on: 3 de ago de 2019
 *      Author: egidio
 */

#ifndef TRABALHADORHORA_H_
#define TRABALHADORHORA_H_

#include "Trabalhador.h"

class TrabalhadorHora: public Trabalhador {
	double valorHora;
public:
	TrabalhadorHora();

	double CalcularPagamentoSemanal(int horas);
	double getVHora();
	void setVHora(double valor);

	virtual ~TrabalhadorHora();
};

#endif /* TRABALHADORHORA_H_ */
