#include "Medico.h"

using namespace std;

int main(){
	Medico* medicos[4] = {new Cirurgiao, new Oftalmo, new Otorrino, new Ginecologista};

	medicos[0]->setAltura(170);
	medicos[0]->setNome("Alberto Alves");
	medicos[0]->setPeso(53);

	medicos[1]->setAltura(177);
	medicos[1]->setNome("Tooru Muranishi");
	medicos[1]->setPeso(64);

	medicos[2]->setAltura(185);
	medicos[2]->setNome("Egidio Neto");
	medicos[2]->setPeso(73);

	medicos[3]->setAltura(163);
	medicos[3]->setNome("Ikumi Nakamura");
	medicos[3]->setPeso(47);

	cout << "O sitema possui 4 médicos cadastrados" << endl << endl;

	for(int i=0; i<4; i++){

		cout << "Médico " << i+1 << ":" << endl << endl;

		cout << medicos[i]->getCurso() << ": " << medicos[i]->getNome() << endl << "Altura: " << medicos[i]->getAltura()
				<< "\t" << "Peso: " << medicos[i]->getPeso() <<	endl << endl;

		cout << medicos[i]->cirurgia() << endl;
		cout << medicos[i]->atendimento() << endl;

		cout << endl << endl;
	}

}
