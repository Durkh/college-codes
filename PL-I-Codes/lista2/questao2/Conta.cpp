#include "Conta.h"

Conta::Conta(string nomeCliente, double salarioMensal, long int numeroConta, double saldo){
  this->nomeCliente = nomeCliente;
  this->salarioMensal = salarioMensal;
  this->numeroConta = numeroConta;
  this->saldo = saldo;
  this->limite = 0;
}

string Conta::getNome(){
  return this->nomeCliente;
}

double Conta::getSalario(){
  return this->salarioMensal;
}

long int Conta::getNum(){
  return this->numeroConta;
}

double Conta::getSaldo(){
  return this->saldo;
}

void Conta::definirLimite(){
  this->limite = 2 * salarioMensal;
}

void Conta::setLimite(double limite){
  this->limite=limite;
}

void Conta::sacar(double valor){
  if( (this->saldo - valor) < 0){
      std::cout << "operacao invalida" << std::endl;
      return;
  }

  if(this->saldo > 0){
    this-> saldo -= valor;
  }
}

void Conta::depositar(double valor){
  if( (this->saldo + valor) > limite){
    std::cout << "operacao invalida" << std::endl;
    return;
  }

  if(this->saldo < limite){
    this->saldo +=valor;
  }
}

Conta::~Conta(){

}
