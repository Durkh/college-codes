#include "Sistema.h"


Sistema::Sistema(){
}


void Sistema::setFuncionario(Funcionario* buffer){

  this->funcionarios.push_back(buffer);
  }

double Sistema::CalculaValorTotal(){
  double buffer=0;

  for(auto i: funcionarios){
    buffer += i->CalculaSalario();
  }

  return buffer;
}

double Sistema::ConsultaSalarioFuncionario(std::string nome){

  for(auto i: funcionarios){
    if(nome == i->getNome()){
      return i->CalculaSalario();
    }
  }
  throw FuncionarioNaoExisteException();
  return 0;
}


Sistema::~Sistema(){
  for(auto i: this->funcionarios){
    delete i;
  }

}
