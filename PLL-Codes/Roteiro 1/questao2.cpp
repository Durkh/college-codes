#include <iostream>
#include "Invoice.h"

using namespace std;

int main(){

	Invoice coisa;
	Invoice coisa2(342, "é uma coisa", 5, 5.75);

	coisa.setQnt(7);
	coisa.setDesc("é outra coisa");
	coisa.setPreco(7.99);
	coisa.setNum(777);

	cout << coisa.getNum() << ". " << "coisa 1: " << coisa.getDesc() << "  " << coisa.getQnt() << " x " << coisa.getPreco() << "=" << coisa.getInvoiceAmount() << endl;
	cout << coisa2.getNum() << ". "<< "coisa 1: " << coisa2.getDesc() << "  " << coisa2.getQnt() << " x " << coisa2.getPreco() << "=" << coisa2.getInvoiceAmount() << endl;





	return 0;
}
