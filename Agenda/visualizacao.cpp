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
    if(this->inicio())
        this->ver();
}
visualizacao::~visualizacao(){
    it.setNulo(true);
    visualizarAll = nullptr;
    delete visualizarAll;
    delete ui;
}

bool visualizacao::inicio(){
    if(!visualizarAll->Inicio(this->it)){
        QMessageBox::information(nullptr,"Erro","Não há compromissos salvos");
        return false;
    }
    return true;
}

bool visualizacao::ver(){
    if(!it.noExiste())
        return false;
    ui->txtTitulo->setText(this->it.getValor().getTitulo());
    ui->txtDescricao->setText(this->it.getValor().getDescricao());
    ui->dtQuando->setDate(it.getValor().getQuando().date());
    ui->dtQuando->setTime(it.getValor().getQuando().time());
    return true;
}

bool visualizacao::on_btnVoltar_clicked(){
    it--;
    if(this->ver())
        return true;
    //caso meu iterador aponte para nada
   return visualizarAll->Inicio(this->it);
}

bool visualizacao::on_btnAvancar_clicked(){
    it++;
    if(this->ver())
        return true;
    //caso o iterador aponte para nada
    return visualizarAll->Fim(this->it);
}
