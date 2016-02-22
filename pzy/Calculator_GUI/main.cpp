#include <QApplication>
#include"mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setWindowIcon(QIcon(":/image/cal_icon"));
    Mainwindow cal;
    cal.show();
    return app.exec();
}
