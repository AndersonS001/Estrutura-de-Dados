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
    explicit Exclusao(QWidget *parent = 0);
    ~Exclusao();

private slots:
    void on_btnExcluir_clicked();
    void on_btnCancelar_clicked();

private:
    Ui::Exclusao *ui;
};

#endif // EXCLUSAO_H
