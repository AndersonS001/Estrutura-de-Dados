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
    void Limpar();
    int ano;
private slots:
    bool on_btnInserir_clicked();
    bool on_btnVisualizar_clicked();
    void on_btnRemover_clicked();
    void on_btnAlterar_clicked();

    void on_actionInserir_triggered();
    void on_actionVisualizar_triggered();
    void on_actionAltera_o_triggered();

    void on_actionExclus_o_triggered();

    void on_actionSair_triggered();

private:
    Ui::Agenda *ui;
    LDDE *lista;
    //  Definir a data e hora atual (+1h) do meu objeto dtQuando (GUI)
    void setAgora();
};

#endif // AGENDA_H
