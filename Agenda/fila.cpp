#include "fila.h"
#include "arquivo.h"
#include <qstring.h>

using namespace std;
Fila::Fila(){
    this->primeiro = (NULL);
    this->ultimo =(NULL);
}

Fila::~Fila(){

}

No* Fila::getPrimeiro(){
    return primeiro;
}

bool Fila::insere(Compromisso c){
    No* novo = new No(c);

    if(!ultimo){
        primeiro = novo;
        ultimo = novo;
        return true;
    }

    this->ultimo->proxEnd = novo;
    this->ultimo = novo;

    return true;
}
bool Fila::insere(No* novo){
    if(!ultimo){
        primeiro = novo;
        ultimo = novo;
        return true;
    }

    this->ultimo->proxEnd = novo;
    this->ultimo = novo;

    return true;
}

Compromisso Fila::getValores(){
    return this->primeiro->getValor();
}

bool Fila::remove(){
    if(!this->primeiro)
        return false;

    No* back;
    back = this->primeiro->proxEnd;
    delete this->primeiro;
    this->primeiro = back;

    return true;
}
