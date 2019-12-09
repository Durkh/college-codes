#include <iostream>
#include "Empregado.h"

using namespace std;

int main(){

	Empregado empregado;

	cout << "digite o nome e o sobrenome do funcionário: " << flush;
	{
		string str;
		cin >> str;
		empregado.setNome(str);
		cin >> str;
		empregado.setSobrenome(str);
	}

	cout << "digite salário: " << flush;
	{
		double salario;
		cin >> salario;
		empregado.setSalario(salario);
	}

	Empregado empregado2;

	cout << "digite o nome e o sobrenome do funcionário: " << flush;
	{
		string str;
		cin >> str;
		empregado2.setNome(str);
		cin >> str;
		empregado2.setSobrenome(str);
	}

	cout << "digite salário: " << flush;
	{
		double salario;
		cin >> salario;
		empregado2.setSalario(salario);
	}

	cout << endl << endl;

	cout << "empregado 1:" << endl << "nome: " << empregado.getNome() << " " << empregado.getSobrenome() << endl << "salário anual: " << (empregado.getSalario()*12) << endl;
	cout << "empregado 2:" << endl << "nome: " << empregado2.getNome() << " " << empregado2.getSobrenome() << endl << "salário anual: " << (empregado2.getSalario()*12) << endl;

	empregado.Aumento(10);
	empregado2.Aumento(10);

	cout << endl << endl;

	cout << "empregado 1:" << endl << "nome: " << empregado.getNome() << " " << empregado.getSobrenome() << endl << "salário anual: " << (empregado.getSalario()*12) << endl;
	cout << "empregado 2:" << endl << "nome: " << empregado2.getNome() << " " << empregado2.getSobrenome() << endl << "salário anual: " << (empregado2.getSalario()*12) << endl;

}
