#pragma once

#include <QMainWindow>
#include <vector>
#include <QDate>
#include "SelectDate.h"
#include "Row.h"
#include "ui_Calculate.h"

QT_BEGIN_NAMESPACE
namespace Ui { class CalculateClass; };
QT_END_NAMESPACE

class Calculate : public QMainWindow
{
	Q_OBJECT

public:
	Calculate(std::vector<Row> table, QWidget *parent = nullptr);
	~Calculate();

public slots:
	void select_date();
	void receive_Date(QDate data);
	void cal_by_date();
	void cal_by_type();

private:
	Ui::CalculateClass *ui;
	std::vector<Row> table;
	SelectDate* sd;
	QDate date;
};
