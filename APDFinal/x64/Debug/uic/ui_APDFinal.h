/********************************************************************************
** Form generated from reading UI file 'APDFinal.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APDFINAL_H
#define UI_APDFINAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_APDFinalClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *APDFinalClass)
    {
        if (APDFinalClass->objectName().isEmpty())
            APDFinalClass->setObjectName(QStringLiteral("APDFinalClass"));
        APDFinalClass->resize(603, 424);
        centralWidget = new QWidget(APDFinalClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(50, 50, 50, 50);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(12);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);


        verticalLayout_2->addLayout(verticalLayout);

        APDFinalClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(APDFinalClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 603, 26));
        APDFinalClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(APDFinalClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        APDFinalClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(APDFinalClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        APDFinalClass->setStatusBar(statusBar);

        retranslateUi(APDFinalClass);

        QMetaObject::connectSlotsByName(APDFinalClass);
    } // setupUi

    void retranslateUi(QMainWindow *APDFinalClass)
    {
        APDFinalClass->setWindowTitle(QApplication::translate("APDFinalClass", "APDFinal", Q_NULLPTR));
        label->setText(QApplication::translate("APDFinalClass", "\346\254\242\350\277\216\344\275\277\347\224\250\350\256\260\350\264\246\347\256\241\347\220\206\345\231\250", Q_NULLPTR));
        pushButton->setText(QApplication::translate("APDFinalClass", "\350\277\233\345\205\245\347\263\273\347\273\237", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("APDFinalClass", "\345\257\274\345\205\245\346\225\260\346\215\256", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class APDFinalClass: public Ui_APDFinalClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APDFINAL_H
