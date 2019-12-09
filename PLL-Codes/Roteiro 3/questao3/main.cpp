#include "Poupanca.h"
#include "ContaEspecial.h"

using namespace std;

int main(){

	{
		Conta conta("Egidio", 6545678, 2000);

		cout << "Conta Padrão:\n\nNome: \n" << conta.getNomeCliente() << endl << "Numero da Conta: " << conta.getNumero() << "\tSaldo: " <<
				conta.getSaldo() << endl;

		cout << "digite um valor para depositar:\t";
		double aux;
		cin >> aux;
		conta.Depositar(aux);
		cout << "\nNovo Saldo: " << conta.getSaldo() << endl << "Digite um valor para sacar:\t";
		cin >> aux;
		conta.Sacar(aux);
		cout << "\nNovo Saldo: " << conta.getSaldo() << endl;

		cout << endl << endl <<
				"========================================================================================================" <<
				endl << endl;
	}
	{
		Poupanca poupa("Egidio", 6545678, 2000, 51, 10);

		cout << "Poupança:\n\nNome: \n" << poupa.getNomeCliente() << endl << "Numero da Conta: " << poupa.getNumero() << "\tSaldo: " <<
				poupa.getSaldo() << endl;

		for(int i=0; i<3; i++){
			poupa.Render();
		}

		cout << endl << "saldo apos rendimento: " << poupa.getSaldo() << endl;

		cout << endl << endl <<
				"========================================================================================================" <<
				endl << endl;

	}
	{
		ContaCorrente corrente("Egidio", 6545678, 2000, 5000);

		cout << "Nome: \n" << corrente.getNomeCliente() << "\tSalario: " << corrente.getSalario() << endl
				<< "Numero da Conta: " << corrente.getNumero() << "\tSaldo: " << corrente.getSaldo() << endl <<
				"Limite: " << corrente.DefinirLimite() << endl;

		cout << "digite um valor para depositar:\t";
		double aux;
		cin >> aux;
		corrente.Depositar(aux);
		cout << "\nNovo Saldo: " << corrente.getSaldo() << endl << "Digite um valor para sacar:\t";
		cin >> aux;
		corrente.Sacar(aux);
		cout << "\nNovo Saldo: " << corrente.getSaldo() << endl;

		cout << endl << endl <<
				"========================================================================================================" <<
				endl << endl;
	}
	{
		ContaEspecial corrente("Egidio", 6545678, 2000, 5000);

		cout << "Nome: \n" << corrente.getNomeCliente() << "\tSalario: " << corrente.getSalario() << endl
				<< "Numero da Conta: " << corrente.getNumero() << "\tSaldo: " << corrente.getSaldo() << endl <<
				"Limite: " << corrente.DefinirLimite() << endl;

		cout << "digite um valor para depositar:\t";
		double aux;
		cin >> aux;
		corrente.Depositar(aux);
		cout << "\nNovo Saldo: " << corrente.getSaldo() << endl << "Digite um valor para sacar:\t";
		cin >> aux;
		corrente.Sacar(aux);
		cout << "\nNovo Saldo: " << corrente.getSaldo() << endl;


		cout << endl << endl <<
				"========================================================================================================" <<
				endl << endl;
	}

}
