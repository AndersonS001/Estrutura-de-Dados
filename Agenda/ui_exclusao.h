/********************************************************************************
** Form generated from reading UI file 'exclusao.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXCLUSAO_H
#define UI_EXCLUSAO_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Exclusao
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *lblInstrucao;
    QFormLayout *formLayout_2;
    QLabel *lblDataHorario;
    QDateTimeEdit *dtQuando;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnCancelar;
    QPushButton *btnExcluir;

    void setupUi(QDialog *Exclusao)
    {
        if (Exclusao->objectName().isEmpty())
            Exclusao->setObjectName(QStringLiteral("Exclusao"));
        Exclusao->resize(430, 260);
        widget = new QWidget(Exclusao);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(31, 81, 366, 96));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lblInstrucao = new QLabel(widget);
        lblInstrucao->setObjectName(QStringLiteral("lblInstrucao"));

        verticalLayout->addWidget(lblInstrucao);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        lblDataHorario = new QLabel(widget);
        lblDataHorario->setObjectName(QStringLiteral("lblDataHorario"));
        QFont font;
        font.setPointSize(10);
        lblDataHorario->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, lblDataHorario);

        dtQuando = new QDateTimeEdit(widget);
        dtQuando->setObjectName(QStringLiteral("dtQuando"));
        dtQuando->setFont(font);
        dtQuando->setMinimumDateTime(QDateTime(QDate(2018, 3, 30), QTime(0, 0, 0)));
        dtQuando->setMaximumDate(QDate(2100, 12, 31));
        dtQuando->setMinimumDate(QDate(2018, 3, 30));
        dtQuando->setCalendarPopup(true);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, dtQuando);


        verticalLayout->addLayout(formLayout_2);

        verticalSpacer_2 = new QSpacerItem(364, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        btnCancelar = new QPushButton(widget);
        btnCancelar->setObjectName(QStringLiteral("btnCancelar"));

        horizontalLayout_2->addWidget(btnCancelar);

        btnExcluir = new QPushButton(widget);
        btnExcluir->setObjectName(QStringLiteral("btnExcluir"));

        horizontalLayout_2->addWidget(btnExcluir);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Exclusao);

        QMetaObject::connectSlotsByName(Exclusao);
    } // setupUi

    void retranslateUi(QDialog *Exclusao)
    {
        Exclusao->setWindowTitle(QApplication::translate("Exclusao", "Exclus\303\243o de evento", 0));
        lblInstrucao->setText(QApplication::translate("Exclusao", "Coloque a Data e o Hor\303\241rio do evento que deseja excluir", 0));
        lblDataHorario->setText(QApplication::translate("Exclusao", "Data e Hor\303\241rio:", 0));
        btnCancelar->setText(QApplication::translate("Exclusao", "Cancelar", 0));
        btnExcluir->setText(QApplication::translate("Exclusao", "Excluir", 0));
    } // retranslateUi

};

namespace Ui {
    class Exclusao: public Ui_Exclusao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXCLUSAO_H
