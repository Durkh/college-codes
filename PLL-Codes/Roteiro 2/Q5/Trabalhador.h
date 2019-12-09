/*
 * Trabalhador.h
 *
 *  Created on: 3 de ago de 2019
 *      Author: egidio
 */

#ifndef TRABALHADOR_H_
#define TRABALHADOR_H_

#include <iostream>

class Trabalhador {
protected:
	std::string nome;
	double salario;
public:
	Trabalhador();

	std::string getNome();
	void setNome(std::string nome);
	double getSalario();
	void setSalario(double salario);

	virtual ~Trabalhador();
};

#endif /* TRABALHADOR_H_ */
