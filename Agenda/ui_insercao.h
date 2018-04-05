/********************************************************************************
** Form generated from reading UI file 'insercao.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERCAO_H
#define UI_INSERCAO_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Insercao
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *lblNomeEvento;
    QLineEdit *txtTitulo;
    QLabel *lblDataHorario;
    QDateTimeEdit *dtQuando;
    QLabel *lblDescricao;
    QTextEdit *txtDescricao;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnCancelar;
    QPushButton *btnLimpar;
    QPushButton *btnInserir;

    void setupUi(QDialog *Insercao)
    {
        if (Insercao->objectName().isEmpty())
            Insercao->setObjectName(QStringLiteral("Insercao"));
        Insercao->resize(430, 260);
        layoutWidget = new QWidget(Insercao);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 391, 221));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        lblNomeEvento = new QLabel(layoutWidget);
        lblNomeEvento->setObjectName(QStringLiteral("lblNomeEvento"));
        QFont font;
        font.setPointSize(10);
        lblNomeEvento->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, lblNomeEvento);

        txtTitulo = new QLineEdit(layoutWidget);
        txtTitulo->setObjectName(QStringLiteral("txtTitulo"));

        formLayout->setWidget(0, QFormLayout::FieldRole, txtTitulo);

        lblDataHorario = new QLabel(layoutWidget);
        lblDataHorario->setObjectName(QStringLiteral("lblDataHorario"));
        lblDataHorario->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, lblDataHorario);

        dtQuando = new QDateTimeEdit(layoutWidget);
        dtQuando->setObjectName(QStringLiteral("dtQuando"));
        dtQuando->setFont(font);
        dtQuando->setMinimumDateTime(QDateTime(QDate(2018, 3, 30), QTime(0, 0, 0)));
        dtQuando->setMaximumDate(QDate(2100, 12, 31));
        dtQuando->setMinimumDate(QDate(2018, 3, 30));
        dtQuando->setCalendarPopup(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, dtQuando);

        lblDescricao = new QLabel(layoutWidget);
        lblDescricao->setObjectName(QStringLiteral("lblDescricao"));
        lblDescricao->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, lblDescricao);

        txtDescricao = new QTextEdit(layoutWidget);
        txtDescricao->setObjectName(QStringLiteral("txtDescricao"));

        formLayout->setWidget(2, QFormLayout::FieldRole, txtDescricao);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnCancelar = new QPushButton(layoutWidget);
        btnCancelar->setObjectName(QStringLiteral("btnCancelar"));

        horizontalLayout->addWidget(btnCancelar);

        btnLimpar = new QPushButton(layoutWidget);
        btnLimpar->setObjectName(QStringLiteral("btnLimpar"));

        horizontalLayout->addWidget(btnLimpar);

        btnInserir = new QPushButton(layoutWidget);
        btnInserir->setObjectName(QStringLiteral("btnInserir"));

        horizontalLayout->addWidget(btnInserir);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Insercao);

        QMetaObject::connectSlotsByName(Insercao);
    } // setupUi

    void retranslateUi(QDialog *Insercao)
    {
        Insercao->setWindowTitle(QApplication::translate("Insercao", "Inser\303\247\303\243o de evento", 0));
        lblNomeEvento->setText(QApplication::translate("Insercao", "Nome do evento:", 0));
        lblDataHorario->setText(QApplication::translate("Insercao", "Data e Hor\303\241rio:", 0));
        lblDescricao->setText(QApplication::translate("Insercao", "Descri\303\247\303\243o:", 0));
        btnCancelar->setText(QApplication::translate("Insercao", "Cancelar", 0));
        btnLimpar->setText(QApplication::translate("Insercao", "Limpar", 0));
        btnInserir->setText(QApplication::translate("Insercao", "Inserir", 0));
    } // retranslateUi

};

namespace Ui {
    class Insercao: public Ui_Insercao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERCAO_H
