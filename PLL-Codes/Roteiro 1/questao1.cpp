#include <iostream>
#include "Data.h"

using namespace std;


int main(){

	int dia,mes,ano, i;
	Data data;

	cout<< "digite uma data (dd/mm/aaaa): " << flush;
	scanf("%d%*c%d%*c%d", &dia, &mes, &ano);

	data.setDia(dia);
	data.setMes(mes);
	data.setAno(ano);

	cout << "Data: " << data.getDia() << "/" << data.getMes() << "/" << data.getAno() << endl;

	cout << "digite quantos dias você quer avançar: " << flush;
	cin >> i;

	for(auto j=0; j<i; j++){
		data.AvancarDia();
	}

	cout << "Data final: " << data.getDia() << "/" << data.getMes() << "/" << data.getAno() << endl;

}
