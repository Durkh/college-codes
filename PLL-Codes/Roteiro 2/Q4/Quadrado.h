/*
 * Quadrado.h
 *
 *  Created on: 3 de ago de 2019
 *      Author: egidio
 */

#ifndef QUADRADO_H_
#define QUADRADO_H_

#include "FiguraGeometrica.h"

class Quadrado: public FiguraGeometrica {
public:
	Quadrado();

	double CalcularArea(double raio){return raio;}
	double CalcularArea(double base, double altura);

	virtual ~Quadrado();
};

#endif /* QUADRADO_H_ */
