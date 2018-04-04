#ifndef INSERCAO_H
#define INSERCAO_H
#include "compromisso.h"
#include "ldde.h"
#include <QMainWindow>
#include <QDialog>

namespace Ui {
class Insercao;
}

class Insercao : public QDialog
{
    Q_OBJECT

public:
    explicit Insercao(QWidget *parent = 0);
    ~Insercao();
    void Limpar();
    int ano;

private slots:
    void on_btnInserir_clicked();
    void on_btnLimpar_clicked();
    void on_btnCancelar_clicked();

private:
    Ui::Insercao *ui;
    LDDE *lista;
    void setAgora();//  Definir a data e hora atual (+1h) do meu objeto dtQuando (GUI)
};

#endif // INSERCAO_H
