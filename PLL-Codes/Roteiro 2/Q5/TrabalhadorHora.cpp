/*
 * TrabalhadorHora.cpp
 *
 *  Created on: 3 de ago de 2019
 *      Author: egidio
 */

#include "TrabalhadorHora.h"

TrabalhadorHora::TrabalhadorHora(): valorHora(0) {

}

double TrabalhadorHora::CalcularPagamentoSemanal(int horas) {
	if(horas <= 40){
		return horas * this->valorHora;
	}else{
		double buffer;
		buffer = (horas * 40);
		for(int i=(horas- 40); i!= 0; i--){
			buffer += 1.5 * this->valorHora;
		}
		return buffer;
	}
}

double TrabalhadorHora::getVHora() {
	return this->valorHora;
}

void TrabalhadorHora::setVHora(double valor) {
	this->valorHora = valor;
}

TrabalhadorHora::~TrabalhadorHora() {
	// TODO Auto-generated destructor stub
}

