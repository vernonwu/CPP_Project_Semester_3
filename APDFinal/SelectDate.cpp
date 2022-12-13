#include "SelectDate.h"
#include <iostream>
#include <QDebug>

SelectDate::SelectDate(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::SelectDateClass())
{
	ui->setupUi(this);
	connect(ui->calendarWidget, SIGNAL(selectionChanged()), this, SLOT(changeData()));
	connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(buttonClicked()));
}

SelectDate::~SelectDate()
{
	delete ui;
}

void SelectDate::changeData()
{
	data = ui->calendarWidget->selectedDate();
	qDebug() << data.toString();
}

void SelectDate::buttonClicked()
{
	qDebug() << data.toString();
	emit sendDate(this->data);
}
