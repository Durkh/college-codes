#include <iostream>
#include "Data.h"

using namespace std;

int main(){

	int dia,mes,ano;
	Data data;

	cout<< "digite uma data (dd/mm/aaaa): " << flush;
	scanf("%d%*c%d%*c%d", &dia, &mes, &ano);

	data.setDia(dia);
	data.setMes(mes);
	data.setAno(ano);

	cout << "getters: " << data.getDia() << " " << data.getMes() << "( " << data.getMesExtenso() << " )" << " " << data.getAno() << endl;
	if(data.isBissexto()) cout << "bissexto" << endl;
	else cout << "não bissexto" << endl;

	Data data2(9, 12, 2001);
	Data data3(9, 12, 2001);

	cout << "getters2: " << data2.getDia() << " " << data2.getMes() << "( " << data2.getMesExtenso() << " )" << " " << data2.getAno() << endl;

	cout << "comparação entre data 1 e data 2: " << flush;
	if(!data.compara(data2)) cout << "igual" << endl;
	else cout << "diferente" << endl;

	cout << "comparação da data 2 e 3: " << flush;
	if(!data2.compara(data3)) cout << "igual" << endl;
	else cout << "diferente" << endl;


	return 0;
}
