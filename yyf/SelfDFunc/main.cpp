#include "sdf_dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SDF_Dialog w;
    w.show();

    return a.exec();
}
