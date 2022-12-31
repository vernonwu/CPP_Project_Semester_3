#pragma once

#include <QMainWindow>
#include <QStandardItemModel>
#include "ui_FindWindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class FindWindowClass; };
QT_END_NAMESPACE

class FindWindow : public QMainWindow
{
	Q_OBJECT

public:
	FindWindow(QWidget *parent = nullptr);
	~FindWindow();

private:
	Ui::FindWindowClass *ui;
	QStandardItemModel* model;
	QItemSelectionModel* selection;
};
