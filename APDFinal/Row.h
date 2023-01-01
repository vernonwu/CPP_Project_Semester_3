#pragma once

#include <QDate>

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
