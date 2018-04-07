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
    QStringList colunas;
    colunas<<"Título"<<"Data"<<"Hora";
    ui->tbProximosCompromissos->setColumnCount(3);
    ui->tbProximosCompromissos->setHorizontalHeaderLabels(colunas);
    Agenda::setarTabela();
}
Agenda::~Agenda()
{
    delete this->lista;
    delete ui;
}

bool Agenda::setarTabela(){
    ui->tbProximosCompromissos->clearContents();
    ui->tbProximosCompromissos->setRowCount(0);
    Iterador novo;
    if(!lista->Inicio(novo))
        return false;
    //index das colunas: 0->Título | 1->Data | 2->Quando
    int qtd=0, coluna=0, linha=0;
    // titulo;
    while(novo.noExiste() && qtd <5){
        ui->tbProximosCompromissos->insertRow(ui->tbProximosCompromissos->rowCount());
        linha = ui->tbProximosCompromissos->rowCount()-1;
        coluna=0;
        ui->tbProximosCompromissos->setItem(linha,coluna++,new QTableWidgetItem(novo.getValor().getTitulo() ));
        ui->tbProximosCompromissos->setItem(linha,coluna++,new QTableWidgetItem(novo.getValor().getData() ));
        ui->tbProximosCompromissos->setItem(linha,coluna++,new QTableWidgetItem(novo.getValor().getHora() ));
        novo++; qtd++;
    }
    return true;
}

bool Agenda::estaVazia(){
    Iterador existe;
    if(!lista->Inicio(existe)){
       QMessageBox::information(nullptr,"Erro","A agenda está vazia");
       return false;
    }
    return true;
}

void Agenda::on_btnInserir_clicked(){
    Insercao telaInsercao(0,lista);
    telaInsercao.exec();
    Agenda::setarTabela();
}
void Agenda::on_actionInserir_triggered(){
    Insercao telaInsercao(0, lista);
    telaInsercao.exec();
    Agenda::setarTabela();
}

bool Agenda::on_btnVisualizar_clicked(){
    if(!this->estaVazia())
        return false;
    visualizacao telaVisualizacao(0, lista);
    telaVisualizacao.exec();
    Agenda::setarTabela();
    return true;
}
bool Agenda::on_actionVisualizar_triggered(){
    if(!this->estaVazia())
        return false;
    visualizacao telaVisualizacao(0, lista);
    telaVisualizacao.exec();
    Agenda::setarTabela();
    return true;
}

bool Agenda::on_btnRemover_clicked(){
    if(!this->estaVazia())
        return false;
    Exclusao telaRemover(0, lista);
    telaRemover.exec();
    Agenda::setarTabela();
    return true;
}
bool Agenda::on_actionExclus_o_triggered(){
    if(!this->estaVazia())
        return false;
    Exclusao telaExclusao(0,lista);
    telaExclusao.exec();
    Agenda::setarTabela();
    return true;
}

bool Agenda::on_btnAlterar_clicked(){
    if(!this->estaVazia())
        return false;
    Alteracao telaAlterar(0, lista);
    telaAlterar.exec();
    Agenda::setarTabela();
    return true;
}
bool Agenda::on_actionAltera_o_triggered(){
    if(!this->estaVazia())
        return false;
    Alteracao telaAlteracao(0, lista);
    telaAlteracao.exec();
    Agenda::setarTabela();
    return true;
}

void Agenda::on_actionSair_triggered(){
    QApplication::exit();
}

void Agenda::on_btnSair_clicked()
{
    QApplication::exit();
}
