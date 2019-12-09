#include "Restaurante.h"

using std::cout;
using std::endl;
using std::cin;

int main(){
	RestauranteCaseiro rest;

	cout << "menu: " << endl <<
			"1- feijão" << endl <<
			"2- arroz" << endl <<
			"3- carne" << endl <<
			"qualquer num e descriçao" << endl;

	cout << "digite o pedido: " << endl;
	{
		std::string desc;
		int num, qnt, mesa;
		double preco;
	cout << "Numero: " << std::flush;
	cin >> num;
	cout << "Descrição(1 palavra): " << std::flush;
	cin >>  desc;
	cout << "Quantidade: " << std::flush;
	cin >> qnt;
	cout << "Preco: " << std::flush;
	cin >> preco;
	cout << "Digite a mesa que fez o pedido: " << std::flush;
	cin >> mesa;

	rest.AdicionaAoPedido(desc, num, qnt, preco, mesa);
	}

	cout << endl << endl;

	rest.printPedidosMesa(1);

	cout << "digite o pedido: " << endl;
	{
		std::string desc;
		int num, qnt, mesa;
		double preco;
	cout << "Numero: " << std::flush;
	cin >> num;
	cout << "Descrição(1 palavra): " << std::flush;
	cin >>  desc;
	cout << "Quantidade: " << std::flush;
	cin >> qnt;
	cout << "Preco: " << std::flush;
	cin >> preco;
	cout << "Digite a mesa que fez o pedido: " << std::flush;
	cin >> mesa;

	rest.AdicionaAoPedido(desc, num, qnt, preco, mesa);
	}

	cout << endl << endl;

	rest.printTodosPedidos();

	cout << "total dos pedidos: " << rest.CalculaTotalRestaurante() << endl;

	rest.ZeraPedidos();

	rest.printTodosPedidos();

	cout << "total dos pedidos: " << rest.CalculaTotalRestaurante() << endl;
}
