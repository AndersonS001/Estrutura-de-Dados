#include "visualizacao.h"
#include "ui_visualizacao.h"
#include "agenda.h"
#include "ui_agenda.h"
#include "compromisso.h"
#include "no.h"
#include <QMessageBox>
#include <QString>

visualizacao::visualizacao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::visualizacao)
{
    ui->setupUi(this);
}

visualizacao::~visualizacao(){
    delete ui;
}

void visualizacao::on_btnVisualizar_clicked()
{
    //-------------descobriri como usar a função aki-----------------;
}

void visualizacao::on_btnCancelar_clicked()
{
    //-------------descobriri um comando de fechar essa merda de janela-----------------;
}
