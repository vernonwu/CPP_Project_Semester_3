#pragma once

#include <QWidget>
#include <ctime>
#include <vector>
#include <string>
#include "ui_MainWindow.h"

class Row
{
private:
	tm time;
	int type;
	int amount;
	std::string remark;
public:
	Row(tm time, int type, int amount, std::string remark);
	void set_Time(tm time);
	tm get_Time();
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
	void add_Row(tm time, int type, int amount, std::string remark);
	void delete_Row(int cursor);
	void refresh();
private:
	Ui::MainWindow* ui1;
	std::vector <Row> table;
};
