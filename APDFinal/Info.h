#pragma once

#include <QMainWindow>
#include "ui_Info.h"

QT_BEGIN_NAMESPACE
namespace Ui { class InfoClass; };
QT_END_NAMESPACE

class Info : public QMainWindow
{
	Q_OBJECT

public:
	Info(QWidget *parent = nullptr);
	~Info();

private:
	Ui::InfoClass *ui;
};
