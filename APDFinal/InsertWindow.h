#pragma once

#include <QMainWindow>
#include "ui_InsertWindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class InsertWindowClass; };
QT_END_NAMESPACE

class InsertWindow : public QMainWindow
{
	Q_OBJECT

public:
	InsertWindow(QWidget *parent = nullptr);
	~InsertWindow();

private:
	Ui::InsertWindowClass *ui;
};
