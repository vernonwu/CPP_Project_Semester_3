#include "APDFinal.h"
#include <fstream>
#include "ui_APDFinal.h"


APDFinal::APDFinal(QWidget* parent)
    : QMainWindow(parent), ui(new Ui::APDFinalClass)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(slot1()));
    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(info_slot()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(load_data()));
}

APDFinal::~APDFinal()
{
    delete ui;
}

void APDFinal::load_data()
{
    std::ifstream in(".\\save.dat");
    if (!in.is_open())
    {
        this->table = std::vector<Row>();
        return;
    }
    std::string date;
    int amount;
    int type;
    std::string remark;
    while (!in.eof())
    {
        in >> date >> type >> amount >> remark;
        this->table.push_back(Row(QDate::fromString(QString::fromStdString(date), "yyyyMMdd"), type, amount, remark));
    }

}

void APDFinal::info_slot()
{
    info = new Info;
    info->show();
}

void APDFinal::slot1()
{
    mw = new MainWindow(this->table);
    mw->show();
}
