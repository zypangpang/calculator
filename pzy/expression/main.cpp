//Example of how to debug.


#include<iostream>
#include"expression.h"
using std::cout;
using std::endl;


int main()
{
    QString s="-1- 2{-3.1415/4}+(-1)+1+2*(6+7)*2=";
    Expression e(s);
    e.LegalAndCal();
    cout<<e.GetResult()<<endl;
    return 0;
}
