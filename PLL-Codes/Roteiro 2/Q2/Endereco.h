/*
 * Endereco.h
 *
 *  Created on: 1 de ago de 2019
 *      Author: egidio
 */

#ifndef ENDERECO_H_
#define ENDERECO_H_

#include <iostream>

using std::string;

class Endereco {
	string rua, numero, bairro, cidade, estado, cep;
public:
	Endereco();
	Endereco(string rua, string numero, string bairro, string cidade, string estado, string cep);

	string toString();

	string getBairro();
	void setBairro(string bairro);
	string getCep();
	void setCep(string cep);
	string getCidade();
	void setCidade(string cidade);
	string getEstado();
	void setEstado(string estado);
	string getNumero();
	void setNumero(string numero);
	string getRua();
	void setRua(string rua);

	virtual ~Endereco();


};

#endif /* ENDERECO_H_ */
