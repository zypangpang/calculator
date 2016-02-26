
#include "memory.h"


Memory::Memory()
{
    guide=-1;
}


void Memory::input(QString str)
{
    guide=mem.size();

    mem.append(str);


}

QString Memory::up()
{
    if(guide==-1)
        return "0";
    if(guide-1>=0)
        --guide;
    return mem[guide];

}

QString Memory::down()
{
    if(guide==-1)
        return "0";
   // QString error;
    if(guide+1<mem.size())
        ++guide;
    if(guide<0)
    {
        guide=0;
    }
    return mem[guide];
    /*if(mem.size()>guide){
        return mem[guide];
    }
    else{
        error="已无表达式！";
        return error;
    }*/


}
void Memory::clear()
{
    mem.clear();
    guide=-1;
}
