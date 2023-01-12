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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculateClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label_3;
    QPushButton *pushButton_3;
    QLabel *label_4;
    QLabel *label_8;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_6;
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
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 2, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 1, 1, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 1, 2, 1, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 4, 1, 1, 1);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 3, 1, 1, 1);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

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
        pushButton->setText(QApplication::translate("CalculateClass", "\351\200\211\346\213\251\346\227\245\346\234\237", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("CalculateClass", "\346\227\245\346\234\237\347\273\237\350\256\241", Q_NULLPTR));
        label_2->setText(QApplication::translate("CalculateClass", "\346\240\271\346\215\256\347\261\273\345\236\213\347\273\237\350\256\241", Q_NULLPTR));
        label_3->setText(QApplication::translate("CalculateClass", "\346\200\273\345\222\214", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("CalculateClass", "\347\261\273\345\236\213\347\273\237\350\256\241", Q_NULLPTR));
        label_4->setText(QApplication::translate("CalculateClass", "\346\234\200\345\244\247", Q_NULLPTR));
        label_8->setText(QString());
        label_5->setText(QApplication::translate("CalculateClass", "\346\234\200\345\260\217", Q_NULLPTR));
        label_7->setText(QString());
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CalculateClass: public Ui_CalculateClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATE_H
