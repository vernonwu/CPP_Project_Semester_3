#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif

#include "APDFinal.h"
#include <fstream>
#include "ui_APDFinal.h"

extern int language;

APDFinal::APDFinal(QWidget* parent)
    : QMainWindow(parent), ui(new Ui::APDFinalClass)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(slot1()));
    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(info_slot()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(load_data()));
    connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(settings()));
    refresh();
}

void APDFinal::settings()
{
    st = new Settings;
    st->show();
    refresh();
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

void APDFinal::refresh()
{
    if (language == 1)
    {
        ui->label->setText("Welcome");
        ui->pushButton->setText("Enter");
        ui->pushButton_2->setText("Load Data");
        ui->pushButton_3->setText("Information");
        ui->pushButton_4->setText("Settings");
    }
    else
    {
        ui->label->setText("欢迎使用记账管理器");
        ui->pushButton->setText("进入系统");
        ui->pushButton_2->setText("导入数据");
        ui->pushButton_3->setText("制作者信息");
        ui->pushButton_4->setText("设置");
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
