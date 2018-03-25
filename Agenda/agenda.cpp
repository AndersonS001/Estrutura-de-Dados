#include "agenda.h"
#include "ui_agenda.h"
#include "compromisso.h"
#include "no.h"
#include "arquivo.h"
#include <QMessageBox>
#include <QString>

Agenda::Agenda(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Agenda)
{
    ui->setupUi(this);
    this->lista = new LDDE();
}

Agenda::~Agenda()
{
    delete ui;
}

bool Agenda::on_btnInserir_clicked()
{
    Compromisso novo;
    if(ui->txtTitulo->displayText().isEmpty()){
          QMessageBox::information(nullptr,"Erro","Dê um título ao seu compromisso!");
          return false;
    }
      novo.setQuando(ui->dtQuando->dateTime());
      novo.setTitulo(ui->txtTitulo->displayText());
      novo.setDescricao(ui->txtDescricao->toPlainText());

      this->lista->Inserir(novo);
      arquivo a;
      a.insereArquivo(novo);

      QMessageBox::information(nullptr,"Novo compromisso","Compromisso inserido com sucesso");
      return true;
}

bool Agenda::on_btnVisualizar_clicked()
{
    bool funfou = lista->Imprimir();
    return funfou;
}

void Agenda::on_btnBuscar_clicked()
{
    Compromisso novo;
    novo.setQuando(ui->dtQuando->dateTime());

    arquivo a;
    a.buscaArquivo();

    No *buscar = lista->Buscar(novo);
    if(buscar)
       lista->Imprimir(novo);
}

void Agenda::on_btnRemover_clicked()
{
    Compromisso novo;
    novo.setQuando(ui->dtQuando->dateTime());
    lista->Remover(novo);
}
