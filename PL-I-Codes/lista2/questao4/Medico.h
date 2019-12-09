/*
 * Medico.h
 *
 *  Created on: 18 de ago de 2019
 *      Author: egidio
 */

#ifndef MEDICO_H_
#define MEDICO_H_

#include <iostream> //Cirurgiao, Oftalmologista, Otorrino e Ginecologista.

class Medico {
	std::string nome;
	double altura;
	double peso;
	std::string curso;
public:
	Medico();

	std::string getNome();
	double getAltura();
	double getPeso();
	std::string getCurso();

	void setNome(std::string nome);
	void setAltura(double altura);
	void setPeso(double peso);
	void setCurso(std::string curso);

	virtual std::string cirurgia()=0;
	virtual std::string atendimento()=0;

	virtual ~Medico();
};

class Cirurgiao: public Medico{
public:
	Cirurgiao();

	std::string cirurgia();
	std::string atendimento();

	virtual ~Cirurgiao();
};

class Oftalmo: public Medico{
public:
	Oftalmo();

	std::string cirurgia();
	std::string atendimento();

	virtual ~Oftalmo();
};

class Otorrino: public Medico{
public:
	Otorrino();

	std::string cirurgia();
	std::string atendimento();

	virtual ~Otorrino();
};

class Ginecologista: public Medico{
public:
	Ginecologista();

	std::string cirurgia();
	std::string atendimento();

	virtual ~Ginecologista();
};

#endif /* MEDICO_H_ */
