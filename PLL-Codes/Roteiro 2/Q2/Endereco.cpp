/*
 * Endereco.cpp
 *
 *  Created on: 1 de ago de 2019
 *      Author: egidio
 */

#include "Endereco.h"
#include <sstream>

Endereco::Endereco():rua("none"), numero("none"), bairro("none"), cidade("none"), estado("none"), cep("none") {

}

Endereco::Endereco(string rua, string numero, string bairro, string cidade, string estado, string cep){
	this->rua = rua;
	this->numero = numero;
	this->bairro = bairro;
	this->cidade = cidade;
	this->cep = cep;
}

string Endereco::toString(){
	std::stringstream buffer;

	buffer << "Numero: " << this->numero << std::endl << "Rua: "  << this->rua << "\n" << "CEP: " << this->cep << std::endl <<
			"Bairro: " << this->bairro << "\t" << "Cidade: " << this->cidade << "\t" << "Estado: " << this->estado << std::endl;

	return buffer.str();
}


string Endereco::getBairro() {
	return this->bairro;
}

void Endereco::setBairro(string bairro) {
	this->bairro = bairro;
}

string Endereco::getCep() {
	return this->cep;
}

void Endereco::setCep(string cep) {
	this->cep = cep;
}

string Endereco::getCidade() {
	return this->cidade;
}

void Endereco::setCidade(string cidade) {
	this->cidade = cidade;
}

string Endereco::getEstado() {
	return this->estado;
}

void Endereco::setEstado(string estado) {
	this->estado = estado;
}

string Endereco::getNumero() {
	return this->numero;
}

void Endereco::setNumero(string numero) {
	this->numero = numero;
}

string Endereco::getRua() {
	return this->rua;
}

void Endereco::setRua(string rua) {
	this->rua = rua;
}

Endereco::~Endereco() {
	// TODO Auto-generated destructor stub
}

