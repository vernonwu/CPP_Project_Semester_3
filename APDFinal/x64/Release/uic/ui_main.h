/********************************************************************************
** Form generated from reading UI file 'main.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_H
#define UI_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtWidgetsClass
{
public:

    void setupUi(QWidget *QtWidgetsClass)
    {
        if (QtWidgetsClass->objectName().isEmpty())
            QtWidgetsClass->setObjectName(QStringLiteral("QtWidgetsClass"));
        QtWidgetsClass->resize(400, 300);

        retranslateUi(QtWidgetsClass);

        QMetaObject::connectSlotsByName(QtWidgetsClass);
    } // setupUi

    void retranslateUi(QWidget *QtWidgetsClass)
    {
        QtWidgetsClass->setWindowTitle(QApplication::translate("QtWidgetsClass", "QtWidgetsClass", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtWidgetsClass: public Ui_QtWidgetsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_H
