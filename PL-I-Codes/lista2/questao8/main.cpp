#include "Save.h"

using namespace std;


int main(){

	Save save;
	char *string;

	save.recoverFile();

	string = save.getData();

	for(int i=0; string[i] != '\0'; i++){ //aqui printa, sei que não precisa mas era pra testar e eu resolvi deixar
		cout << string[i] << flush;
	}

	save.SaveFile();

}
