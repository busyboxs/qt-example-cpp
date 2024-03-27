#include "QtCMakeDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtCMakeDemo w;
    w.show();
    return a.exec();
}
