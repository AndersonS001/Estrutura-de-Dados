#include "no.h"
#include "compromisso.h"
#include <QString>

No::No(Compromisso elemento) : valor(elemento), proxEnd(nullptr), endAnt(nullptr){
}

Compromisso No::getValor()const{
    return valor;
}

No::~No(){}
