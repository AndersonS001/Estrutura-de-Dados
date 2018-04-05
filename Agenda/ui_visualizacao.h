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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_visualizacao
{
public:
    QLabel *lblIntrucao;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *btnVisualizar;
    QPushButton *btnCancelar;

    void setupUi(QDialog *visualizacao)
    {
        if (visualizacao->objectName().isEmpty())
            visualizacao->setObjectName(QStringLiteral("visualizacao"));
        visualizacao->resize(430, 260);
        lblIntrucao = new QLabel(visualizacao);
        lblIntrucao->setObjectName(QStringLiteral("lblIntrucao"));
        lblIntrucao->setGeometry(QRect(40, 10, 359, 16));
        layoutWidget = new QWidget(visualizacao);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(179, 109, 82, 61));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btnVisualizar = new QPushButton(layoutWidget);
        btnVisualizar->setObjectName(QStringLiteral("btnVisualizar"));

        verticalLayout->addWidget(btnVisualizar);

        btnCancelar = new QPushButton(layoutWidget);
        btnCancelar->setObjectName(QStringLiteral("btnCancelar"));

        verticalLayout->addWidget(btnCancelar);


        retranslateUi(visualizacao);

        QMetaObject::connectSlotsByName(visualizacao);
    } // setupUi

    void retranslateUi(QDialog *visualizacao)
    {
        visualizacao->setWindowTitle(QApplication::translate("visualizacao", "Visualiza\303\247\303\243o de evento", 0));
        lblIntrucao->setText(QApplication::translate("visualizacao", "Clique em \"Visualizar\" para ver sequencialmente todos os eventos inseridos", 0));
        btnVisualizar->setText(QApplication::translate("visualizacao", "Visualizar", 0));
        btnCancelar->setText(QApplication::translate("visualizacao", "Cancelar", 0));
    } // retranslateUi

};

namespace Ui {
    class visualizacao: public Ui_visualizacao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISUALIZACAO_H
