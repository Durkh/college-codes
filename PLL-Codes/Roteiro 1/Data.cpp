/*
 * Data.cpp
 *
 *  Created on: 12 de jul de 2019
 *      Author: egidio
 */

#include "Data.h"

Data::Data():dia(0), mes(0), ano(0) {
	// TODO Auto-generated constructor stub

}

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

void Data::AvancarDia(){
	this->dia++;

	if (dia >30){
			this->dia=1;
			this->mes++;
			if(mes >12){
				this->mes=1;
				this->ano++;
		}
	}
}

Data::~Data() {
	// TODO Auto-generated destructor stub
}

