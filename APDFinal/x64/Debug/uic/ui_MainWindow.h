/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *FindButton;
    QTableView *tableView;
    QPushButton *CalcButton;
    QPushButton *InsertButton;
    QPushButton *DeleteButton;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(836, 681);
        gridLayout_2 = new QGridLayout(MainWindow);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetNoConstraint);
        gridLayout->setContentsMargins(10, 10, 10, 10);
        FindButton = new QPushButton(MainWindow);
        FindButton->setObjectName(QStringLiteral("FindButton"));
        FindButton->setCheckable(true);

        gridLayout->addWidget(FindButton, 4, 1, 1, 1);

        tableView = new QTableView(MainWindow);
        tableView->setObjectName(QStringLiteral("tableView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(5);
        sizePolicy.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy);

        gridLayout->addWidget(tableView, 0, 0, 7, 1);

        CalcButton = new QPushButton(MainWindow);
        CalcButton->setObjectName(QStringLiteral("CalcButton"));
        CalcButton->setCheckable(true);

        gridLayout->addWidget(CalcButton, 6, 1, 1, 1);

        InsertButton = new QPushButton(MainWindow);
        InsertButton->setObjectName(QStringLiteral("InsertButton"));
        InsertButton->setCheckable(true);

        gridLayout->addWidget(InsertButton, 0, 1, 1, 1);

        DeleteButton = new QPushButton(MainWindow);
        DeleteButton->setObjectName(QStringLiteral("DeleteButton"));
        DeleteButton->setCheckable(true);

        gridLayout->addWidget(DeleteButton, 2, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 5, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        FindButton->setText(QApplication::translate("MainWindow", "\346\237\245\346\211\276\350\264\246\347\233\256", Q_NULLPTR));
        CalcButton->setText(QApplication::translate("MainWindow", "\347\273\237\350\256\241\350\264\246\347\233\256", Q_NULLPTR));
        InsertButton->setText(QApplication::translate("MainWindow", "\346\217\222\345\205\245\350\264\246\347\233\256", Q_NULLPTR));
        DeleteButton->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244\350\264\246\347\233\256", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
