#include "Restaurante.h"
#include <sstream>

Pedido::Pedido(): descricao("none"), quantidade(0), numero(0), preco(0){

}

Pedido::Pedido(std::string descricao, int quantidade, int numero, double preco) {
	this->descricao = descricao;
	this->quantidade = quantidade;
	this->numero = numero;
	this->preco = preco;
}

void Pedido::setDesc(std::string descricao) {
	this->descricao = descricao;
}

void Pedido::setQnt(int quantidade) {
	this->quantidade=quantidade;
}

void Pedido::setNum(int numero) {
	this->numero = numero;
}

void Pedido::setPreco(int preco) {
	this->preco = preco;
}

std::string Pedido::getDesc(){
  return this->descricao;
}

int Pedido::getNum(){
  return this->numero;
}

int Pedido::getQnt(){
  return this->quantidade;
}

double Pedido::getPreco(){
  return this->preco;
}

std::string Pedido::PedidosToString() {
	std::stringstream buffer;

	buffer << "Desc.: " << this->descricao << std::endl << "Num.: " << this->numero << "\t" << "Qnt.:" << this->quantidade << std::endl <<
			"Preço: " << this->preco << std::endl;

	return buffer.str();
}

Pedido::~Pedido(){

}

MesaDeRestaurante::MesaDeRestaurante(): numero(0) {
}

void MesaDeRestaurante::AdicionaAoPedido(std::string desc, int num, int qnt, double preco) {

	for(auto &i: this->pedidos){
		if(i.getNum() == num){
			i.setQnt(i.getQnt() + qnt) ;
			return;
		}
	}
	Pedido buffer(desc, qnt, num, preco);
	this->pedidos.push_back(buffer);
}

void MesaDeRestaurante::ZeraPedidos() {
	this->pedidos.clear();
}

double MesaDeRestaurante::CalculaTotal() {
	double total = 0;
	for(auto i: pedidos){
		total += i.getPreco() * i.getQnt();
	}
	return total;
}

std::string MesaDeRestaurante::toStrPedidosMesa() {
	std::stringstream output;
	for(auto i: pedidos){
		 output << i.PedidosToString() << "Mesa: " << this->numero << std::endl << std::endl;
	}
	return output.str();
}

MesaDeRestaurante::~MesaDeRestaurante() {
}

RestauranteCaseiro::RestauranteCaseiro() {
}

void RestauranteCaseiro::AdicionaAoPedido(std::string desc, int num, int qnt, double preco, int mesa) {
	for(auto &i: mesas){
		if(i.getNumero() == mesa){
			i.AdicionaAoPedido(desc, num, qnt, preco);
			return;
		}
	}

	{
	MesaDeRestaurante buffer;
	buffer.setNumero(mesa);
	buffer.AdicionaAoPedido(desc, num, qnt, preco);
	mesas.push_back(buffer);
	}
}

double RestauranteCaseiro::CalculaTotalRestaurante() {
	double total = 0;
	for(auto i: mesas){
		total += i.CalculaTotal();
	}
	return total;
}

void RestauranteCaseiro::printPedidosMesa(int mesa) {

	if(mesas.empty()){
		std::cout << "sem entradas de mesas" << std::endl;
		return;
	}

	try{
	std::cout << mesas.at(mesa-1).toStrPedidosMesa();
	}
	catch(...){
	std::cout << "mesa inexistente" << std::endl;
	}
}

void RestauranteCaseiro::printTodosPedidos() {

	if(mesas.empty()){
		std::cout << "sem entradas de mesas" << std::endl;
		return;
	}

	for(auto i: mesas){
		std::cout << i.toStrPedidosMesa() << std::endl << std::endl;
	}
}

void RestauranteCaseiro::ZeraPedidos() {
	for(auto &i: mesas){
		i.ZeraPedidos();
	}
}

RestauranteCaseiro::~RestauranteCaseiro() {
}
