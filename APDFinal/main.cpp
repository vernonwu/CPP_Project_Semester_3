#include "APDFinal.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    APDFinal w;
    w.show();
    return a.exec();
}
