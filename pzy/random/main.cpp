#include <QCoreApplication>
#include<iostream>
#include"random.h"
using std::cout;
using std::endl;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    TRandom t;
    cout<<t.tRand()<<endl;
    cout<<t.tRand(10,100)<<endl;
    cout<<t.fRand()<<endl;
    cout<<t.fRand(50,76);

    return a.exec();
}
