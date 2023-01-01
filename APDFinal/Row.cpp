#include "Row.h"
#include <QDate>

Row::Row(QDate date, int type, int amount, std::string remark)
{
	this->date = date;
	this->type = type;
	this->amount = amount;
	this->remark = remark;
}
void Row::set_Date(QDate date)
{
	this->date = date;
}
QDate Row::get_Date()
{
	return this->date;
}
void Row::set_Type(int type)
{
	this->type = type;
}
int Row::get_Type()
{
	return type;
}
void Row::set_Amount(int amount)
{
	this->amount = amount;
}
int Row::get_Amount()
{
	return this->amount;
}
void Row::set_Remark(std::string remark)
{
	this->remark = remark;
}
std::string Row::get_Remark()
{
	return this->remark;
}