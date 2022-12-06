#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
#include "InsertWindow.h"

InsertWindow::InsertWindow(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::InsertWindowClass())
{
	ui->setupUi(this);
	QStringList type_list;
	type_list << "日常" << "固定" << "大项" << "往来" << "娱乐";
	ui->comboBox->addItems(type_list);
}

InsertWindow::~InsertWindow()
{
	delete ui;
}
