#pragma once

#include <QtWidgets/QMainWindow>
#include <MainWindow.h>
#include "Info.h"
#include "ui_APDFinal.h"

class APDFinal : public QMainWindow
{
    Q_OBJECT

public:
    APDFinal(QWidget *parent = Q_NULLPTR);
    ~APDFinal();

private slots:
    void slot1();
    void info_slot();

private:
    Ui::APDFinalClass *ui;
    MainWindow* mw;
    Info* info;
};
