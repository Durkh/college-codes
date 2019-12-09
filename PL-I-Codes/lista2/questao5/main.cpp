#include "TestaValidadeNumero.h"

using namespace std;

int main(){

for(int i= -200; i<=1500; i+=100){
	try{
		TestaValidadeNumero::validaNumero(i);
	}
	catch(ValorAbaixoException& x){
		cout << i << ": erro: " << x.what() << endl;
	}catch(ValorAcimaException& x){
		cout << i << ": erro: " << x.what() << endl;
	}catch(ValorMuitoAcimaException& x){
		cout << i << ": erro: " << x.what() << endl;
	}

}


}
