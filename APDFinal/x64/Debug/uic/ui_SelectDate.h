/********************************************************************************
** Form generated from reading UI file 'SelectDate.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTDATE_H
#define UI_SELECTDATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectDateClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QCalendarWidget *calendarWidget;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SelectDateClass)
    {
        if (SelectDateClass->objectName().isEmpty())
            SelectDateClass->setObjectName(QStringLiteral("SelectDateClass"));
        SelectDateClass->resize(600, 400);
        centralWidget = new QWidget(SelectDateClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        calendarWidget = new QCalendarWidget(centralWidget);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));

        verticalLayout->addWidget(calendarWidget);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        SelectDateClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SelectDateClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 26));
        SelectDateClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SelectDateClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SelectDateClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SelectDateClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SelectDateClass->setStatusBar(statusBar);

        retranslateUi(SelectDateClass);

        QMetaObject::connectSlotsByName(SelectDateClass);
    } // setupUi

    void retranslateUi(QMainWindow *SelectDateClass)
    {
        SelectDateClass->setWindowTitle(QApplication::translate("SelectDateClass", "SelectDate", Q_NULLPTR));
        pushButton->setText(QApplication::translate("SelectDateClass", "\346\217\222\345\205\245\346\227\245\346\234\237", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SelectDateClass: public Ui_SelectDateClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTDATE_H
