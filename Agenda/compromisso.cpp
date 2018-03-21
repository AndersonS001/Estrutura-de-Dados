#include "compromisso.h"
#include <QMessageBox>

QString Compromisso::getTitulo() const
{
    return titulo;
}

QString Compromisso::getDescricao() const
{
    return descricao;
}

void Compromisso::setDescricao(const QString &value)
{
    descricao = value;
}

void Compromisso::setTitulo(const QString &value)
{
    titulo = value;
}

QDateTime Compromisso::getQuando() const
{
    return quando;
}

void Compromisso::setQuando(const QDateTime &value)
{
    quando = value;
}

Compromisso::Compromisso(){}
Compromisso::Compromisso(QDate _data, QTime _horario, QString _descricao, QString _titulo){
    this->quando.setDate(_data);
    this->quando.setTime(_horario);
    this->descricao = _descricao;
    this->titulo = _titulo;
}

Compromisso::~Compromisso(){
    //QMessageBox::information(nullptr,"Deletando" + this->titulo,"Seu compromisso no dia " + this->quando.toString() +" foi apagado");
}
