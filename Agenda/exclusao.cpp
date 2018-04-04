#include "exclusao.h"
#include "ui_exclusao.h"
#include "agenda.h"
#include "ui_agenda.h"
#include "compromisso.h"
#include "no.h"
#include <QMessageBox>
#include <QString>

Exclusao::Exclusao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Exclusao)
{
    ui->setupUi(this);
}

Exclusao::~Exclusao()
{
    delete ui;
}

void Exclusao::on_btnExcluir_clicked()
{
    //-------------descobriri como usar a função aki-----------------;
}

void Exclusao::on_btnCancelar_clicked()
{
    //-------------descobriri um comando de fechar essa merda de janela-----------------;
}

