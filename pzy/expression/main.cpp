//Example of how to debug.


#include<iostream>
#include"expression.h"
using std::cout;
using std::endl;


int main()
{
    QString s=".5*29+( tan{5+60}- sin{6+70})/10";
    Expression e(s);
    if(!e.LegalAndCal())
        cout<<"Expression error!"<<endl;
    else
        cout<<e.GetResult()<<endl;
    return 0;
}
