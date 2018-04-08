#ifndef EXCLUSAO_H
#define EXCLUSAO_H
#include "compromisso.h"
#include "ldde.h"
#include <QMainWindow>
#include <QDialog>

namespace Ui {
class Exclusao;
}

class Exclusao : public QDialog
{
    Q_OBJECT

public:
    explicit Exclusao(QWidget *parent = 0, LDDE* listaAgenda = nullptr);
    ~Exclusao();

private slots:
    bool on_btnExcluir_clicked();

private:
    Ui::Exclusao *ui;
    LDDE *listaExclusao;
    bool excluirCompromisso();
    void setDataHora();
};

#endif // EXCLUSAO_H
