/*
 * Invoice.h
 *
 *  Created on: 9 de jul de 2019
 *      Author: egidio
 */

#ifndef INVOICE_H_
#define INVOICE_H_

#include <iostream>

using namespace std;

class Invoice {
private:
	unsigned long int num;
	string desc;
	unsigned int qnt;
	double preco;
public:
	Invoice();
	Invoice(unsigned long int num, string desc, unsigned int qnt, double preco);

	const string getDesc(){return desc;}
	void setDesc(const string desc) {this->desc = desc;}
	unsigned long int getNum() {return num;}
	void setNum(unsigned long int num) {this->num = num;}
	double getPreco() {return preco;}
	void setPreco(double preco) {this->preco = preco;}
	unsigned int getQnt() {return qnt;}
	void setQnt(unsigned int qnt) {this->qnt = qnt;}

	double getInvoiceAmount();

	virtual ~Invoice();


};

#endif /* INVOICE_H_ */
