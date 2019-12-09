#include "Despesa.h"

void InputObj(ControleDeGastos &gasto1, Despesa &buffer);

int main(){

	ControleDeGastos gasto1;
	ControleDeGastos gasto2;
	Despesa buffer;
	int x;

	cout << "digite a quantidade de despesas que deseja colocar: " << flush;
	cin >> x;

	for(int i=0; i<x; i++){
		InputObj(gasto1, buffer);
	}

	cout << endl << "total de despesas cadastradas: " << gasto1.CalculaTotalDespesa() << endl;

	cout << endl << endl << "digite um tipo para que seja buscado nas despesas: " << flush;
	string str;
	cin >> str;
	if(gasto1.ExisteDespesaTipo(str)){
		cout << "entrada encontrada" << endl;
	}else{
		cout << "entrada não encontrada" << endl;
	}

	cout << endl << endl << "------------------------------------------------------------------" << endl << endl;

	buffer.setValor(10);
	buffer.setTipo("for input");

		for(int i=1; i<20; i+=2){ // coloca +100 em valor bruto dividido em 5 partes em inídces separados para testar a função de retorno
			gasto2.setDespesa(buffer, i);
	}

	cout << "total de despesas cadastradas: " << gasto2.CalculaTotalDespesa() << endl;

	return 0;

}

void InputObj(ControleDeGastos &gasto, Despesa &buffer){ //função apenas para teste, achei que a main estava meio feia e lotada

	string str;
	double var;
	int indice;


	cout << "digite a despesa e o tipo de despesa e o índice que deseja colocar a despesa (<100): " << endl;
	cin >> var;
	cin >> str;
	cin >> indice;

	buffer.setValor(var);
	buffer.setTipo(str);
	gasto.setDespesa(buffer, indice);

}
