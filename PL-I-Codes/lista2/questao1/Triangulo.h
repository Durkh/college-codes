/*
 * Triangulo.h
 *
 *  Created on: 3 de ago de 2019
 *      Author: egidio
 */

#ifndef TRIANGULO_H_
#define TRIANGULO_H_

#include "FiguraGeometrica.h"

class Triangulo: public FiguraGeometrica {
public:
	Triangulo();

	double CalcularArea(double raio){return raio;}
	double CalcularArea(double base, double altura);

	virtual ~Triangulo();
};

#endif /* TRIANGULO_H_ */
