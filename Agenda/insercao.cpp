#include "insercao.h"
#include "ui_insercao.h"
#include "agenda.h"
#include "ui_agenda.h"
#include "compromisso.h"
#include <QMessageBox>
#include <QString>
#define FLAG_INSERCAO 1
//um sinalizador para imprimir uma mensagem de sucesso na inserção do novo compromisso
Insercao::Insercao(QWidget *parent,LDDE* listaAgenda): QDialog(parent), ui(new Ui::Insercao)
                   ,listaInserir(listaAgenda){
    ui->setupUi(this);
    this->setAgora();
}

Insercao::~Insercao(){
    listaInserir = nullptr;
    delete listaInserir;
    delete ui;
}

void Insercao::setAgora(){
    QDate dataAtual;
    QTime horaAtual;
    dataAtual = dataAtual.currentDate();
    horaAtual = horaAtual.currentTime(); //depois incrementa-se 1h como tempo mínimo para marcar um compromisso
    QTime horaProibida(23, 00, 0); //23:00
    /*  vou comparar se a hora atual é 23h.Deve-se fazer isso porque o dia vai virar
     * após incrementar 1h, aí tem que acrescenter "1" a dataAtual
     */
    if(horaAtual.hour()==horaProibida.hour()){
        dataAtual = dataAtual.addDays(1);
    }
    /*  seto a data e hora mínima para marcar um compromisso.
     *  data minima é o dia atual e o tempo mínimo é o horário atual+1h
     */
    ui->dtQuando->setMinimumDate(dataAtual);
    ui->dtQuando->setMinimumTime(horaAtual.addSecs(3600));
    //seto os valores minimos a serem vistos
    ui->dtQuando->setTime(horaAtual.addSecs(3600));
    ui->dtQuando->setDate(dataAtual);
}

void Insercao::Limpar(){
    ui->txtTitulo->setText("");
    ui->txtDescricao->setText("");
    this->setAgora();
}

bool Insercao::on_btnInserir_clicked()
{
    return inserirNovoCompromisso();
}

bool Insercao::inserirNovoCompromisso(){
    if(ui->txtTitulo->displayText().isEmpty()){
        QMessageBox::information(nullptr,"Erro","Dê um título ao compromisso!");
        return false;
    }
    Compromisso novo;
    //Desprezo os segundos setando o tempo apenas com hora e minuto
    QTime aux(ui->dtQuando->time().hour(), ui->dtQuando->time().minute(), 0);
    novo.setQuando(ui->dtQuando->date(), aux);
    novo.setTitulo(ui->txtTitulo->displayText());
    novo.setDescricao(ui->txtDescricao->toPlainText());
    Limpar();
    return listaInserir->Inserir(novo, FLAG_INSERCAO);
}

void Insercao::on_btnLimpar_clicked()
{
    Limpar();
}

