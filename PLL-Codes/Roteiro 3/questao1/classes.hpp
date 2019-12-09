#ifndef __class__
#define __class__

#include <iostream>

class Base{
public:
    Base() {};
    virtual void FazCoisa()=0;
};

class Derivada1: public Base{
public:
    Derivada1() {};
    void FazCoisa(){
        std::cout << "faz coisa" << std::endl;
    }
};

class Derivada2: public Base{
public:
    Derivada2() {};
    void FazCoisa(){
        std::cout << "faz outra coisa" << std::endl;
        
    }
};


#endif
