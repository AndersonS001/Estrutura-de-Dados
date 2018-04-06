#include "exclusao.h"
#include "ui_exclusao.h"
#include "agenda.h"
#include "ui_agenda.h"
#include "compromisso.h"
#include <QMessageBox>
#include <QString>
#define FLAG_EXCLUSAO 1
//essa flag pode ser qualquer valor != 0 para mostrar as infos do nó antes dele ser deletado
Exclusao::Exclusao(QWidget *parent, LDDE *listaAgenda):QDialog(parent)
                    ,ui(new Ui::Exclusao),listaExclusao(listaAgenda){
    ui->setupUi(this);
    setData();
}

Exclusao::~Exclusao(){
    listaExclusao = nullptr;
    delete listaExclusao;
    delete ui;
}

void Exclusao::setData(){
    QDate auxData(2018,01,01);
    ui->dtQuando->setMinimumDate(auxData);
    ui->dtQuando->setDate(auxData.currentDate());
}

bool Exclusao::excluirCompromisso(){
    Compromisso excluir;
    QTime aux(ui->dtQuando->time().hour(), ui->dtQuando->time().minute(),0);
    excluir.setQuando(ui->dtQuando->date(),aux);
    Iterador funfaPLS;
    QMessageBox::StandardButton resposta;
    setData();
    if(listaExclusao->Buscar(funfaPLS, excluir)){
        resposta = QMessageBox::question(nullptr,"Exclusão do compromisso: "+ funfaPLS.getValor().getTitulo(),
                              "Deseja excluir o compromisso marcado em "+funfaPLS.getValor().getData()+
                              " às "+ funfaPLS.getValor().getHora()+"?",QMessageBox::Yes|QMessageBox::No);
        if(resposta == QMessageBox::Yes)
            return listaExclusao->Remover(funfaPLS, FLAG_EXCLUSAO);
    }
    return false;
}

bool Exclusao::on_btnExcluir_clicked(){
   return excluirCompromisso();
}

