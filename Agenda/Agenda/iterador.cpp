#include "ldde.h"

Iterador::Iterador():it(nullptr){}
Iterador::Iterador(No* no): it(no){}

Iterador::~Iterador(){
    it = nullptr;
}

bool Iterador::avancar(){
    if(Iterador::noExiste()){
        it = it->proxEnd;
        return true;
    }
    return false;
}

bool Iterador::voltar(){
    if(Iterador::noExiste()){
        it = it->endAnt;
        return true;
    }
    return false;
}

Compromisso Iterador::getValor() const{
    return it->getValor();
}

bool Iterador::noExiste(){
    if(it)
        return true;
    return false;
}

Iterador& Iterador::operator++(int um){
    if(Iterador::avancar())
        return *this;
}
Iterador& Iterador::operator--(int um){
    if(Iterador::voltar())
        return *this;
}
