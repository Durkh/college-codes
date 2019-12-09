/*
 * Pagamento.cpp
 *
 *  Created on: 10 de jul de 2019
 *      Author: egidio
 */

#include "Pagamento.h"

Pagamento::Pagamento():valorPagamento(0), nomeFuncionario("default") {

}

Pagamento::~Pagamento() {
	// TODO Auto-generated destructor stub
}

ControlePagamentos::ControlePagamentos(){

	for(auto &i:pagamento){
		i= Pagamento();
	}

}

void ControlePagamentos::setPagamentos(){

	int i=0;
	double buffer;
	string nome;

	while(i < 100 && pagamento[i].getNome() != "default"){
		i++;
	}

	if(i==99){
        cout << "buffer cheio" << endl;
        return;
    }
        
    cin >> nome;
	pagamento[i].setNome(nome);
	cin >>  buffer;
	pagamento[i].setValor(buffer);

}

double ControlePagamentos::CalculaTotalPagamentos(){

	int i=0;
	double amount=0;

	while(i < 100 && pagamento[i].getNome() != "default"){
		amount += pagamento[i].getValor();
        i++;
	}

	return amount;
}

bool ControlePagamentos::ExistePagamentoFunc(string nome){

	int i=0;

	while(i < 100 && pagamento[i].getNome() != "default"){
			if(pagamento[i].getNome() == nome){
				return true;
			}
			i++;
		}

	return false;
}

void ControlePagamentos::PrintCadastrados(){

    int i=0;
    while(i < 100 && pagamento[i].getNome() != "default"){
        cout << ">>" << pagamento[i].getNome() << endl;
        i++;
    }
    
}

ControlePagamentos::~ControlePagamentos(){

}
