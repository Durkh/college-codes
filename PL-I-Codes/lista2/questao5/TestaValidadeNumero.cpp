/*
 * TestaValidadeNumero.cpp
 *
 *  Created on: 18 de ago de 2019
 *      Author: egidio
 */

#include "TestaValidadeNumero.h"

TestaValidadeNumero::TestaValidadeNumero() {
	// TODO Auto-generated constructor stub

}

void TestaValidadeNumero::validaNumero(int num) {

	if(num < 0){
		throw ValorAbaixoException();
	}else if(num < 100){
		std::cout << "Numero Aceito" << std::endl;
	}else if(num < 1000){
		throw ValorAcimaException();
	}else if(num > 1000){
		throw ValorMuitoAcimaException();
	}


}

TestaValidadeNumero::~TestaValidadeNumero() {
	// TODO Auto-generated destructor stub
}

