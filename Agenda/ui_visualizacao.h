/********************************************************************************
** Form generated from reading UI file 'visualizacao.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISUALIZACAO_H
#define UI_VISUALIZACAO_H

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

class Ui_visualizacao
{
public:
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
    QPushButton *btnVoltar;
    QPushButton *btnAvancar;

    void setupUi(QDialog *visualizacao)
    {
        if (visualizacao->objectName().isEmpty())
            visualizacao->setObjectName(QStringLiteral("visualizacao"));
        visualizacao->resize(465, 275);
        layoutWidget = new QWidget(visualizacao);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 451, 261));
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
        dtQuando->setReadOnly(true);
        dtQuando->setMinimumDateTime(QDateTime(QDate(2018, 3, 30), QTime(0, 0, 0)));
        dtQuando->setMaximumDate(QDate(2100, 12, 31));
        dtQuando->setMinimumDate(QDate(2018, 3, 30));
        dtQuando->setCalendarPopup(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, dtQuando);

        lblNomeEvento = new QLabel(layoutWidget);
        lblNomeEvento->setObjectName(QStringLiteral("lblNomeEvento"));
        lblNomeEvento->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, lblNomeEvento);

        txtTitulo = new QLineEdit(layoutWidget);
        txtTitulo->setObjectName(QStringLiteral("txtTitulo"));
        txtTitulo->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, txtTitulo);

        lblDescricao = new QLabel(layoutWidget);
        lblDescricao->setObjectName(QStringLiteral("lblDescricao"));
        lblDescricao->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, lblDescricao);

        txtDescricao = new QTextEdit(layoutWidget);
        txtDescricao->setObjectName(QStringLiteral("txtDescricao"));
        txtDescricao->setReadOnly(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, txtDescricao);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnVoltar = new QPushButton(layoutWidget);
        btnVoltar->setObjectName(QStringLiteral("btnVoltar"));

        horizontalLayout->addWidget(btnVoltar);

        btnAvancar = new QPushButton(layoutWidget);
        btnAvancar->setObjectName(QStringLiteral("btnAvancar"));

        horizontalLayout->addWidget(btnAvancar);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(visualizacao);

        QMetaObject::connectSlotsByName(visualizacao);
    } // setupUi

    void retranslateUi(QDialog *visualizacao)
    {
        visualizacao->setWindowTitle(QApplication::translate("visualizacao", "Ver compromissos", 0));
        lblDataHorario->setText(QApplication::translate("visualizacao", "Data e Hor\303\241rio:", 0));
        lblNomeEvento->setText(QApplication::translate("visualizacao", "Nome do evento:", 0));
        lblDescricao->setText(QApplication::translate("visualizacao", "Descri\303\247\303\243o:", 0));
        btnVoltar->setText(QApplication::translate("visualizacao", "Anterior", 0));
        btnAvancar->setText(QApplication::translate("visualizacao", "Pr\303\263ximo", 0));
    } // retranslateUi

};

namespace Ui {
    class visualizacao: public Ui_visualizacao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISUALIZACAO_H
