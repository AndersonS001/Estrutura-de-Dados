#ifndef VISUALIZACAO_H
#define VISUALIZACAO_H
#include "compromisso.h"
#include "ldde.h"
#include <QMainWindow>
#include <QDialog>

namespace Ui {
class visualizacao;
}

class visualizacao : public QDialog
{
    Q_OBJECT

public:
    explicit visualizacao(QWidget *parent = 0);
    ~visualizacao();

private slots:
    void on_btnVisualizar_clicked();
    void on_btnCancelar_clicked();

private:
    Ui::visualizacao *ui;
};

#endif // VISUALIZACAO_H
