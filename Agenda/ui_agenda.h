/********************************************************************************
** Form generated from reading UI file 'agenda.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGENDA_H
#define UI_AGENDA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Agenda
{
public:
    QAction *actionInserir;
    QAction *actionVisualizar;
    QAction *actionAltera_o;
    QAction *actionExclus_o;
    QAction *actionSair;
    QWidget *centralWidget;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menuFun_es;

    void setupUi(QMainWindow *Agenda)
    {
        if (Agenda->objectName().isEmpty())
            Agenda->setObjectName(QStringLiteral("Agenda"));
        Agenda->resize(430, 260);
        actionInserir = new QAction(Agenda);
        actionInserir->setObjectName(QStringLiteral("actionInserir"));
        QIcon icon;
        icon.addFile(QStringLiteral("Imagens/sinal-de-mais_318-54005.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInserir->setIcon(icon);
        actionVisualizar = new QAction(Agenda);
        actionVisualizar->setObjectName(QStringLiteral("actionVisualizar"));
        actionVisualizar->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QStringLiteral("Imagens/ferramenta-de-lupa_318-50335.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionVisualizar->setIcon(icon1);
        actionAltera_o = new QAction(Agenda);
        actionAltera_o->setObjectName(QStringLiteral("actionAltera_o"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("Imagens/edicao-geral_318-27993.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAltera_o->setIcon(icon2);
        actionExclus_o = new QAction(Agenda);
        actionExclus_o->setObjectName(QStringLiteral("actionExclus_o"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("Imagens/lixeira_318-35857.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExclus_o->setIcon(icon3);
        actionSair = new QAction(Agenda);
        actionSair->setObjectName(QStringLiteral("actionSair"));
        QIcon icon4;
        icon4.addFile(QStringLiteral("Imagens/porta-de-saida_318-48444.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSair->setIcon(icon4);
        centralWidget = new QWidget(Agenda);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 100, 232, 25));
        QFont font;
        font.setFamily(QStringLiteral("Cambria"));
        font.setPointSize(16);
        label->setFont(font);
        Agenda->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Agenda);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 430, 20));
        menuFun_es = new QMenu(menuBar);
        menuFun_es->setObjectName(QStringLiteral("menuFun_es"));
        Agenda->setMenuBar(menuBar);

        menuBar->addAction(menuFun_es->menuAction());
        menuFun_es->addAction(actionInserir);
        menuFun_es->addAction(actionVisualizar);
        menuFun_es->addAction(actionAltera_o);
        menuFun_es->addAction(actionExclus_o);
        menuFun_es->addAction(actionSair);

        retranslateUi(Agenda);

        QMetaObject::connectSlotsByName(Agenda);
    } // setupUi

    void retranslateUi(QMainWindow *Agenda)
    {
        Agenda->setWindowTitle(QApplication::translate("Agenda", "Agenda", 0));
        actionInserir->setText(QApplication::translate("Agenda", "Inserir", 0));
        actionVisualizar->setText(QApplication::translate("Agenda", "Visualizar", 0));
        actionAltera_o->setText(QApplication::translate("Agenda", "Altera\303\247\303\243o", 0));
        actionExclus_o->setText(QApplication::translate("Agenda", "Exclus\303\243o", 0));
        actionSair->setText(QApplication::translate("Agenda", "Sair", 0));
        label->setText(QApplication::translate("Agenda", "Agenda de Compromissos", 0));
        menuFun_es->setTitle(QApplication::translate("Agenda", "Fun\303\247\303\265es", 0));
    } // retranslateUi

};

namespace Ui {
    class Agenda: public Ui_Agenda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGENDA_H
