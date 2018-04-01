#include <cstdlib>
#include<ldde.h>
#include<compromisso.h>
#include <iostream>
#include "arquivo1.h"
#include <fstream>
#include <QString>
#include <QMessageBox>

using namespace std;

LDDE* lista;
arquivo::arquivo(){

}

arquivo::arquivo(No* _prim){
    this->lista->Inserir(_prim);
}

bool arquivo::criaArquivo(){
    ifstream file("Agenda.txt");

    if(!file){
        ofstream new_file("Agenda.txt");
    }

    return true;
}

QString arquivo::leDadosInseridosArquivo(){
    ifstream file("Agenda.txt");

    string x;
    QString ret = "";

    while (file >> x){
        ret.append(QString::fromStdString(x));
        ret.append("\n");
    }

    return ret;
}

void arquivo::insereArquivo(No* c){
    QString anterior = leDadosInseridosArquivo();

    QString novo;
    //novo.append(anterior);
    novo.append("Titulo:\n");
    novo.append("1"+c->getValor()->getTitulo()+"\n");
    novo.append("Quando: \n");
    novo.append("2"+c->getValor()->getQuando().toString("dd/MM/yyyy hh:mm") +"\n");
    novo.append("Descrição: \n");
    novo.append("3"+c->getValor()->getDescricao() +"\n");
    novo.replace(" ","(ESPACO)");

    ofstream file("Agenda.txt");
    file << novo.toStdString();
}

void arquivo::insereArquivo(Compromisso c){
    QString anterior = leDadosInseridosArquivo();

    QString novo;
    novo.append(anterior);
    novo.append("Titulo:\n");
    novo.append("1"+c.getTitulo()+"\n");
    novo.append("Quando: \n");
    novo.append("2"+c.getQuando().toString("dd/MM/yyyy hh:mm") +"\n");
    novo.append("Descrição: \n");
    novo.append("3"+c.getDescricao() +"\n");
    novo.replace(" ","(ESPACO)");

    ofstream file("Agenda.txt");
    file << novo.toStdString();
}

No* arquivo::buscaArquivo(){
    LDDE l;

    ifstream file("Agenda.txt");

    Compromisso novo;

    string x;

    while (file >> x){
        QString valida = QString::fromStdString(x);
        valida.replace("(ESPACO)"," ");

        if(valida.startsWith("1")){
            novo.setTitulo(valida.mid(1,valida.size()));
        }
        if(valida.startsWith("2")){
            QString xx = valida.mid(1,valida.size());

            QDateTime q1 = q1.fromString(xx,"dd/MM/yyyy hh:mm");
            novo.setQuando(q1);
        }
        if(valida.startsWith("3"))
            novo.setDescricao((valida.mid(1,valida.size())));
    }

    l.Inserir(novo,"2");
    return l.primeiro;
}
