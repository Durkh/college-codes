#include "Pessoa.h"

using std::cout;
using std::endl;
using std::flush;
using std::cin;

int main(){

	Pessoa pessoa("Egidio");

	string rua, numero, bairro, cidade, estado, cep, telefone;

	cout << "olá " << pessoa.getNome() << endl <<
			"por favor, informe os seguintes dados: " << endl;

	cout << "Telefone: " << flush;
	cin >> telefone;
	pessoa.setTelefone(telefone);
	cout << "Rua: " << flush;
	cin >> rua;
	cout << "Numero da casa: " << flush;
	cin >> numero;
	cout << "CEP: " << flush;
	cin >> cep;
	cout << "Bairro: " << flush;
	cin >> bairro;
	cout << "Cidade: " << flush;
	cin >> cidade;
	cout << "Estado: " << flush;
	cin >> estado;

	pessoa.setEndereco(rua, numero, bairro, cidade, estado, cep);

	cout << endl << "Seus dados são: " << pessoa.getNome() << "\t" << "Tel: " << pessoa.getTelefone() <<
			endl << "Endereço: " << pessoa.getEndereco() << endl;


	Endereco *buffer = new Endereco;

	buffer->setRua("Rua dos escoteiros");
	buffer->setNumero("0001");
	buffer->setCep("58060-000");
	buffer->setBairro("Mangabeira");
	buffer->setCidade("Jampa");
	buffer->setEstado("PB");

	Pessoa pessoa2("Rondon", "00001111", *buffer);

	cout << "Seus dados são: " << pessoa2.getNome() << "\t" << "Tel: " << pessoa2.getTelefone() <<
			endl << "Endereço: " << pessoa2.getEndereco() << endl;

	delete buffer;
}
