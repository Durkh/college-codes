#include <iostream>
#include "Pessoa.h"

using namespace std;

int main(){

	Pessoa p1("Egidio");
	Pessoa p2("Igor", 21, "00000000");

	cout << p1.getNome() << " está ferrado em Verilog" << endl;
	cout << p2.getNome() << " é GOD em Verilog" << endl;

	cout << "dados: " << p2.getNome() << " || " << p2.getIdade() << " || " << p2.getTelefone() << endl;
	p1.setIdade(17);
	p1.setTelefone("40028922");

	cout << "dados: " << p1.getNome() << " || " << p1.getIdade() << " || " << p1.getTelefone() << endl;



}
