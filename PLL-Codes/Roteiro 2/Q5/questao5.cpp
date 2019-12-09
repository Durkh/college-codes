#include "Assalariado.h"
#include "TrabalhadorHora.h"

using namespace std;

int main(){

	TrabalhadorHora tHora;
	Assalariado assal;

	assal.setSalario(1500);
	tHora.setVHora(10);

	cout << "Salario semanal do Assalariado: " << assal.CalcularPagamentoSemanal() << endl;
	cout << "Salario semanal do não-assalariado: " << tHora.CalcularPagamentoSemanal(35) << endl;

	cout << endl << "Salario semanal do não-assalariado com acréssimo: " << tHora.CalcularPagamentoSemanal(55) << endl;

}
