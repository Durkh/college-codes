/*
 * Horario.cpp
 *
 *  Created on: 4 de jul de 2019
 *      Author: egidio
 */

#include "Horario.h"

Horario::Horario(int hora, int minuto, int segundos): hora(hora), minuto(minuto), segundos(segundos){

	if(segundos < 0 || segundos > 60){
		this->segundos=0;
	}
	if(minuto < 0 || minuto > 60){
		this->minuto=0;
	}

	if(hora < 0 || hora > 23){
		this-> hora=0;
	}

}

void Horario::setHorario(int hora, int minuto, int segundos){
	this->hora=hora;
	this->minuto=minuto;
	this->segundos=segundos;
}

void Horario::AvancarHorario(){
	segundos++;
	if(segundos == 61){
		segundos = 0;
		minuto++;
		if(minuto == 61){
			minuto = 0;
			hora++;
			if(hora == 24){
				hora = 0;
			}
		}
	}
}

Horario::~Horario() {
	// TODO Auto-generated destructor stub
}

