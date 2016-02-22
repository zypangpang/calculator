#include "cfuncmainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CFuncMainWindow w;
    w.show();

    return a.exec();
}
