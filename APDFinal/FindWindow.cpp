#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif

#include "FindWindow.h"
#include <QScrollBar>
#include <QStandardItemModel>

FindWindow::FindWindow(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::FindWindowClass())
{
	ui->setupUi(this);
	QStringList type_list;
	type_list << "日常" << "固定" << "大项" << "往来" << "娱乐";
	ui->comboBox->addItems(type_list);
	this->model = new QStandardItemModel(999, 4);
	this->selection = new QItemSelectionModel(model);
	model->setHeaderData(0, Qt::Horizontal, tr("时间"));
	model->setHeaderData(1, Qt::Horizontal, tr("种类"));
	model->setHeaderData(2, Qt::Horizontal, tr("金额"));
	model->setHeaderData(3, Qt::Horizontal, tr("备注"));
	ui->tableView->horizontalHeader()->setVisible(true);//显示或隐藏表头
	ui->tableView->verticalHeader()->setVisible(false);//显示或隐藏序列行
	ui->tableView->setAutoScroll(true);//自动滚动条
	//ui->tableView->resizeColumnsToContents(); //根据内容调整大小
	ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//根据容器调整大小
	ui->tableView->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
	ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);//只读
	ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows); //设置选中模式为选中行
	ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection); //设置选中单行
	ui->tableView->setModel(model); //使用
	ui->tableView->setSelectionModel(selection);
	ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
	ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
	int pos = 0;
	ui->tableView->verticalScrollBar()->setSliderPosition(pos);
}

FindWindow::~FindWindow()
{
	delete ui;
	delete model;
	delete selection;
}
