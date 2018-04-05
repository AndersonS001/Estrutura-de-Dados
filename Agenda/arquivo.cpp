#include "arquivo.h"

#include "ldde.h"
#include <iostream>
#include "compromisso.h"
#include "fila.h"
#include <fstream>
#include <QMessageBox>
#include <QString>
#include<vector>
using namespace std;

Arquivo::Arquivo(){
    criaArquivo();
}

bool Arquivo::criaArquivo()
{
    ifstream file("Agenda.txt");

    if(!file){
        ofstream new_file("Agenda.txt");
    }

    return true;
}

QString Arquivo::leDadosInseridosArquivo(){
    ifstream file("Agenda.txt");

    string x;
    QString ret = "";

    while (file >> x){
        ret.append(QString::fromStdString(x));
        ret.append("\n");
    }

    return ret;
}

void Arquivo::insereArquivo(Iterador& c, int i){
    QString anterior = leDadosInseridosArquivo();

    QString novo;

    if(i!=0)
        novo.append(anterior);

    novo.append("Titulo:\n");
    novo.append("1"+c.getValor().getTitulo()+"\n");
    novo.append("Quando: \n");
    novo.append("2"+c.getValor().getQuando().toString("dd/MM/yyyy hh:mm") +"\n");
    novo.append("Descrição: \n");
    novo.append("3"+c.getValor().getDescricao() +"\n");
    novo.replace(" ","(ESPACO)");
    i++;

    ofstream file("Agenda.txt");
    file << novo.toStdString();
}

void Arquivo::insereArquivo(Compromisso c, int i){
    QString anterior = leDadosInseridosArquivo();

    QString novo;

    if(i!=0)
        novo.append(anterior);

    novo.append("Titulo:\n");
    novo.append("1"+c.getTitulo()+"\n");
    novo.append("Quando: \n");
    novo.append("2"+c.getQuando().toString("dd/MM/yyyy hh:mm") +"\n");
    novo.append("Descrição: \n");
    novo.append("3"+c.getDescricao() +"\n");
    novo.replace(" ","(ESPACO)");
    i++;

    ofstream file("Agenda.txt");
    file << novo.toStdString();
}

//No* Arquivo::obtemAtual(){
//if(!this->atual)
//  this->atual = buscaArquivo();

//,return this->atual;
//}

void Arquivo::arquivoLimpo(){
    remove( "Agenda.txt" );
}

Fila Arquivo::buscaArquivo(){
    ifstream file("Agenda.txt");
    Compromisso novo;
    string x;
    Fila fil;

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
        if(valida.startsWith("3")){
            novo.setDescricao((valida.mid(1,valida.size())));
            fil.insere(novo);
        }
    }
    return fil;
}


