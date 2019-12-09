#include "Funcionario.h"

int main(){

	Consultor cons;

	cons.setSalario(500);
	std::cout << "Consultor" << std::endl;
	std::cout << "Salario: " << cons.getSalario() << std::endl;
	std::cout << "Salario: " << cons.getSalario() << std::endl;
	std::cout << "Salario: " << cons.getSalario(30) << std::endl;

	Funcionario fun;

	fun.setSalario(200);
	std::cout << std::endl << "Funcionario" << std::endl;
	std::cout << "Salario: " << fun.getSalario() << std::endl;

}
