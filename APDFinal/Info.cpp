#include "Info.h"

Info::Info(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::InfoClass())
{
	ui->setupUi(this);
	//ui->label->setWordWrap(true);
	//ui->label_2->setWordWrap(true);
	ui->label->setText(
		"Thanks for using this application created by anonymousoul and Tobyleelsz."
	);
	ui->label_2->setText(
		"Assignment Project for Advanced Language Programming of 3rd semester. Qt implementation of a simple Cashbook."
	);
}

Info::~Info()
{
	delete ui;
}
