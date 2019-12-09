/*
 * Circulo.cpp
 *
 *  Created on: 3 de ago de 2019
 *      Author: egidio
 */


#define _USE_MATH_DEFINES
#include "Circulo.h"
#include <math.h>

Circulo::Circulo() {
	// TODO Auto-generated constructor stub

}

double Circulo::CalcularArea(double raio) {

	return M_PI * (pow(raio, 2));
}

Circulo::~Circulo() {
	// TODO Auto-generated destructor stub
}

