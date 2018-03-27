#include <cstdlib>
#include<ldde.h>
#include<compromisso.h>
#include <iostream>
#include "arquivo.h"
#include <fstream>
#include <QString>
#include <QMessageBox>

using namespace std;

arquivo::arquivo(){
}

bool arquivo::criaArquivo(){
    ifstream file("Agenda.txt");

    if(!file){
        QMessageBox::information(nullptr,"Arquivo Criado","Criei!");
        ofstream new_file("Agenda.txt");
    }
    return true;
}

QString arquivo::leDadosInseridosArquivo(){
    if(criaArquivo())
        QMessageBox::information(nullptr,"Arquivo Criado","E agora?!");

    ifstream file("Agenda.txt");

    string x;
    QString ret = "";

    while (file >> x){
        ret.append(QString::fromStdString(x));
        ret.append("\n");
    }

    return ret;
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
    file.close();
}

void arquivo::buscaArquivo(){
    if(true){
        ifstream file("Agenda.txt");

        LDDE l;
        Compromisso novo;

        string x;

        while (file >> x){
            QString valida = QString::fromStdString(x);
            valida.replace("(ESPACO)"," ");

            if(valida.startsWith("1")){
                novo.setTitulo(valida.mid(1,valida.size()));
            }
            if(valida.startsWith("2")){

                QDateTime q1 = q1.fromString(valida.mid(1,valida.size()));
                novo.setQuando(q1);
            }
            if(valida.startsWith("3"))
                novo.setDescricao((valida.mid(1,valida.size())));
        }
        l.Inserir(novo);
    }
}
