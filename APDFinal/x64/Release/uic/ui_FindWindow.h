/********************************************************************************
** Form generated from reading UI file 'FindWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDWINDOW_H
#define UI_FINDWINDOW_H

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
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FindWindowClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QComboBox *comboBox;
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTableView *tableView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FindWindowClass)
    {
        if (FindWindowClass->objectName().isEmpty())
            FindWindowClass->setObjectName(QStringLiteral("FindWindowClass"));
        FindWindowClass->resize(678, 437);
        centralWidget = new QWidget(FindWindowClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetNoConstraint);
        gridLayout->setContentsMargins(10, 10, 10, 10);
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 1, 1, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 1, 2, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 2, 1, 1);

        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 2, 0, 1, 3);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        FindWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FindWindowClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 678, 26));
        FindWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FindWindowClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        FindWindowClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(FindWindowClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FindWindowClass->setStatusBar(statusBar);

        retranslateUi(FindWindowClass);

        QMetaObject::connectSlotsByName(FindWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *FindWindowClass)
    {
        FindWindowClass->setWindowTitle(QApplication::translate("FindWindowClass", "FindWindow", Q_NULLPTR));
        label_2->setText(QApplication::translate("FindWindowClass", "\347\247\215\347\261\273\346\237\245\346\211\276", Q_NULLPTR));
        label->setText(QApplication::translate("FindWindowClass", "\346\227\245\346\234\237\346\237\245\346\211\276", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("FindWindowClass", "\347\247\215\347\261\273\346\237\245\346\211\276", Q_NULLPTR));
        pushButton->setText(QApplication::translate("FindWindowClass", "\351\200\211\346\213\251\346\227\245\346\234\237", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("FindWindowClass", "\346\227\245\346\234\237\346\237\245\346\211\276", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FindWindowClass: public Ui_FindWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDWINDOW_H
