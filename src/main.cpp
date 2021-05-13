#include "mainwindow.h"
#include "CoreFunctionWidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    CoreFunctionWidget ww;
//    ww.show();
    return a.exec();
}
