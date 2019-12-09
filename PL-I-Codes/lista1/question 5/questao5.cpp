#include <iostream>
#include "Horario.h"

using namespace std;


int main(){

	int hora, minuto, segundo;
	Horario relogio;

	cout<< "digite o horário (hh:mm:ss): " << flush;
	scanf("%d%*c%d%*c%d", &hora, &minuto, &segundo);

	relogio.setHorario(hora, minuto, segundo);

	while(1){
		system("clear");
		relogio.AvancarHorario();
		cout << relogio.getHora() << ":" << relogio.getMinuto() << ":" << relogio.getSegundos() << endl;
		system("sleep 1");
	}


}
