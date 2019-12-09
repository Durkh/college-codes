/*
 * Pessoa.cpp
 *
 *  Created on: 1 de ago de 2019
 *      Author: egidio
 */

#include "Pessoa.h"

Pessoa::Pessoa(string nome) {
	this->nome = nome;
	this->telefone= "default";
}

Pessoa::Pessoa(string nome, string telefone, Endereco endereco) {
	this->nome = nome;
	this->telefone = telefone;
	this->endereco = endereco;
}

string Pessoa::getNome() {
	return this->nome;
}

string Pessoa::getTelefone() {
	return this->telefone;
}

string Pessoa::getEndereco() {
	return this->endereco.toString();
}

void Pessoa::setNome(string nome) {
	this->nome = nome;
}

void Pessoa::setTelefone(string telefone) {
	this->telefone = telefone;
}

void Pessoa::setEndereco(string rua, string numero, string bairro, string cidade, string estado, string cep) {
	this->endereco.setNumero(numero);
	this->endereco.setRua(rua);
	this->endereco.setCep(cep);
	this->endereco.setBairro(bairro);
	this->endereco.setCidade(cidade);
	this->endereco.setEstado(estado);
}

Pessoa::~Pessoa() {
	// TODO Auto-generated destructor stub
}

