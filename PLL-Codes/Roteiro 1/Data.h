/*
 * Data.h
 *
 *  Created on: 12 de jul de 2019
 *      Author: egidio
 */

#ifndef DATA_H_
#define DATA_H_

class Data {
private:
	int dia, mes, ano;
public:
	Data();
	Data(int dia, int mes, int ano);

	int getAno() {return ano;}
	void setAno(int ano) {this->ano = ano;}
	int getDia(){return dia;}
	void setDia(int dia){this->dia = dia;}
	int getMes() {return mes;}
	void setMes(int mes){this->mes = mes;}

	void AvancarDia();

	virtual ~Data();
};

#endif /* DATA_H_ */
