#pragma once

#include <QMainWindow>
#include "ui_Settings.h"

QT_BEGIN_NAMESPACE
namespace Ui { class SettingsClass; };
QT_END_NAMESPACE

class Settings : public QMainWindow
{
	Q_OBJECT

public:
	Settings(QWidget *parent = nullptr);
	~Settings();
	void refresh();

public slots:
	void save();

private:
	Ui::SettingsClass *ui;
};
