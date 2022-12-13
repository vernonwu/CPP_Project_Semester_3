/********************************************************************************
** Form generated from reading UI file 'InsertWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERTWINDOW_H
#define UI_INSERTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InsertWindowClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *InsertWindowClass)
    {
        if (InsertWindowClass->objectName().isEmpty())
            InsertWindowClass->setObjectName(QStringLiteral("InsertWindowClass"));
        InsertWindowClass->resize(803, 138);
        centralWidget = new QWidget(InsertWindowClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout->addWidget(comboBox);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout->addWidget(lineEdit_2);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        InsertWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(InsertWindowClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 803, 26));
        InsertWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(InsertWindowClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        InsertWindowClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(InsertWindowClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        InsertWindowClass->setStatusBar(statusBar);

        retranslateUi(InsertWindowClass);

        QMetaObject::connectSlotsByName(InsertWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *InsertWindowClass)
    {
        InsertWindowClass->setWindowTitle(QApplication::translate("InsertWindowClass", "InsertWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("InsertWindowClass", "\351\200\211\346\213\251\346\227\245\346\234\237", Q_NULLPTR));
        label->setText(QApplication::translate("InsertWindowClass", "\347\247\215\347\261\273", Q_NULLPTR));
        label_2->setText(QApplication::translate("InsertWindowClass", "\351\207\221\351\242\235", Q_NULLPTR));
        label_3->setText(QApplication::translate("InsertWindowClass", "\345\244\207\346\263\250", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("InsertWindowClass", "\346\217\222\345\205\245", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class InsertWindowClass: public Ui_InsertWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERTWINDOW_H
