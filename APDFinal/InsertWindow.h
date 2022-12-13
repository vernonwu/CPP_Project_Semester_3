#pragma once

#include <QMainWindow>
#include <QObject>
#include "ui_InsertWindow.h"
#include "SelectDate.h"

QT_BEGIN_NAMESPACE
namespace Ui { class InsertWindowClass; };
QT_END_NAMESPACE

class InsertWindow : public QMainWindow
{
	Q_OBJECT

public:
	InsertWindow(QWidget *parent = nullptr);
	~InsertWindow();
	
signals:
	void sendData1(QDate date, int type, double amount, std::string remark);
public slots:
	void select_Date();
	void insert_Data();
	void receiveDate(QDate data);
private:
	Ui::InsertWindowClass *ui;
	QDate date1;
	int type1;
	int amount1;
	std::string remark1;
	SelectDate* sd;
};
