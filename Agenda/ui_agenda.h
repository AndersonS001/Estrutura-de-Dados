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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Agenda
{
public:
    QWidget *centralWidget;
    QPushButton *btnInserir;
    QDateTimeEdit *dtQuando;
    QLineEdit *txtTitulo;
    QTextEdit *txtDescricao;
    QPushButton *btnVisualizar;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *btnBuscar;
    QPushButton *btnRemover;

    void setupUi(QMainWindow *Agenda)
    {
        if (Agenda->objectName().isEmpty())
            Agenda->setObjectName(QStringLiteral("Agenda"));
        Agenda->resize(428, 332);
        centralWidget = new QWidget(Agenda);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btnInserir = new QPushButton(centralWidget);
        btnInserir->setObjectName(QStringLiteral("btnInserir"));
        btnInserir->setGeometry(QRect(20, 244, 80, 21));
        QFont font;
        font.setPointSize(10);
        btnInserir->setFont(font);
        dtQuando = new QDateTimeEdit(centralWidget);
        dtQuando->setObjectName(QStringLiteral("dtQuando"));
        dtQuando->setGeometry(QRect(120, 60, 241, 25));
        dtQuando->setFont(font);
        dtQuando->setDateTime(QDateTime(QDate(2018, 3, 21), QTime(23, 59, 59)));
        dtQuando->setMaximumDate(QDate(2100, 12, 31));
        dtQuando->setMinimumDate(QDate(2018, 3, 21));
        dtQuando->setCalendarPopup(true);
        txtTitulo = new QLineEdit(centralWidget);
        txtTitulo->setObjectName(QStringLiteral("txtTitulo"));
        txtTitulo->setGeometry(QRect(120, 20, 241, 24));
        txtDescricao = new QTextEdit(centralWidget);
        txtDescricao->setObjectName(QStringLiteral("txtDescricao"));
        txtDescricao->setGeometry(QRect(118, 110, 241, 81));
        btnVisualizar = new QPushButton(centralWidget);
        btnVisualizar->setObjectName(QStringLiteral("btnVisualizar"));
        btnVisualizar->setGeometry(QRect(120, 244, 91, 21));
        btnVisualizar->setFont(font);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 42, 21));
        label->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 63, 21));
        label_2->setFont(font);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 140, 79, 21));
        label_3->setFont(font);
        btnBuscar = new QPushButton(centralWidget);
        btnBuscar->setObjectName(QStringLiteral("btnBuscar"));
        btnBuscar->setGeometry(QRect(20, 289, 81, 21));
        btnBuscar->setFont(font);
        btnRemover = new QPushButton(centralWidget);
        btnRemover->setObjectName(QStringLiteral("btnRemover"));
        btnRemover->setGeometry(QRect(120, 289, 91, 21));
        btnRemover->setFont(font);
        Agenda->setCentralWidget(centralWidget);

        retranslateUi(Agenda);

        QMetaObject::connectSlotsByName(Agenda);
    } // setupUi

    void retranslateUi(QMainWindow *Agenda)
    {
        Agenda->setWindowTitle(QApplication::translate("Agenda", "Agenda", 0));
        btnInserir->setText(QApplication::translate("Agenda", "Inserir", 0));
        btnVisualizar->setText(QApplication::translate("Agenda", "Visualizar", 0));
        label->setText(QApplication::translate("Agenda", "T\303\255tulo", 0));
        label_2->setText(QApplication::translate("Agenda", "Quando:", 0));
        label_3->setText(QApplication::translate("Agenda", "Descri\303\247\303\243o:", 0));
        btnBuscar->setText(QApplication::translate("Agenda", "Buscar", 0));
        btnRemover->setText(QApplication::translate("Agenda", "Remover", 0));
    } // retranslateUi

};

namespace Ui {
    class Agenda: public Ui_Agenda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGENDA_H
