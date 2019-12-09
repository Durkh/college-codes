#include "Funcionario.h"
#include "Assalariado.h"
#include "Comissionado.h"
#include "Horista.h"
#include "Myexception.h"
#include <vector>

class Sistema{
  std::vector <Funcionario*> funcionarios;
public:
  Sistema();

  void setFuncionario(Funcionario* buffer);
  double CalculaValorTotal();
  double ConsultaSalarioFuncionario(std::string nome);

  virtual ~Sistema();

};
