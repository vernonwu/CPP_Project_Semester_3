#include "APDFinal.h"
#include <QStyleFactory>
#include <QtWidgets/QApplication>

int language = 0;

void set_style(QApplication& a)
{
    a.setStyle(QStyleFactory::create("fusion"));
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    APDFinal w;
    set_style(a);
    w.show();
    return a.exec();
}
