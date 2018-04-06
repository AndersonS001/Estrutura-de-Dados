#include "no.h"
#include "compromisso.h"
#include <QString>
No::No(Compromisso elemento){
    this->valor = elemento;
    this->proxEnd =nullptr;
    this->endAnt = nullptr;
}

Compromisso No::getValor()const{
    return valor;
}

No::~No(){}
