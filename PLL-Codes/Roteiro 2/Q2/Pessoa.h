/*
 * Pessoa.h
 *
 *  Created on: 1 de ago de 2019
 *      Author: egidio
 */

#ifndef PESSOA_H_
#define PESSOA_H_

#include "Endereco.h"

class Pessoa {
	string nome, telefone;
	Endereco endereco;
public:
	Pessoa(string nome);
	Pessoa(string nome, string telefone, Endereco endereco);

	string getNome();
	string getTelefone();
	string getEndereco();

	void setNome(string nome);
	void setTelefone(string telefone);
	void setEndereco(string rua, string numero, string bairro, string cidade, string estado, string cep);

	virtual ~Pessoa();
};

#endif /* PESSOA_H_ */
