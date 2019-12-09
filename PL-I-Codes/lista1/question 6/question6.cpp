#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Voo.h"

using namespace std;

int main(){

	srand(time(NULL));

	Voo voo;
	Data data;
	Horario horario;

	voo.setData(9,12,2001);
	data = voo.getData();

	voo.setNumVoo( (rand()%10000000) +1 );

	cout << "voo " << voo.getnumVoo() << "\n" << endl;

	cout << "horários do voo: " << data.getDia() << "/" << data.getMes() << "/" << data.getAno() << flush;

	voo.setHora(10,0);
	horario = voo.getHorario();
	cout << "  às " << horario.getHora() << ":" <<  horario.getMinuto() << endl;

	for(int i=1; i<=3; i++){
		voo.Ocupa(i);
	}

	{
		int i = 1;
		while(!voo.Verifica(i)){
			cout << "o assento " << i << " está ocupado" << endl;
			i++;
		}
	}

	cout << "o pŕoximo assento livre é: " << voo.ProximoLivre() << endl;

	voo.Ocupa(5);
	if(voo.Verifica(5)){
		cout << "assento está livre" << endl;
	}

}
