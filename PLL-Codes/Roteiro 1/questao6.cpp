#include <iostream>
#include "Pagamento.h"

using namespace std;


int main(){
    
    
 ControlePagamentos pagamento;
 
    for(int i=0; i<5; i++){
        cout << "digite um nome, dê enter e digite um valor;" << endl;
        pagamento.setPagamentos();
    }
    
    cout << "funcionários cadastrados:" << endl;
    
    pagamento.PrintCadastrados();
    cout << endl;
    
    cout << "pagamentos totais: " << pagamento.CalculaTotalPagamentos() << endl;
    
    cout << "digite o nome de um funcionário: " << flush;
    {
        string nome;
        cin >> nome;
        if(pagamento.ExistePagamentoFunc(nome)){
            cout << nome << " está cadastrado" << endl;
        }else{
            cout << nome << " não está cadastrado" << endl;
        }
    }
    
    
    
    
}
