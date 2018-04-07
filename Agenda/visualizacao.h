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

    bool on_btnVoltar_clicked();

    bool on_btnAvancar_clicked();

private:
    Ui::visualizacao *ui;
    LDDE* visualizarAll;
    Iterador it;

    //it vai apontar para o primeiro
    bool inicio();
    //mostrar o compromisso do meu iterador
    bool ver();
};

#endif // VISUALIZACAO_H
