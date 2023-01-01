#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif

#include "FindWindow.h"
#include <QScrollBar>
#include "SelectDate.h"
#include <QStandardItemModel>
#include "Row.h"


FindWindow::FindWindow(std::vector <Row> table, QWidget *parent)
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
	connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(select_date()));
	connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(find_by_date()));
	this->table = table;
}

void FindWindow::select_date()
{
	sd = new SelectDate;
	connect(sd, SIGNAL(sendDate(QDate)), this, SLOT(receive_Date(QDate)));
	sd->show();
}

void FindWindow::find_by_date()
{
	int length = this->table.size();
	this->display_table.clear();
	for (int i = 0; i < length; i++)
	{
		if (table[i].get_Date() == this->date)
		{
			display_table.push_back(table[i]);
		}
	}
	refresh();
}

void FindWindow::refresh()
{
	int length = this->display_table.size();
	std::vector <std::string> type_info = { "日常", "固定", "大项", "往来", "娱乐" };
	for (int i = 0; i < length; i++)
	{
		this->model->setItem(i, 0, new QStandardItem(this->display_table[i].get_Date().toString()));
		this->model->setItem(i, 1, new QStandardItem(type_info[this->display_table[i].get_Type()].c_str()));
		this->model->setItem(i, 2, new QStandardItem(std::to_string(this->display_table[i].get_Amount()).c_str()));
		this->model->setItem(i, 3, new QStandardItem(this->display_table[i].get_Remark().c_str()));
	}
}

void FindWindow::receive_Date(QDate date)
{
	this->date = date;
}

FindWindow::~FindWindow()
{
	delete ui;
	delete model;
	delete selection;
}
