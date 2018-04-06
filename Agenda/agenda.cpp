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
}
Agenda::~Agenda()
{
    delete this->lista;
    delete ui;
}

void Agenda::on_btnInserir_clicked(){
    Insercao telaInsercao(0,lista);
    telaInsercao.exec();
}

bool Agenda::on_btnVisualizar_clicked(){
    return lista->Imprimir();
}

void Agenda::on_btnRemover_clicked(){
    Exclusao telaRemover(0, lista);
    telaRemover.exec();
}

void Agenda::on_btnAlterar_clicked(){
    Alteracao telaAlterar(0, lista);
    telaAlterar.exec();
}

void Agenda::on_actionInserir_triggered(){
    Insercao telaInsercao(0, lista);
    telaInsercao.exec();
}

void Agenda::on_actionVisualizar_triggered(){
    visualizacao telaVisualizacao(0, lista);
    telaVisualizacao.exec();
}

void Agenda::on_actionAltera_o_triggered(){
    Alteracao telaAlteracao(0, lista);
    telaAlteracao.exec();
}

void Agenda::on_actionExclus_o_triggered(){
    Exclusao telaExclusao(0,lista);
    telaExclusao.exec();
}

void Agenda::on_actionSair_triggered(){
    QApplication::exit();
}
