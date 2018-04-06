#include "ldde.h"

Iterador::Iterador():it(nullptr){}
Iterador::Iterador(No* no): it(no){}

Iterador::~Iterador(){
    it = nullptr;
}

No* Iterador::getEnderecoAnterior(){
    return it->endAnt;
}
No* Iterador::getProximoEndereco(){
    return it->proxEnd;
}
No* Iterador::getEnderecoAtual(){
    return it;
}
void Iterador::setProximoEndereco(No* proximoEnd){
    it->proxEnd = proximoEnd;
}
void Iterador::setEnderecoAnterior(No* enderecoAnterior){
    it->endAnt = enderecoAnterior;
}
void Iterador::setIt(No *no){
    it =no;
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

bool Iterador::setNulo(bool sucesso){
    if(!sucesso)
        return false;
    it=nullptr;
    return true;
}

Compromisso Iterador::getValor() const{
    return it->getValor();
}
bool Iterador::noExiste(){
    if(it)
        return true;
    return false;
}
bool Iterador::operator!(){
    return noExiste();
}
Iterador& Iterador::operator++(int um){
    if(Iterador::avancar())
        return *this;
}
Iterador& Iterador::operator--(int um){
    if(Iterador::voltar())
        return *this;
}
