#ifndef ALTERACAO_H
#define ALTERACAO_H
#include "compromisso.h"
#include "ldde.h"
#include <QMainWindow>
#include <QDialog>

namespace Ui {
class Alteracao;
}

class Alteracao : public QDialog
{
    Q_OBJECT

public:
    explicit Alteracao(QWidget *parent = 0);
    ~Alteracao();
    void Limpar();

private slots:
    void on_btnAlterar_clicked();
    void on_btnLimpar_clicked();
    void on_btnCancelar_clicked();

private:
    Ui::Alteracao *ui;
};

#endif // ALTERACAO_H
