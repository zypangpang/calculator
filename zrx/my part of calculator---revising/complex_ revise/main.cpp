#include "mainwindow_complex.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindowComplex w;
    w.show();

    return a.exec();
}
