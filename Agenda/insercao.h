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
    explicit Insercao(QWidget *parent = 0, LDDE *listaAgenda = nullptr);
    ~Insercao();
    void Limpar();

private slots:
    bool on_btnInserir_clicked();
    void on_btnLimpar_clicked();

private:
    Ui::Insercao *ui;
    LDDE *listaInserir;

    bool inserirNovoCompromisso();
    void setAgora();
};
#endif // INSERCAO_H
