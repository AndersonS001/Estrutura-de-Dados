#include <cstdlib>
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

QString arquivo::leArquivo(){
    if(criaArquivo())
        QMessageBox::information(nullptr,"Arquivo Criado","E agora?!");

    ifstream file("Agenda.txt");

    string x;
    QString ret = "";

    while (file >> x){
        ret.append(QString::fromStdString(x));
    }
    ret.append("\n");

    return ret;
}

void arquivo::insereArquivo(Compromisso c){
       QString anterior = leArquivo();

       QString novo;
       novo.append(anterior);
       novo.append("Titulo: ");
       novo.append(c.getTitulo());
       novo.append(" Quando: ");
       novo.append(c.getQuando().toString());
       novo.append(" Descrição: ");
       novo.append(c.getDescricao());
       novo.append("\n");

    ofstream file("Agenda.txt");
    file << novo.toStdString();

}
