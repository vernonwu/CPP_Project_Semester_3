#pragma once

#include <QtWidgets/QMainWindow>
#include "MainWindow.h"
#include "Info.h"
#include "Row.h"
#include <vector>
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
    void load_data();

private:
    Ui::APDFinalClass *ui;
    MainWindow* mw;
    Info* info;
    std::vector<Row> table;
};
