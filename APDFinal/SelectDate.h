#pragma once

#include <QMainWindow>
#include <QObject>
#include "ui_SelectDate.h"

QT_BEGIN_NAMESPACE
namespace Ui { class SelectDateClass; };
QT_END_NAMESPACE

class SelectDate : public QMainWindow
{
	Q_OBJECT

public:
	SelectDate(QWidget *parent = nullptr);
	~SelectDate();
signals:
	void sendDate(QDate data);
public slots:
	void buttonClicked();
	void changeData();
private:
	Ui::SelectDateClass *ui;
	QDate data;
};
