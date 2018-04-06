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
    explicit visualizacao(QWidget *parent = 0, LDDE *listaAgenda =nullptr);
    ~visualizacao();

private slots:
    bool on_btnVisualizar_clicked();

private:
    Ui::visualizacao *ui;
    LDDE* visualizarAll;
};

#endif // VISUALIZACAO_H
