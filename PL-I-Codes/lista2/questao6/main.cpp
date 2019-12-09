#include "ContaEsp.h"

using namespace std;

void Interface(Iconta *conta);

int main(){
  Iconta *contas[2];
  contas[0] = new Conta("Egidio", 5000, 500465, 4000);
  contas[1] = new ContaEspecial("Egidio", 5000, 500465, 4000);

  cout << endl << "Conta Normal" << endl << endl;
  Interface(contas[0]);
  cout << endl << "Conta Especial" << endl << endl;
  Interface(contas[1]);
  delete contas[0];
  delete contas[1];
}

void Interface(Iconta *conta){
  cout << "Ola " << conta->getNome() << endl <<
  "Numero da sua conta: " << conta->getNum() << endl;

  conta->definirLimite();

  int input=1;

  while(input){
    cout << "Voce possui um saldo de " << conta->getSaldo() << endl << endl;
    cout << "voce deseja: " << endl << "(1) Sacar" << endl << "(2) Depositar" << endl << "(0) Sair" << endl;
    cin >> input;

    switch(input){
      case 1:
        cout << "digite o valor: " << flush;
        {
          double valor;
          cin >> valor;
          try{
        	  conta->sacar(valor);
          }catch(SaldoIndisponivelException& x){
        	  cout << "erro: " << x.what() << endl;
          }
        }break;
      case 2:
      cout << "digite o valor: " << flush;
      {
        double valor;
        cin >> valor;
        try{
        conta->depositar(valor);
        }catch(SaldoIndisponivelException& x){
        	cout << "erro: " << x.what() << endl;
        }
      }break;
    }

  }
}
