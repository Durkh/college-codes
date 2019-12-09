/*
 * Data.h
 *
 *  Created on: 4 de jul de 2019
 *      Author: egidio
 */

#ifndef DATA_H_
#define DATA_H_

#include <iostream>
using namespace std;

class Data {
private:
	int dia;
	int mes;
	int ano;

public:
	Data(): dia(1), mes(1), ano(1) {};
	Data(int dia, int mes, int ano);

	int getDia() {return this->dia;};
	int getMes() {return this->mes;};
	int getAno() {return this->ano;};

	void setAno(int ano) {this->ano = ano;}
	void setDia(int dia) {this->dia = dia;}
	void setMes(int mes) {this->mes = mes;}

	int compara(Data data);
	string getMesExtenso();
	bool isBissexto();

	virtual ~Data();

};

#endif /* DATA_H_ */
