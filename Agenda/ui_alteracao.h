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
    QLabel *label_4;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label_2;
    QDateTimeEdit *dtQuando;
    QLabel *label;
    QLineEdit *txtTitulo;
    QLabel *label_3;
    QTextEdit *txtDescricao;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *Alteracao)
    {
        if (Alteracao->objectName().isEmpty())
            Alteracao->setObjectName(QStringLiteral("Alteracao"));
        Alteracao->resize(465, 275);
        label_4 = new QLabel(Alteracao);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 20, 451, 21));
        layoutWidget = new QWidget(Alteracao);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 60, 391, 191));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setPointSize(10);
        label_2->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        dtQuando = new QDateTimeEdit(layoutWidget);
        dtQuando->setObjectName(QStringLiteral("dtQuando"));
        dtQuando->setFont(font);
        dtQuando->setMinimumDateTime(QDateTime(QDate(2018, 3, 30), QTime(0, 0, 0)));
        dtQuando->setMaximumDate(QDate(2100, 12, 31));
        dtQuando->setMinimumDate(QDate(2018, 3, 30));
        dtQuando->setCalendarPopup(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, dtQuando);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        txtTitulo = new QLineEdit(layoutWidget);
        txtTitulo->setObjectName(QStringLiteral("txtTitulo"));

        formLayout->setWidget(1, QFormLayout::FieldRole, txtTitulo);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        txtDescricao = new QTextEdit(layoutWidget);
        txtDescricao->setObjectName(QStringLiteral("txtDescricao"));

        formLayout->setWidget(2, QFormLayout::FieldRole, txtDescricao);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        layoutWidget->raise();
        label_4->raise();

        retranslateUi(Alteracao);

        QMetaObject::connectSlotsByName(Alteracao);
    } // setupUi

    void retranslateUi(QDialog *Alteracao)
    {
        Alteracao->setWindowTitle(QApplication::translate("Alteracao", "Dialog", 0));
        label_4->setText(QApplication::translate("Alteracao", "Coloque a Data e o Hor\303\241rio do evento que deseja alterar juntamente das novas informa\303\247\303\265es", 0));
        label_2->setText(QApplication::translate("Alteracao", "Data e Hor\303\241rio:", 0));
        label->setText(QApplication::translate("Alteracao", "Nome do evento:", 0));
        label_3->setText(QApplication::translate("Alteracao", "Descri\303\247\303\243o:", 0));
        pushButton_3->setText(QApplication::translate("Alteracao", "Cancelar", 0));
        pushButton_2->setText(QApplication::translate("Alteracao", "Limpar", 0));
        pushButton->setText(QApplication::translate("Alteracao", "Alterar", 0));
    } // retranslateUi

};

namespace Ui {
    class Alteracao: public Ui_Alteracao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALTERACAO_H
