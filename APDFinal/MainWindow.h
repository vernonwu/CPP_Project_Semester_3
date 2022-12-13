#pragma once

#include <QWidget>
#include <ctime>
#include <vector>
#include <QDate>
#include <string>
#include "InsertWindow.h"
#include <QStandardItemModel>
#include "ui_MainWindow.h"

class Row
{
	//friend void MainWindow::add_Row(tm time, int type, int amount, std::string remark);
private:
	QDate date;
	int type;
	int amount;
	std::string remark;
public:
	Row(QDate date, int type, int amount, std::string remark);
	void set_Date(QDate date);
	QDate get_Date();
	void set_Type(int type);
	int get_Type();
	void set_Amount(int amount);
	int get_Amount();
	void set_Remark(std::string remark);
	std::string get_Remark();
};

class MainWindow : public QWidget
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = Q_NULLPTR);
	~MainWindow();
	void add_Row(QDate date, int type, int amount, std::string remark);
	void delete_Row(int cursor);
	void refresh();
public slots:
	void slot2();
	void delete_Row();
	void receiveData1(QDate date, int type, double amount, std::string remark);
private:
	Ui::MainWindow* ui1;
	std::vector <Row> table;
	QStandardItemModel* model;
	QItemSelectionModel* selection;
	InsertWindow* iw;
};
