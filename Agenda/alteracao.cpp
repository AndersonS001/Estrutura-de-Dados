#include "alteracao.h"
#include "ui_alteracao.h"
#include "agenda.h"
#include "ui_agenda.h"
#include "compromisso.h"
#include "no.h"
#include <QMessageBox>
#include <QString>

Alteracao::Alteracao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Alteracao)
{
    ui->setupUi(this);
}

Alteracao::~Alteracao()
{
    delete ui;
}

void Alteracao::Limpar(){
    ui->txtTitulo->setText("");
    ui->txtDescricao->setText("");
}

void Alteracao::on_btnAlterar_clicked()
{
    //-------------descobriri como usar a função aki-----------------;
}

void Alteracao::on_btnLimpar_clicked()
{
    Limpar();
}

void Alteracao::on_btnCancelar_clicked()
{
    //-------------descobriri um comando de fechar essa merda de janela-----------------;
}
