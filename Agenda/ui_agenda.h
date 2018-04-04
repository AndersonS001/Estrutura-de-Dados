/********************************************************************************
** Form generated from reading UI file 'agenda.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGENDA_H
#define UI_AGENDA_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Agenda
{
public:
    QAction *actionInserir;
    QAction *actionVisualizar;
    QAction *actionAltera_o;
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *txtTitulo;
    QLabel *label_2;
    QDateTimeEdit *dtQuando;
    QLabel *label_3;
    QTextEdit *txtDescricao;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnInserir;
    QPushButton *btnVisualizar;
    QPushButton *btnAlterar;
    QPushButton *btnRemover;
    QMenuBar *menuBar;
    QMenu *menuFun_es;

    void setupUi(QMainWindow *Agenda)
    {
        if (Agenda->objectName().isEmpty())
            Agenda->setObjectName(QStringLiteral("Agenda"));
        Agenda->resize(430, 260);
        actionInserir = new QAction(Agenda);
        actionInserir->setObjectName(QStringLiteral("actionInserir"));
        actionVisualizar = new QAction(Agenda);
        actionVisualizar->setObjectName(QStringLiteral("actionVisualizar"));
        actionAltera_o = new QAction(Agenda);
        actionAltera_o->setObjectName(QStringLiteral("actionAltera_o"));
        centralWidget = new QWidget(Agenda);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 391, 201));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        txtTitulo = new QLineEdit(layoutWidget);
        txtTitulo->setObjectName(QStringLiteral("txtTitulo"));

        formLayout->setWidget(0, QFormLayout::FieldRole, txtTitulo);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        dtQuando = new QDateTimeEdit(layoutWidget);
        dtQuando->setObjectName(QStringLiteral("dtQuando"));
        dtQuando->setFont(font);
        dtQuando->setMinimumDateTime(QDateTime(QDate(2018, 3, 30), QTime(0, 0, 0)));
        dtQuando->setMaximumDate(QDate(2100, 12, 31));
        dtQuando->setMinimumDate(QDate(2018, 3, 30));
        dtQuando->setCalendarPopup(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, dtQuando);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        txtDescricao = new QTextEdit(layoutWidget);
        txtDescricao->setObjectName(QStringLiteral("txtDescricao"));

        formLayout->setWidget(2, QFormLayout::FieldRole, txtDescricao);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnInserir = new QPushButton(layoutWidget);
        btnInserir->setObjectName(QStringLiteral("btnInserir"));
        btnInserir->setFont(font);

        horizontalLayout->addWidget(btnInserir);

        btnVisualizar = new QPushButton(layoutWidget);
        btnVisualizar->setObjectName(QStringLiteral("btnVisualizar"));
        btnVisualizar->setFont(font);

        horizontalLayout->addWidget(btnVisualizar);

        btnAlterar = new QPushButton(layoutWidget);
        btnAlterar->setObjectName(QStringLiteral("btnAlterar"));
        btnAlterar->setFont(font);

        horizontalLayout->addWidget(btnAlterar);

        btnRemover = new QPushButton(layoutWidget);
        btnRemover->setObjectName(QStringLiteral("btnRemover"));
        btnRemover->setFont(font);

        horizontalLayout->addWidget(btnRemover);


        verticalLayout->addLayout(horizontalLayout);

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

        retranslateUi(Agenda);

        QMetaObject::connectSlotsByName(Agenda);
    } // setupUi

    void retranslateUi(QMainWindow *Agenda)
    {
        Agenda->setWindowTitle(QApplication::translate("Agenda", "Agenda", 0));
        actionInserir->setText(QApplication::translate("Agenda", "Inserir", 0));
        actionVisualizar->setText(QApplication::translate("Agenda", "Visualizar", 0));
        actionAltera_o->setText(QApplication::translate("Agenda", "Altera\303\247\303\243o", 0));
        label->setText(QApplication::translate("Agenda", "Nome do evento:", 0));
        label_2->setText(QApplication::translate("Agenda", "Data e Hor\303\241rio:", 0));
        label_3->setText(QApplication::translate("Agenda", "Descri\303\247\303\243o:", 0));
        btnInserir->setText(QApplication::translate("Agenda", "Inserir", 0));
        btnVisualizar->setText(QApplication::translate("Agenda", "Visualizar", 0));
        btnAlterar->setText(QApplication::translate("Agenda", "Alterar", 0));
        btnRemover->setText(QApplication::translate("Agenda", "Remover", 0));
        menuFun_es->setTitle(QApplication::translate("Agenda", "Fun\303\247\303\265es", 0));
    } // retranslateUi

};

namespace Ui {
    class Agenda: public Ui_Agenda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGENDA_H
