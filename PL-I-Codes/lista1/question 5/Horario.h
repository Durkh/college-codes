/*
 * Horario.h
 *
 *  Created on: 4 de jul de 2019
 *      Author: egidio
 */

#ifndef HORARIO_H_
#define HORARIO_H_

class Horario {
private:
	int hora, minuto, segundos;

public:
	Horario(): hora(0), minuto(0), segundos(0) {};
	Horario(int hora, int minuto, int segundos);

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

#endif /* HORARIO_H_ */
