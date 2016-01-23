//Example of how to debug.


#include<iostream>
#include"expression.h"
using std::cout;
using std::endl;


int main()
{
    QString s="-(1.3+2.3)- tan{-3.1415/4}+(-1)+1+2*(6+7)*2+.1=";
    Expression e(s);
    if(!e.LegalAndCal())
        cout<<"Expression error!"<<endl;
    else
        cout<<e.GetResult()<<endl;
    return 0;
}
