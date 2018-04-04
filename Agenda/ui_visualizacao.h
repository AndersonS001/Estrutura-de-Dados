/********************************************************************************
** Form generated from reading UI file 'visualizacao.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISUALIZACAO_H
#define UI_VISUALIZACAO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_visualizacao
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *visualizacao)
    {
        if (visualizacao->objectName().isEmpty())
            visualizacao->setObjectName(QStringLiteral("visualizacao"));
        visualizacao->resize(430, 260);
        pushButton = new QPushButton(visualizacao);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(179, 109, 80, 21));
        label = new QLabel(visualizacao);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 80, 359, 16));

        retranslateUi(visualizacao);

        QMetaObject::connectSlotsByName(visualizacao);
    } // setupUi

    void retranslateUi(QDialog *visualizacao)
    {
        visualizacao->setWindowTitle(QApplication::translate("visualizacao", "Visualiza\303\247\303\243o de evento", 0));
        pushButton->setText(QApplication::translate("visualizacao", "Visualizar", 0));
        label->setText(QApplication::translate("visualizacao", "Clique em \"Visualizar\" para ver sequencialmente todos os eventos inseridos", 0));
    } // retranslateUi

};

namespace Ui {
    class visualizacao: public Ui_visualizacao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISUALIZACAO_H
