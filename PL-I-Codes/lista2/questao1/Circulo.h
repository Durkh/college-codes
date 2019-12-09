/*
 * Circulo.h
 *
 *  Created on: 3 de ago de 2019
 *      Author: egidio
 */

#ifndef CIRCULO_H_
#define CIRCULO_H_

#include "FiguraGeometrica.h"

class Circulo: public FiguraGeometrica {
public:
	Circulo();

	double CalcularArea(double raio);
	double CalcularArea(double base, double altura){return base;}

	virtual ~Circulo();
};

#endif /* CIRCULO_H_ */
