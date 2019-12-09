/*
 * Medico.cpp
 *
 *  Created on: 18 de ago de 2019
 *      Author: egidio
 */

#include "Medico.h"

Medico::Medico(): curso("default"), nome("default"), peso(0), altura(0) {

}

std::string Medico::getNome() {
	return this->nome;
}

double Medico::getAltura() {
	return this->altura;
}

double Medico::getPeso() {
	return this->peso;
}

std::string Medico::getCurso() {
	return this->curso;
}

void Medico::setNome(std::string nome) {
	this->nome = nome;
}

void Medico::setAltura(double altura) {
	this->altura = altura;
}

void Medico::setPeso(double peso) {
	this->peso = peso;
}

void Medico::setCurso(std::string curso) {
	this->curso = curso;
}

Medico::~Medico() {

}

Cirurgiao::Cirurgiao() {
	setCurso("Cirurgião");
}

std::string Cirurgiao::cirurgia() {
	return "O cirurgião está realizando uma cirurgia";
}

std::string Cirurgiao::atendimento() {
	return "O cirurgião está atendendo";
}

Cirurgiao::~Cirurgiao() {
}

Oftalmo::Oftalmo() {
	setCurso("Oftalmologista");
}

std::string Oftalmo::cirurgia() {
	return "O oftalmologista está realizando uma cirurgia";
}

std::string Oftalmo::atendimento() {
	return "O oftalmologista está atendendo";
}

Oftalmo::~Oftalmo() {
}

Otorrino::Otorrino() {
	setCurso("Otorrinolaringologista");
}

std::string Otorrino::cirurgia() {
	return "O otorrino está realizando uma cirurgia";
}

std::string Otorrino::atendimento() {
	return "O otorrino está atendendo";
}

Otorrino::~Otorrino() {
}

Ginecologista::Ginecologista() {
	setCurso("Ginecologista");
}

std::string Ginecologista::cirurgia() {
	return "O ginecologista está realizando uma cirurgia";
}

std::string Ginecologista::atendimento() {
	return "O ginecologista está atendendo";
}

Ginecologista::~Ginecologista() {
}
