#ifndef __Restaurante__
#define __Restaurante__

#include <iostream>
#include <vector>

class Pedido{
  std::string descricao;
  int quantidade;
  int numero;
  double preco;

public:
  Pedido();
  Pedido(std::string descricao, int quantidade, int numero, double preco);;

  std::string getDesc();
  int getQnt();
  int getNum();
  double getPreco();

  void setDesc(std::string descricao);
  void setQnt(int quantidade);
  void setNum(int numero);
  void setPreco(int preco);
  std::string PedidosToString();

  virtual ~Pedido();
};

class MesaDeRestaurante{
private:
	std::vector<Pedido> pedidos;
	int numero;
public:
	MesaDeRestaurante();

	void AdicionaAoPedido(std::string desc, int num, int qnt, double preco);
	void ZeraPedidos();
	double CalculaTotal();
	std::string toStrPedidosMesa();

	virtual ~MesaDeRestaurante();

	int getNumero() {return numero;}

	void setNumero(int numero) {this->numero = numero;}
};

class RestauranteCaseiro{
	std::vector<MesaDeRestaurante> mesas;
public:
	RestauranteCaseiro();

	void AdicionaAoPedido(std::string desc, int num, int qnt, double preco, int mesa);
	double CalculaTotalRestaurante();
	void printPedidosMesa(int mesa);
	void printTodosPedidos();
	void ZeraPedidos();

	virtual ~RestauranteCaseiro();
};


#endif
