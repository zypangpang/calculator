#include "nu_mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NUMainWindow w;
    w.show();

    return a.exec();
}
