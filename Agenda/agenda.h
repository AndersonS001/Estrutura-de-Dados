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
    bool on_btnInserir_clicked();

    bool on_btnVisualizar_clicked();

    void on_btnBuscar_clicked();

    void on_btnRemover_clicked();

private:
    Ui::Agenda *ui;
    LDDE *lista;
};

#endif // AGENDA_H
