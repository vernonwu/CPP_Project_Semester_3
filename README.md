# 记账管理系统 实验报告

高级语言程序设计期末项目 

作者:

人工智能一班 202164690329 李尚哲

人工智能一班 202164690152 吴霄鹤



## 项目介绍

本次项目目的是制作一个个人使用的记账系统，并实现对于账目数据的插入、删除、查找、统计、导入、保存等功能。此外，本款记账系统支持中英两种语言显示。我们选择使用Qt及其组件进行本项目的UI设计，原因在于Qt为开源跨平台的C++程序开发框架，且其组件能够满足我们对于主程序视窗及主要功能实现的需求，并加速项目开发进程。我们希望能够使UI尽量简洁易用，使账目操作便捷化。

本项目源码已上传至 [github](https://github.com/anonymousoul/CPP_Project_Semester_3) 。



## 代码结构

项目主要文件的树形结构如下:

│  APDFinal.sln
│  CppProperties.json
│  LICENSE
│  README.md    
├─APDFinal
│  │  APDFinal.cpp  // 初始视窗设计
│  │  APDFinal.h
│  │  APDFinal.qrc
│  │  APDFinal.ui

│  │  Calculate.cpp // 数据统计的计算模块实现
│  │  Calculate.h
│  │  Calculate.ui
│  │  cpp.hint

│  │  FindWindow.cpp // 查询视窗设计
│  │  FindWindow.h
│  │  FindWindow.ui

│  │  Info.cpp // 开发者信息
│  │  Info.h
│  │  Info.ui

│  │  Analyze.cpp // 账目总数计算
│  │  Analyze.h
│  │  Analyze.ui

│  │  InsertWindow.cpp // 账目查询等弹窗设计
│  │  InsertWindow.h
│  │  InsertWindow.ui

│  │  main.cpp

│  │  MainWindow.cpp // 初始视窗设计
│  │  MainWindow.h
│  │  MainWindow.ui

│  │  Row.cpp // 存储数据类
│  │  Row.h

│  │  save.dat // 数据库

│  │  SelectDate.cpp // 选择日期弹窗
│  │  SelectDate.h
│  │  SelectDate.ui

│  │  Settings.cpp // 语言切换
│  │  Settings.h
│  │  Settings.ui

├─ uic // UI设计文件
│      │        ui_APDFinal.h
│      │        ui_Calculate.h
│      │        ui_FindWindow.h
│      │        ui_Info.h
│      │        ui_InsertWindow.h
│      │        ui_main.h
│      │        ui_MainWindow.h
│      │        ui_QtWidgetsClass.h
│      │        ui_SelectDate.h
│      │        ui_Settings.h



我们主要运用了Qt中的QMainWindow、Qwidget、QDate等组件支持开发。代码类结构的继承关系图如下:



<img src="fig\class.png" alt="class" style="zoom:33%;" />

 ## 运行方式

​           直接运行APDFinal.exe即可。当然，您也可以选择编译源码，但需要安装Qt 5.9.9版本及msvc2017，并且使用utf-8编码。

 

## 实现思路

### 模块拆分

我们在实现中包含了以下的Qt类：

| Qt类        | 功能           |
| ----------- | -------------- |
| Qwidgets    | 用户接口对象   |
| QMainWindow | 主应用程序窗口 |
| QDate       | 时间类         |
| QDebug      | 数据输出       |



我们实现了以下的功能模块，每个模块都包含有对应包含ui的设计头文件。

| 名称         | 命名                   |
| ------------ | ---------------------- |
| APDFinal     | 初始视窗设计           |
| Calculate    | 数据统计的计算模块实现 |
| FindWindow   | 查询视窗设计           |
| Info         | 开发者信息             |
| Analyze      | 账目总数计算           |
| InsertWindow | 账目查询等弹窗设计     |
| MainWindow   | 初始视窗设计           |
| Row          | 存储数据类             |
| SelectDate   | 选择日期弹窗           |
| Settings     | 语言切换               |



### 数据存储

在后台的数据保存上，我们自定义了Row类型，包含了时间、种类、金额、备注四个成员变量，并使用vector<row> 的方式存储当前的账单信息。Row类的声明如下:

```c++
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
```

用户每次插入账目和删除账目时,这个vector会自动更新，即自动保存功能。我们设置了自动照日期排序，因此显示同样也按照日期顺序。

### 信号传输与动作捕获

在页面间的数据传输和捕获按钮按下动作等随机事件处理方面，我们使用Qt中的slot和signal类进行实现。它们可以起到发射和接收信息的作用，我们借此实现了在页面间的信息交互。

例如在selectdate, 即选择日期功能的实现中，我们使用了以下方式调用slot:

```c++
public slots: // slots即为Qt中的slot类
	void buttonClicked(); 
	void changeData();
```



在构造函数中，进行如下连接:

```c++
SelectDate::SelectDate(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::SelectDateClass())
{
	ui->setupUi(this);
	connect(ui->calendarWidget, SIGNAL(selectionChanged()), this, SLOT(changeData()));
	connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(buttonClicked()));
}
```



随后正常定义函数即可：

```c++
void SelectDate::changeData()
{
	data = ui->calendarWidget->selectedDate();
	qDebug() << data.toString();
}

void SelectDate::buttonClicked()
{
	qDebug() << data.toString();
	emit sendDate(this->data); // send signal to be stored in data
}
```



### 总结

综上所述，对于期末作业的技术要求，我们做了以下实现:

- 主要围绕Qwidgets、QMainWindow、QDate进行了类继承，最高层数为两层。

- 使用Qt 完成了UI 设计。

- 随机事件处理上，我们使用了Qt的slot和signal类实现通讯与页面间的信息交互。同时，我们会自动为用户更新并保存数据。

  

## 结果展示

### 初始窗口

<img src="C:\Users\vlex\Desktop\fig\init.png" alt="init" style="zoom:50%;" />

### 主窗口

点击初始窗口中的"进入系统"，弹出记账系统主窗口。

<img src="fig\main.png" alt="main" style="zoom:50%;" />



#### 插入账目

点击主窗口的"插入账目"按钮，进入插入账目页面。

<img src="fig\insertwindow.png" alt="insertwindow" style="zoom:50%;" />



#### 删除帐目

点击想要删除的账目，再点击主窗口的"删除账目"按钮，即可删除该条记录。



#### 查找账目

在存储数据不为空时，点击主窗口的"查找账目"按钮，进入查找账目页面。

我们提供了日期、种类两种帅选方式。

<img src="fig\findwindow.png" alt="findwindow" style="zoom:50%;" />



#### 统计账目

点击主窗口的"统计账目"按钮，进入统计账目页面。

![calculate](C:\Users\vlex\Desktop\fig\calculate.png)



### 设置窗口

点击初始窗口中的"设置"，弹出语言设置窗口。

![settings](C:\Users\vlex\Desktop\fig\settings.png)



## Lisence

This Project is lisenced under the MIT lisence.
