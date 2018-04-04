#include "agenda.h"
#include "ui_agenda.h"
#include "compromisso.h"
#include "no.h"

#include "insercao.h"
#include "visualizacao.h"
#include "alteracao.h"
#include "exclusao.h"

#include <QMessageBox>
#include <QString>
#define FLAG_AGENDA 1

Agenda::Agenda(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Agenda)
{
    ui->setupUi(this);
    this->lista = new LDDE();
    this->setAgora();
    this->ano = 2000;
}

Agenda::~Agenda()
{
    delete this->lista;
    delete ui;
}

void Agenda::setAgora(){
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

void Agenda::Limpar(){
    ui->txtTitulo->setText("");
    ui->txtDescricao->setText("");
    setAgora();
}

bool Agenda::on_btnInserir_clicked(){
    Compromisso novo;
    if(ui->txtTitulo->displayText().isEmpty()){
        QMessageBox::information(nullptr,"Erro","Dê um título ao seu compromisso!");
        return false;
    }
    QTime aux(ui->dtQuando->time().hour(), ui->dtQuando->time().minute(), 0);
    novo.setQuando(ui->dtQuando->date(), aux);
    novo.setTitulo(ui->txtTitulo->displayText());
    novo.setDescricao(ui->txtDescricao->toPlainText());
    if(this->lista->Inserir(novo)){
        QMessageBox::information(nullptr,"Novo compromisso","Compromisso inserido com sucesso");
        Limpar();
        return true;
    }
    return false;
}

bool Agenda::on_btnVisualizar_clicked(){
    bool funfou = lista->Imprimir();
    Limpar();
    return funfou;
}

void Agenda::on_btnRemover_clicked(){
    Compromisso novo;
    QTime aux(ui->dtQuando->time().hour(), ui->dtQuando->time().minute(), 0);
    novo.setQuando(ui->dtQuando->date(), aux);
    lista->Remover(novo, FLAG_AGENDA);
    Limpar();
}

void Agenda::on_btnAlterar_clicked(){
    Compromisso remover;
    QTime aux(ui->dtQuando->time().hour(), ui->dtQuando->time().minute(), 0);
    remover.setQuando(ui->dtQuando->date(), aux);
    QDate testeData(ano++,12,22);
    QTime testeHora(16,30,0);
    Compromisso novo(testeData,testeHora,"Vai funfar porque sei o que estou fazendo","FUNFA");
    lista->Alterar(remover,novo);
    Limpar();
}

void Agenda::on_actionInserir_triggered(){
    Insercao telaInsercao;
    telaInsercao.exec();
}

void Agenda::on_actionVisualizar_triggered(){
    visualizacao telaVisualizacao;
    telaVisualizacao.exec();
}

void Agenda::on_actionAltera_o_triggered(){
    Alteracao telaAlteracao;
    telaAlteracao.exec();
}

void Agenda::on_actionExclus_o_triggered(){
    Exclusao telaExclusao;
    telaExclusao.exec();
}

void Agenda::on_actionSair_triggered(){
    QApplication::exit();
}
