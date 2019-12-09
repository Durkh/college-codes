/*
 * FiguraGeometrica.h
 *
 *  Created on: 3 de ago de 2019
 *      Author: egidio
 */

#ifndef FIGURAGEOMETRICA_H_
#define FIGURAGEOMETRICA_H_

#include <iostream>

class FiguraGeometrica {
protected:
	std::string nome;
public:
	FiguraGeometrica();

	virtual double CalcularArea(double raio) = 0;
	virtual double CalcularArea(double base, double altura) = 0;


	virtual ~FiguraGeometrica();

	std::string getNome() {return nome;}
	void setNome(std::string nome) {this->nome = nome;}
};
#endif /* FIGURAGEOMETRICA_H_ */
