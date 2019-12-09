#include "Sistema.h"

using namespace std;

Funcionario* cadastro1();
Funcionario* cadastro2();
Funcionario* cadastro3();

// nome, matricula, salario, horasTrabalhadas, vendas, comissão

int main(){
  Sistema sistema;
  int input;

  while(true){
    cout << "Escolha um tipo de funcionario para cadastrar:" << endl <<
      "1- Assalariado" << endl <<
      "2- Horista" << endl <<
      "3- Comissionado" << endl <<
      "0- Parar de adicionar" << endl << endl;
      cin >> input;
      if(!input) break;

      switch(input){
        case 1:
          sistema.setFuncionario(cadastro1());
          break;
        case 2:
          sistema.setFuncionario(cadastro2());
          break;
        case 3:
          sistema.setFuncionario(cadastro3());
          break;
        default:
          cout << "opção inválida" << endl;
      }
  }

  cout << "Total de salarios: " << sistema.CalculaValorTotal() << endl;

  try{
    string nome;
    cout << "digite o nome de um funcionario: " << flush;
    cin >> nome;
    double salario = sistema.ConsultaSalarioFuncionario(nome);
    cout << "O salario do funcionario é: " << salario << endl;
  }
  catch(FuncionarioNaoExisteException& x){
    cout << "erro: " << x.what() << endl;
  }

  try{
    string nome;
    cout << "digite o nome de outro funcionario: " << flush;
    cin >> nome;
    double salario = sistema.ConsultaSalarioFuncionario(nome);
    cout << "O salario do funcionario é: " << salario << endl;
  }
  catch(FuncionarioNaoExisteException& x){
    cout << "erro: " << x.what() << endl;
  }

}

Funcionario* cadastro1(){

  string nome;
  unsigned int matricula;
  double salario;

  cout << "Digite o nome do funcionario: " << flush;
  cin >> nome;
  cout << endl << "Digite a matricula do funcionario: " << flush;
  cin >> matricula;
  cout << endl << "Digite o salario do funcionario: " << flush;
  cin >> salario;

  Funcionario* buffer = new Assalariado;

  buffer->setNome(nome);
  buffer->setMatricula(matricula);
  buffer->setSalario(salario);

  return buffer;

}

Funcionario* cadastro2(){

  string nome;
  unsigned int matricula;
  double salario;
  double horasTrabalhadas;

  cout << "Digite o nome do funcionario: " << flush;
  cin >> nome;
  cout << endl << "Digite a matricula do funcionario: " << flush;
  cin >> matricula;
  cout << endl << "Digite o salario do funcionario: " << flush;
  cin >> salario;
  cout << endl << "digite as horas trabalhadas: " << flush;
  cin >> horasTrabalhadas;

  Funcionario* buffer = new Horista;

  buffer->setNome(nome);
  buffer->setMatricula(matricula);
  buffer->setSalario(salario);
  buffer->setHoras(horasTrabalhadas);

  return buffer;
}

Funcionario* cadastro3(){

  string nome;
  unsigned int matricula;
  double comissao;
  double vendas;

  cout << "Digite o nome do funcionario: " << flush;
  cin >> nome;
  cout << endl << "Digite a matricula do funcionario: " << flush;
  cin >> matricula;
  cout << endl << "Digite a comissão do funcionario: " << flush;
  cin >> comissao;
  cout << endl << "Digite a quantidade de vendas: " << flush;
  cin >> vendas;

  Funcionario* buffer = new Comissionado;

  buffer->setNome(nome);
  buffer->setMatricula(matricula);
  buffer->setComissao(comissao);
  buffer->setVendas(vendas);

  return buffer;
}
