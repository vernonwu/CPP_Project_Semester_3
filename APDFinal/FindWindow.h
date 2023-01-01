#pragma once

#include <QMainWindow>
#include <QStandardItemModel>
#include "SelectDate.h"
#include "Row.h"
#include "ui_FindWindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class FindWindowClass; };
QT_END_NAMESPACE




class FindWindow : public QMainWindow
{
	Q_OBJECT

public:
	FindWindow(std::vector <Row> table, QWidget *parent = nullptr);
	~FindWindow();
	void refresh();

public slots:
	void select_date();
	void receive_Date(QDate data);
	void find_by_date();

private:
	Ui::FindWindowClass *ui;
	QStandardItemModel* model;
	QItemSelectionModel* selection;
	SelectDate* sd;
	std::vector <Row> table;
	std::vector <Row> display_table;
	QDate date;
};
