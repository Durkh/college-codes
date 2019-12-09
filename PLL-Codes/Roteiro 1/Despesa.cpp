/*
 * Despesa.cpp
 *
 *  Created on: 12 de jul de 2019
 *      Author: egidio
 */

#include "Despesa.h"

Despesa::Despesa():valor(0), tipoDeGasto("none") {
	// TODO Auto-generated constructor stub

}

Despesa::~Despesa() {
	// TODO Auto-generated destructor stub
}

ControleDeGastos::ControleDeGastos(){

	for(auto &i: despesas){
		i = Despesa();
	}

}

void ControleDeGastos::setDespesa(Despesa d, int pos){

	if(pos>100) return;

	this->despesas[pos-1] = d;
}

double ControleDeGastos::CalculaTotalDespesa(){
	double amount=0;

	for(auto i: despesas){
		amount+= i.getValor();
	}

	return amount;
}

bool ControleDeGastos::ExisteDespesaTipo(string tipo){

	for(auto i: despesas){
		if(i.getTipo() == tipo){
			return true;
		}
	}


	return false;
}

ControleDeGastos::~ControleDeGastos(){

}
