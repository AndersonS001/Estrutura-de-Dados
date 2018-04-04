#include "insercao.h"
#include "ui_insercao.h"
#include "agenda.h"
#include "ui_agenda.h"
#include "compromisso.h"
#include "no.h"
#include <QMessageBox>
#include <QString>

Insercao::Insercao(QWidget *parent): QDialog(parent), ui(new Ui::Insercao)
                                    ,lista()
{
    ui->setupUi(this);
    this->lista = new LDDE();
    this->setAgora();
    this->ano = 2000;
}

void Insercao::setAgora(){
    QDate dataAtual;
    QTime horaAtual;
    dataAtual = dataAtual.currentDate();
    horaAtual = horaAtual.currentTime(); //depois incrementa-se 1h como tempo minimo para marcar um compromisso
    QTime horaProibida(23, 00, 0); //23:00
    /*  vou comparar se a hora atual eh 23h.Deve-se fazer isso porque o dia vai virar
     * apos incrementar 1h, ai tem que acrescenter "1" a dataAtual
     */
    if(horaAtual.hour()==horaProibida.hour()){
        dataAtual = dataAtual.addDays(1);
    }
    /*  seto a data e a hora minima para marcar um compromisso.
     *  data minima e o dia atual e o tempo minimo eh o horario atual+1h
     */
    ui->dtQuando->setMinimumDate(dataAtual);
    ui->dtQuando->setMinimumTime(horaAtual.addSecs(3600));
    //seto os valores minimos a serem vistos
    ui->dtQuando->setTime(horaAtual.addSecs(3600));
    ui->dtQuando->setDate(dataAtual);
}

Insercao::~Insercao()
{
    delete ui;
}

void Insercao::Limpar(){
    ui->txtTitulo->setText("");
    ui->txtDescricao->setText("");
    setAgora();
}

void Insercao::on_btnInserir_clicked()
{
    //-------------descobriri como usar a função aki-----------------;
}

void Insercao::on_btnLimpar_clicked()
{
    Limpar();
}

void Insercao::on_btnCancelar_clicked()
{
    //-------------descobriri um comando de fechar essa merda de janela-----------------;
    //QApplication.exit();
}



