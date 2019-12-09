#include <exception>

struct ValorAbaixoException: public std::exception{
  const char* what() const throw(){
    return "Valor abaixo do recomendado";
  }
};

struct ValorAcimaException: public std::exception{
  const char* what() const throw(){
    return "Valor acima do recomendado";
  }
};

struct ValorMuitoAcimaException: public std::exception{
  const char* what() const throw(){
    return "Valor muito acima do recomendado";
  }
};
