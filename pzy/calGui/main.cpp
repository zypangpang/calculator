#include <QApplication>
#include"mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Mainwindow calc;
    calc.show();
    return app.exec();
}
