#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
#include "InsertWindow.h"
#include "SelectDate.h"
//std::vector <std::string> type_info = { "日常", "固定", "大项", "往来", "娱乐" };

InsertWindow::InsertWindow(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::InsertWindowClass())
{
	ui->setupUi(this);
	QStringList type_list;
	type_list << "日常" << "固定" << "大项" << "往来" << "娱乐";
	ui->comboBox->addItems(type_list);
	ui->lineEdit_2->setValidator(new QRegExpValidator(QRegExp("^\\d+(\\.\\d+)?$")));
	connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(select_Date()));
	connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(insert_Data()));
}

InsertWindow::~InsertWindow()
{
	delete ui;
}

void InsertWindow::select_Date()
{
	sd = new SelectDate;
	connect(sd, SIGNAL(sendDate(QDate)), this, SLOT(receiveDate(QDate)));
	sd->show();
}

void InsertWindow::receiveDate(QDate data)
{
	this->date1 = data;
}

void InsertWindow::insert_Data()
{
	this->amount1 = ui->lineEdit_2->text().toDouble();
	this->type1 = ui->comboBox->currentIndex();
	this->remark1 = ui->lineEdit->text().toStdString();
	//QString test = ui->lineEdit->text();
	emit sendData1(this->date1, this->type1, this->amount1, this->remark1);
}

