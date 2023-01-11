/********************************************************************************
** Form generated from reading UI file 'Calculate.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATE_H
#define UI_CALCULATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculateClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CalculateClass)
    {
        if (CalculateClass->objectName().isEmpty())
            CalculateClass->setObjectName(QStringLiteral("CalculateClass"));
        CalculateClass->resize(600, 400);
        centralWidget = new QWidget(CalculateClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 20, 101, 31));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 80, 101, 31));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(200, 20, 93, 28));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(210, 80, 87, 22));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(400, 20, 93, 28));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(400, 70, 93, 28));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 150, 72, 15));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 190, 72, 15));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 240, 72, 15));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(240, 140, 72, 15));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(230, 190, 72, 15));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(230, 240, 72, 15));
        CalculateClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CalculateClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 26));
        CalculateClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CalculateClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        CalculateClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CalculateClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        CalculateClass->setStatusBar(statusBar);

        retranslateUi(CalculateClass);

        QMetaObject::connectSlotsByName(CalculateClass);
    } // setupUi

    void retranslateUi(QMainWindow *CalculateClass)
    {
        CalculateClass->setWindowTitle(QApplication::translate("CalculateClass", "Calculate", Q_NULLPTR));
        label->setText(QApplication::translate("CalculateClass", "\346\240\271\346\215\256\346\227\245\346\234\237\347\273\237\350\256\241", Q_NULLPTR));
        label_2->setText(QApplication::translate("CalculateClass", "\346\240\271\346\215\256\347\261\273\345\236\213\347\273\237\350\256\241", Q_NULLPTR));
        pushButton->setText(QApplication::translate("CalculateClass", "\351\200\211\346\213\251\346\227\245\346\234\237", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("CalculateClass", "\346\227\245\346\234\237\347\273\237\350\256\241", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("CalculateClass", "\347\261\273\345\236\213\347\273\237\350\256\241", Q_NULLPTR));
        label_3->setText(QApplication::translate("CalculateClass", "\346\200\273\345\222\214", Q_NULLPTR));
        label_4->setText(QApplication::translate("CalculateClass", "\346\234\200\345\244\247", Q_NULLPTR));
        label_5->setText(QApplication::translate("CalculateClass", "\346\234\200\345\260\217", Q_NULLPTR));
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CalculateClass: public Ui_CalculateClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATE_H
