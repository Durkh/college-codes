/*
 * Invoice.cpp
 *
 *  Created on: 9 de jul de 2019
 *      Author: egidio
 */

#include "Invoice.h"

Invoice::Invoice(): num(0), desc("none"), qnt(0), preco(0) {
	// TODO Auto-generated constructor stub

}

Invoice::Invoice(unsigned long int num, string desc, unsigned int qnt, double preco){

	this->desc = desc;
	this->num = num;

	if(qnt < 0){
		this->qnt =0;
	}else {
		this->qnt=qnt;
	}
	if(preco < 0){
		this->preco = 0.0;
	}else{
		this->preco = preco;
	}
}

double Invoice::getInvoiceAmount(){
	return this->preco * this->qnt;
}

Invoice::~Invoice() {
	// TODO Auto-generated destructor stub
}

