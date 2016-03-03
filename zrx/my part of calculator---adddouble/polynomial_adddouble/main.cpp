#include "mainwindow_poly.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindowPoly w;
    w.show();

    return a.exec();
}
