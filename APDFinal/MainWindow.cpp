#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
#include "MainWindow.h"
#include <QStandardItemModel>
#include<QScrollBar>
#include "ui_MainWindow.h"

Row::Row(tm time, int type, int amount, std::string remark)
{
	this->time = time;
	this->type = type;
	this->amount = amount;
	this->remark = remark;
}
void Row::set_Time(tm time)
{
	this->time = time;
}
tm Row::get_Time()
{
	return this->time;
}
void Row::set_Type(int type)
{
	this->type = type;
}
int Row::get_Type()
{
	return type;
}
void Row::set_Amount(int amount)
{
	this->amount = amount;
}
int Row::get_Amount()
{
	return this->amount;
}
void Row::set_Remark(std::string remark)
{
	this->remark = remark;
}
std::string Row::get_Remark()
{
	return this->remark;
}

MainWindow::MainWindow(QWidget *parent)
	: QWidget(parent), ui1(new Ui::MainWindow)
{
	ui1->setupUi(this);
	//this->resize(QSize(800, 600));
	QStandardItemModel* model = new QStandardItemModel(999, 4);
	model->setHeaderData(0, Qt::Horizontal, tr("时间"));
	model->setHeaderData(1, Qt::Horizontal, tr("种类"));
	model->setHeaderData(2, Qt::Horizontal, tr("金额"));
	model->setHeaderData(3, Qt::Horizontal, tr("备注"));
	ui1->tableView->horizontalHeader()->setVisible(true);//显示或隐藏表头
	ui1->tableView->verticalHeader()->setVisible(false);//显示或隐藏序列行
	ui1->tableView->setAutoScroll(true);//自动滚动条
	//ui->tableView->resizeColumnsToContents(); //根据内容调整大小
	ui1->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//根据容器调整大小
	ui1->tableView->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
	ui1->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);//只读
	ui1->tableView->setSelectionBehavior(QAbstractItemView::SelectRows); //设置选中模式为选中行
	ui1->tableView->setSelectionMode(QAbstractItemView::SingleSelection); //设置选中单行
	ui1->tableView->setModel(model); //使用
	int pos = 0;
	ui1->tableView->verticalScrollBar()->setSliderPosition(pos);
}

MainWindow::~MainWindow()
{
	delete ui1;
}
