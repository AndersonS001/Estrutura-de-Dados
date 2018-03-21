#include "no.h"
#include "compromisso.h"
#include <iostream>
#include <QString>
#include <QMessageBox>
No::No(Compromisso elemento){
    this->valor = new Compromisso(elemento.quando.date(), elemento.quando.time(), elemento.descricao, elemento.titulo);
    this->proxEnd =nullptr;
    this->endAnt = nullptr;
}

No::~No(){
}
