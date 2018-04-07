#include "alteracao.h"
#include "ui_alteracao.h"
#include "agenda.h"
#include "ui_agenda.h"
#include "compromisso.h"
#include "no.h"
#include <QMessageBox>
#include <QString>

Alteracao::Alteracao(QWidget *parent, LDDE* listaAgenda) :
    QDialog(parent),ui(new Ui::Alteracao), listaAlterar(listaAgenda){
    ui->setupUi(this);
    setarVisibilidadeMembros(false);
    set_dtQuando();
}

Alteracao::~Alteracao()
{
    listaAlterar = nullptr;
    delete listaAlterar;
    if(this->itAlterar.noExiste() )
        this->itAlterar.setNulo(true);
    delete ui;
}

void Alteracao::set_dtQuando(){
    QDateTime agora;
    agora = agora.currentDateTime();
    //valores mínimos de inserção
    QDate auxData(2018,4,1);
    ui->dtQuando->setMinimumDate(auxData);
    //sei la;
    ui->dtQuando->setDate(agora.date());
    ui->dtQuando->setTime(agora.time());
}

void Alteracao::Limpar(){
    ui->txtTitulo->setText("");
    ui->txtDescricao->setText("");
    set_dtQuando();
}

void Alteracao::setarVisibilidadeMembros(bool cond){
    ui->btnAlterar->setVisible(cond);
    //edicao texto
    ui->txtTitulo->setVisible(cond);
    ui->txtDescricao->setVisible(cond);
    //labels
    ui->lblDescricao->setVisible(cond);
    ui->lblNomeEvento->setVisible(cond);
}

//Insercao::setAgora() duplicada nessa classe

void Alteracao::tempoInserir(QDateTime diaHora){
    //setando valores mínimos
    ui->dtQuando->setMinimumDate(diaHora.date());
    ui->dtQuando->setMinimumTime(diaHora.time());
    //seto valor a ser mostrado
    ui->dtQuando->setDate(diaHora.date());
    ui->dtQuando->setTime(diaHora.time());
}

bool Alteracao::buscarCompromisso(){
    Compromisso buscar;
    QTime aux(ui->dtQuando->time().hour(), ui->dtQuando->time().minute(), 0);
    buscar.setQuando(ui->dtQuando->date(), aux);
    Limpar();
    return listaAlterar->Buscar(this->itAlterar, buscar);
    //se a busca achar o valor, vai retornar true e o this->itAlterar vai apontar para o No que desejo alterar
}

bool Alteracao::setarCampos(){
    if(!buscarCompromisso())
        return false;
    ui->txtTitulo->setText(this->itAlterar.getValor().getTitulo());
    ui->txtDescricao->setText(this->itAlterar.getValor().getDescricao());
    tempoInserir(itAlterar.getValor().getQuando());
    return true;
}

bool Alteracao::alterarCompromisso(){
    if(!this->itAlterar.noExiste()){
        QMessageBox::information(nullptr,"Erro","Iterador falhou!");
        return false;
    }
    Compromisso alterar;
    QTime auxHorario(ui->dtQuando->time().hour(), ui->dtQuando->time().minute(), 0);
    if(ui->txtTitulo->displayText().isEmpty()){
        QMessageBox::information(nullptr,"Erro","Seu compromisso precisa de um título!");
        return false;
    }
    alterar.setQuando(ui->dtQuando->date(), auxHorario);
    alterar.setTitulo(ui->txtTitulo->displayText());
    alterar.setDescricao(ui->txtDescricao->toPlainText());
    listaAlterar->alterarCompromisso(this->itAlterar, alterar);
    return this->itAlterar.setNulo(true);
}

void Alteracao::on_btnAlterar_clicked()
{
    if(alterarCompromisso()){
        Limpar();
        setarVisibilidadeMembros(false);
    }
}

void Alteracao::on_btnLimpar_clicked()
{
    Limpar();
    if(ui->btnAlterar->isVisible())
       tempoInserir(itAlterar.getValor().getQuando());
}

//true para visível e false para invisível
bool Alteracao::verificaVisibilidade_btnAlterar(){
    if(ui->btnAlterar->isVisible()){
        QMessageBox::StandardButton resposta;
        resposta=QMessageBox::question(nullptr,"Cancelar operação","Cancelar alteração do compromisso?",
                                       QMessageBox::Yes|QMessageBox::No);
        if(resposta == QMessageBox::Yes){
            itAlterar.setNulo(true);
            Limpar();
            setarVisibilidadeMembros(false);
            return true;
        }
    }
    return false;
}


bool Alteracao::on_btnBuscar_clicked()
{
    if(!verificaVisibilidade_btnAlterar() && setarCampos())
        setarVisibilidadeMembros(true);
    return true;
}
