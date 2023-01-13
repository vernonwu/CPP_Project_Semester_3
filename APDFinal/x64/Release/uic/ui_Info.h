/********************************************************************************
** Form generated from reading UI file 'Info.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFO_H
#define UI_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *InfoClass)
    {
        if (InfoClass->objectName().isEmpty())
            InfoClass->setObjectName(QStringLiteral("InfoClass"));
        InfoClass->resize(600, 400);
        centralWidget = new QWidget(InfoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);


        verticalLayout_2->addLayout(verticalLayout);

        InfoClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(InfoClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 26));
        InfoClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(InfoClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        InfoClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(InfoClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        InfoClass->setStatusBar(statusBar);

        retranslateUi(InfoClass);

        QMetaObject::connectSlotsByName(InfoClass);
    } // setupUi

    void retranslateUi(QMainWindow *InfoClass)
    {
        InfoClass->setWindowTitle(QApplication::translate("InfoClass", "Info", Q_NULLPTR));
        label->setText(QApplication::translate("InfoClass", "TextLabel", Q_NULLPTR));
        label_2->setText(QApplication::translate("InfoClass", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class InfoClass: public Ui_InfoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFO_H
