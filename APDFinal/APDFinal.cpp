#include "APDFinal.h"
#include "ui_APDFinal.h"

APDFinal::APDFinal(QWidget* parent)
    : QMainWindow(parent), ui(new Ui::APDFinalClass)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(slot1()));
    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(info_slot()));
}

APDFinal::~APDFinal()
{
    delete ui;
}

void APDFinal::info_slot()
{
    info = new Info;
    info->show();
}

void APDFinal::slot1()
{
    mw = new MainWindow;
    mw->show();
}
