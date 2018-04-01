#include "no.h"
#include "compromisso.h"
#include <iostream>
#include <QString>
#include <QMessageBox>
No::No(Compromisso elemento){
    this->valor = Compromisso(elemento.quando.date(), elemento.quando.time(), elemento.descricao, elemento.titulo);
    this->proxEnd =nullptr;
    this->endAnt = nullptr;
}

Compromisso No::getValor(){
    return valor;
}

No::~No(){
}
