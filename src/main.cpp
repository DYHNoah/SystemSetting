#include "mainwindow.h"
#include "CrystalWidget.h"
#include "CoreFunctionWidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //w.show();
    CrystalWidget www;
    www.show();
    return a.exec();
}
