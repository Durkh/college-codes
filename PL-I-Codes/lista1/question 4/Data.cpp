/*
 * Data.cpp
 *
 *  Created on: 4 de jul de 2019
 *      Author: egidio
 */

#include "Data.h"
#include <iostream>

using namespace std;

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

