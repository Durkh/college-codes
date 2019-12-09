/*
 * Voo.h
 *
 *  Created on: 4 de jul de 2019
 *      Author: egidio
 */

#ifndef VOO_H_
#define VOO_H_

#include <iostream>

using namespace std;

class Data {
private:
	int dia, mes, ano;

public:
	Data(): dia(1), mes(1), ano(1) {};
	Data(int dia, int mes, int ano);

	int getDia() {return this->dia;};
	int getMes() {return this->mes;};
	int getAno() {return this->ano;};

	void setAno(int ano) {this->ano = ano;}
	void setDia(int dia) {this->dia = dia;}
	void setMes(int mes) {this->mes = mes;}
	void setAll(int dia, int mes, int ano){
		this->dia = dia;
		this->mes = mes;
		this->ano= ano;
	};

	int compara(Data extData);
	string getMesExtenso();
	bool isBissexto();

	virtual ~Data();

};

class Horario {
private:
	int hora, minuto, segundos;

public:
	Horario(): hora(0), minuto(0), segundos(0) {};
	Horario(int hora, int minuto, int segundos);
	Horario(int hora, int minuto);

	int getHora() {return hora;}
	int getMinuto() {return minuto;}
	int getSegundos(){return segundos;}

	void setHorario(int hora, int minuto, int segundos);
	void setHora(int hora) {this->hora = hora;}
	void setMinuto(int minuto) {this->minuto = minuto;}
	void setSegundos(int segundos) {this->segundos = segundos;}

	void AvancarHorario();

	virtual ~Horario();

};

class Voo {
private:
	Data data;
	Horario hora;
	bool assentos[100];
	unsigned long int numVoo;

public:
	Voo();

	void setData(int dia, int mes, int ano) {data.setAll(dia,mes,ano);}
	void setHora(int hora, int minuto) {this->hora.setHorario(hora,minuto,0);}
	void setNumVoo(unsigned long int numVoo) {this->numVoo = numVoo;}
	Data getData();
	Horario getHorario();
	int getVagas();
	unsigned long int getnumVoo() {return numVoo;}

	int ProximoLivre();
	bool Verifica(int assento);
	bool Ocupa(int assento);


	virtual ~Voo();

};

#endif /* VOO_H_ */
