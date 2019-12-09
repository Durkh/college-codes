#include <exception>


struct SaldoIndisponivelException : public std::exception {
   const char * what () const throw () {
      return "Saldo não disponível";
   }
};
