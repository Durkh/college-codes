/*
 * Funcionario.h
 *
 *  Created on: 3 de ago de 2019
 *      Author: egidio
 */

#ifndef FUNCIONARIO_H_
#define FUNCIONARIO_H_

#include <iostream>

class Funcionario {
protected:
	std::string matricula;
	double salario;
public:
	Funcionario();

	std::string getMatricula();
	void setMatricula(std::string matricula);
	double getSalario();
	void setSalario(double salario);

	virtual ~Funcionario();
};

class Consultor: public Funcionario{
public:
	Consultor();

	double getSalario();
	double getSalario(float percentual);

	virtual ~Consultor();
};

#endif /* FUNCIONARIO_H_ */
