/*
 * Empregado.h
 *
 *  Created on: 12 de jul de 2019
 *      Author: egidio
 */

#ifndef EMPREGADO_H_
#define EMPREGADO_H_

#include <iostream>

using namespace std;

class Empregado {
private:
	string nome;
	string sobrenome;
	double salario;
public:
	Empregado():nome("deafult"), sobrenome("default"), salario(0) {};
	Empregado(string nome, string sobrenome, double salario):nome(nome), sobrenome(sobrenome), salario(salario) {};

	string getNome(){return nome;}
	void setNome(string nome) {this->nome = nome;}
	double getSalario() {return salario;}
	void setSalario(double salario) {if(salario>0) this->salario = salario;}
	string getSobrenome(){return sobrenome;}
	void setSobrenome(string sobrenome){this->sobrenome = sobrenome;}

	void Aumento(double porcentagem){this->salario = salario + (salario*porcentagem/100);}

	virtual ~Empregado();
};

#endif /* EMPREGADO_H_ */
