#include "fila.h"
#include "arquivo.h"
#include <qstring.h>

using namespace std;
Fila::Fila(){
    this->primeiro = (NULL);
    this->ultimo =(NULL);
    n=0;
}

Fila::~Fila(){

}

int Fila::size(){
    return n;
}

bool Fila::insere(Compromisso c){

    No* novo = new No(c);
    insere(novo);
    return true;
}

bool Fila::insere(No* novo){
    if(!ultimo){
        primeiro = novo;
        ultimo = novo;
        n++;

        return true;
    }

    this->ultimo->proxEnd = novo;
    this->ultimo = novo;
    n++;

    return true;
}

Compromisso Fila::getValores(){
    return this->primeiro->getValor();
}

bool Fila::filaVazia(){
    return !primeiro;
}

Compromisso Fila::remove(){
    Compromisso c;

    if(!this->primeiro){
        n=0;
        return c;
     }

    c.setTitulo(this->getValores().getTitulo());
    c.setDescricao(this->getValores().getDescricao());
    c.setQuando(this->getValores().getQuando());

    No* back;
    back = this->primeiro->proxEnd;
    delete this->primeiro;
    this->primeiro = back;
    n--;

    return c;
}
