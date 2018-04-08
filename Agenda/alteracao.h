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
    explicit Alteracao(QWidget *parent = 0, LDDE* listaAgenda = nullptr);
    ~Alteracao();

    void Limpar();

private slots:
    void on_btnAlterar_clicked();
    void on_btnLimpar_clicked();


    bool on_btnBuscar_clicked();

private:
    Ui::Alteracao *ui;
    LDDE *listaAlterar;
    Iterador itAlterar;

    bool buscarCompromisso();
    bool setarCampos();
    bool resetarCampos();
    bool alterarCompromisso();
    void set_dtQuando();
    void tempoInserir(QDateTime diaHora);
    void setarVisibilidadeMembros(bool cond);
    bool verificaVisibilidade_btnAlterar();
};

#endif // ALTERACAO_H
