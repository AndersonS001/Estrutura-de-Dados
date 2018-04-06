/********************************************************************************
** Form generated from reading UI file 'alteracao.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALTERACAO_H
#define UI_ALTERACAO_H

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

class Ui_Alteracao
{
public:
    QLabel *lblIntrucao;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *lblDataHorario;
    QDateTimeEdit *dtQuando;
    QLabel *lblNomeEvento;
    QLineEdit *txtTitulo;
    QLabel *lblDescricao;
    QTextEdit *txtDescricao;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAlterar;
    QPushButton *btnBuscar;
    QPushButton *btnLimpar;

    void setupUi(QDialog *Alteracao)
    {
        if (Alteracao->objectName().isEmpty())
            Alteracao->setObjectName(QStringLiteral("Alteracao"));
        Alteracao->resize(465, 275);
        lblIntrucao = new QLabel(Alteracao);
        lblIntrucao->setObjectName(QStringLiteral("lblIntrucao"));
        lblIntrucao->setGeometry(QRect(10, 10, 451, 41));
        layoutWidget = new QWidget(Alteracao);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 60, 391, 198));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        lblDataHorario = new QLabel(layoutWidget);
        lblDataHorario->setObjectName(QStringLiteral("lblDataHorario"));
        QFont font;
        font.setPointSize(10);
        lblDataHorario->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, lblDataHorario);

        dtQuando = new QDateTimeEdit(layoutWidget);
        dtQuando->setObjectName(QStringLiteral("dtQuando"));
        dtQuando->setFont(font);
        dtQuando->setMinimumDateTime(QDateTime(QDate(2018, 3, 30), QTime(0, 0, 0)));
        dtQuando->setMaximumDate(QDate(2100, 12, 31));
        dtQuando->setMinimumDate(QDate(2018, 3, 30));
        dtQuando->setCalendarPopup(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, dtQuando);

        lblNomeEvento = new QLabel(layoutWidget);
        lblNomeEvento->setObjectName(QStringLiteral("lblNomeEvento"));
        lblNomeEvento->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, lblNomeEvento);

        txtTitulo = new QLineEdit(layoutWidget);
        txtTitulo->setObjectName(QStringLiteral("txtTitulo"));

        formLayout->setWidget(1, QFormLayout::FieldRole, txtTitulo);

        lblDescricao = new QLabel(layoutWidget);
        lblDescricao->setObjectName(QStringLiteral("lblDescricao"));
        lblDescricao->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, lblDescricao);

        txtDescricao = new QTextEdit(layoutWidget);
        txtDescricao->setObjectName(QStringLiteral("txtDescricao"));

        formLayout->setWidget(2, QFormLayout::FieldRole, txtDescricao);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnAlterar = new QPushButton(layoutWidget);
        btnAlterar->setObjectName(QStringLiteral("btnAlterar"));

        horizontalLayout->addWidget(btnAlterar);

        btnBuscar = new QPushButton(layoutWidget);
        btnBuscar->setObjectName(QStringLiteral("btnBuscar"));

        horizontalLayout->addWidget(btnBuscar);

        btnLimpar = new QPushButton(layoutWidget);
        btnLimpar->setObjectName(QStringLiteral("btnLimpar"));

        horizontalLayout->addWidget(btnLimpar);


        verticalLayout->addLayout(horizontalLayout);

        layoutWidget->raise();
        lblIntrucao->raise();

        retranslateUi(Alteracao);

        QMetaObject::connectSlotsByName(Alteracao);
    } // setupUi

    void retranslateUi(QDialog *Alteracao)
    {
        Alteracao->setWindowTitle(QApplication::translate("Alteracao", "Altera\303\247\303\243o de evento", 0));
        lblIntrucao->setText(QApplication::translate("Alteracao", "Coloque a Data e o Hor\303\241rio do evento que deseja alterar juntamente das \n"
"novas informa\303\247\303\265es", 0));
        lblDataHorario->setText(QApplication::translate("Alteracao", "Data e Hor\303\241rio:", 0));
        lblNomeEvento->setText(QApplication::translate("Alteracao", "Nome do evento:", 0));
        lblDescricao->setText(QApplication::translate("Alteracao", "Descri\303\247\303\243o:", 0));
        btnAlterar->setText(QApplication::translate("Alteracao", "Alterar", 0));
        btnBuscar->setText(QApplication::translate("Alteracao", "Buscar", 0));
        btnLimpar->setText(QApplication::translate("Alteracao", "Limpar", 0));
    } // retranslateUi

};

namespace Ui {
    class Alteracao: public Ui_Alteracao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALTERACAO_H
