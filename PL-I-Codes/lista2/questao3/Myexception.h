#ifndef __EXCP__
#define __EXCP__

#include <exception>


struct FuncionarioNaoExisteException: public std::exception{
  const char* what() const throw(){
    return "Funconario não existe";
  }
};


#endif
