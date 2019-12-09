#include "Circulo.h"
#include "Triangulo.h"
#include "Quadrado.h"
#include "FiguraGeometrica.h"

#include <iostream>

using namespace std;

int main(){

	FiguraGeometrica * fig[3];

	fig[0] = new Circulo;
	fig[1] = new Quadrado;
	fig[2] = new Triangulo;

	fig[0]->setNome("Circulo");
	fig[1]->setNome("Quadrado");
	fig[2]->setNome("triangulo");

	double raio, base[2], altura[2];

	cout << "Digite um raio: " << flush;
	cin >> raio;
	for(int i=0; i<2; i++){
		cout << endl << "Digite uma base e uma altura: " << endl << "B: " << flush;
		cin >> base[i];
		cout << "A: ";
		cin >> altura[i];
	}

	for(int i=0; i<3; i++){
		cout << endl << "Área do " << fig[i]->getNome() << ": " << flush;
		if(!i){
			cout << fig[i]->CalcularArea(raio) << flush << endl;
			continue;
		}
		cout << fig[i]->CalcularArea(base[i-1], altura[i-1]) << endl;
	}

}
