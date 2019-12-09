/*
 * Pagamento.h
 *
 *  Created on: 10 de jul de 2019
 *      Author: egidio
 */

#ifndef PAGAMENTO_H_
#define PAGAMENTO_H_

#include <iostream>
#include <string>

using namespace std;

class Pagamento {
private:
	double valorPagamento;
	string nomeFuncionario;
public:
	Pagamento();

	void setValor(double valor){ this-> valorPagamento = valor;};
	double getValor(){ return this->valorPagamento;};
	void setNome(string nome){ this-> nomeFuncionario = nome;};
	string getNome(){return this->nomeFuncionario;};

	virtual ~Pagamento();
};

class ControlePagamentos{
private:
	Pagamento pagamento[100];
public:
	ControlePagamentos();

	void setPagamentos();
	double CalculaTotalPagamentos();
	bool ExistePagamentoFunc(string nome);
    void PrintCadastrados();


	virtual ~ControlePagamentos();

};

#endif /* PAGAMENTO_H_ */
