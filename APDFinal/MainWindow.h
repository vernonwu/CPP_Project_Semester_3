#pragma once

#include <QWidget>
#include <ctime>
#include <vector>
#include <QDate>
#include "Row.h"
#include "FindWindow.h"
#include <string>
#include "InsertWindow.h"
#include <QStandardItemModel>
#include "ui_MainWindow.h"



class MainWindow : public QWidget
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = Q_NULLPTR);
	~MainWindow();
	void add_Row(QDate date, int type, int amount, std::string remark);
	void delete_Row(int cursor);
	void refresh();

signals:
	void send_table(std::vector <Row> table);

public slots:
	void slot2();
	void delete_Row();
	void slot_find();
	void receiveData1(QDate date, int type, double amount, std::string remark);

private:
	Ui::MainWindow* ui1;
	std::vector <Row> table;
	QStandardItemModel* model;
	QItemSelectionModel* selection;
	InsertWindow* iw;
	FindWindow *fw;
};
