#ifndef MEMORY_H
#define MEMORY_H

#include <iostream>
#include<QString>
#include<QStringList>
using namespace std;

class Memory
{
private:
    QStringList mem;
    int guide;

public:
    Memory();
    void input(QString str); //内嵌到等号的槽函数内，但是对表达式的正误都会存入链表内
    QString up();            //上翻按钮
    QString down();          //下翻按钮
    void clear();


};

#endif // MEMORY

