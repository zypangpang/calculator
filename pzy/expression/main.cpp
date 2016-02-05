//Example of how to debug.


#include<iostream>
#include"expression.h"
using std::cout;
using std::endl;


int main()
{
    QString s="()";
    Expression e(s);
    if(!e.LegalAndCal())
        cout<<"Expression error!"<<endl;
    else
        cout<<e.GetResult()<<endl;
    QString t="3+2";
    e.SetExpression(t);
    e.LegalAndCal();
    cout<<e.GetResult()<<endl;
    return 0;
}
