/*
 * Pessoa.h
 *
 *  Created on: 9 de jul de 2019
 *      Author: egidio
 */

#ifndef PESSOA_H_
#define PESSOA_H_

#include <iostream>
using namespace std;

class Pessoa {
private:
	string nome;
	int idade;
	string telefone;
public:
	Pessoa(string nome);
	Pessoa(string nome, int idade, string telefone);

	int getIdade(){return idade;}
	void setIdade(int idade) {this->idade = idade;}

	string getNome() const {return nome;}
	void setNome(string nome) {this->nome = nome;}

	string getTelefone() const {return telefone;}
	void setTelefone(string telefone) {this->telefone = telefone;}

	virtual ~Pessoa();
};

#endif /* PESSOA_H_ */
