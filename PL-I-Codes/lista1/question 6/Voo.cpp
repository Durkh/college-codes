/*
 * Voo.cpp
 *
 *  Created on: 4 de jul de 2019
 *      Author: egidio
 */

#include "Voo.h"

Data::Data(int dia, int mes, int ano): dia(dia), mes(mes), ano(ano) {

	if (dia >28 && mes == 2){
		this->dia=1;
	}

	if(dia < 0 || dia > 31){
		this->dia=1;
	}
	if(mes < 0 || mes > 12){
		this->mes=1;
	}

	if(ano < 0 || ano > 9999){
		this-> ano=0;
	}

}


int Data::compara(Data data){

	if (data.dia == this->dia && data.mes == this->mes && data.ano == this->ano){
		return 0;
	} else if (data.dia < this->dia && data.mes < this->mes && data.ano < this->ano){
		return -1;
	} else {
		return 1;
	}

}

string Data::getMesExtenso(){

	string str;

	switch(this->mes){

	        case 1:
	            str="janeiro";
	            break;
	        case 2:
	            str="fevereiro";
	            break;
	        case 3:
	            str="marco";
	            break;
	        case 4:
	            str="abril";
	            break;
	        case 5:
	            str="maio";
	            break;
	        case 6:
	            str="junho";
	            break;
	        case 7:
	            str="julho";
	            break;
	        case 8:
	            str="agosto";
	            break;
	        case 9:
	            str="setembro";
	            break;
	        case 10:
	            str= "outubro";
	            break;
	        case 11:
	            str="novembro";
	            break;
	        case 12:
	            str= "dezembro";
	            break;

	        }

	return str;
}

bool Data::isBissexto(){

	return (this->ano%400 == 0 || (this->ano%4 == 0 && this->ano%100 != 0) ) ? true : false;
}

Data::~Data() {
	// TODO Auto-generated destructor stub
}

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

Horario::Horario(int hora, int minuto): segundos(0){

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

Voo::Voo(): data(0,0,0), hora(0,0), numVoo(0) {

	for(auto &i: assentos){
		i = false;
	}

}

int Voo::ProximoLivre(){

	for(int i=0; i<100; i++){
		if(assentos[i] == false){
			return i+1;
		}
	}

	return -1;
}

bool Voo::Verifica(int assento){

	if(assento > 100) return true;

	if(assentos[assento-1] == false) return true;

	return false;
}

bool Voo::Ocupa(int assento){

	if(assento > 100) return false;

	if(assentos[assento-1] == false){
		assentos[(assento-1)] = true;
		return true;
	}

	return false;
}

int Voo::getVagas(){

	int vagas=0;

	for(const auto &i: assentos){
		if(i==false){
			vagas++;
		}
	}

	return vagas;
}

Data Voo::getData(){

	return data;
}

Horario Voo::getHorario(){
	return hora;
}

Voo::~Voo() {
	// TODO Auto-generated destructor stub
}


