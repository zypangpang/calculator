#include <QApplication>
#include"mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Mainwindow cal;
    cal.show();
    return app.exec();
}
