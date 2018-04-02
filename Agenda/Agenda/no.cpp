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

Compromisso No::getValor() const{
    return valor;
}

No::~No(){
//    QMessageBox::information(nullptr,"Deletando",valor.getTitulo()+" em "+valor.getData()+" às " + valor.getHora());
}
