#ifndef AGENDA_H
#define AGENDA_H
#include "compromisso.h"
#include <QMainWindow>
#include "ldde.h"

namespace Ui {
class Agenda;
}

class Agenda : public QMainWindow
{
    Q_OBJECT

public:
    explicit Agenda(QWidget *parent = 0);
    ~Agenda();
private slots:
    void on_actionSair_triggered();
    void on_btnInserir_clicked();
    void on_actionInserir_triggered();

    bool on_btnVisualizar_clicked();
    bool on_btnRemover_clicked();
    bool on_btnAlterar_clicked();
    bool on_actionVisualizar_triggered();
    bool on_actionAltera_o_triggered();
    bool on_actionExclus_o_triggered();

    void on_btnSair_clicked();

private:
    Ui::Agenda *ui;
    LDDE *lista;
    bool setarTabela();
    bool estaVazia();
};

#endif // AGENDA_H
