#include "visualizacao.h"
#include "ui_visualizacao.h"
#include "agenda.h"
#include "ui_agenda.h"
#include "compromisso.h"
#include "no.h"
#include <QMessageBox>
#include <QString>

visualizacao::visualizacao(QWidget *parent,LDDE *listaAgenda) :
    QDialog(parent),ui(new Ui::visualizacao), visualizarAll(listaAgenda){
    ui->setupUi(this);
}

visualizacao::~visualizacao(){
    visualizarAll = nullptr;
    delete visualizarAll;
    delete ui;
}

bool visualizacao::on_btnVisualizar_clicked(){
    return visualizarAll->Imprimir();
}
