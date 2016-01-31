
#ifndef EXPRESSION
#define EXPRESSION
#include <QString>
#include <stack>
#include <queue>
using std::stack;
const QString function[3]=
{
    "sin",
    "cos",
    "tan"
};//Function array which can be added.
const int PRIORITY[4][5]=
{
    {0,0,-1,-1,1},
    {0,0,-1,-1,1},
    {1,1,0,0,1},
    {1,1,0,0,1},
};
class Expression
{
public:
    Expression(QString s=""):expstring(s),legal(true),result(0){sc.push(4);}
    bool LegalAndCal();//judge the validity of the expression and calculate,but now the judgement hasn't been finished.
    double GetResult(){return result;}
    void SetExpresion(QString s);
    void ResetExpresion(){expstring="";}
private:
    bool MyToDouble(const QString&);
    bool opcal(int currentop);
    double myBasicCal(double,double,int);//calculation of "+,-,*,/"
    double FunCal(int b, int m, int e);//function calculation
    double mypop(stack<double>& s){double t=s.top();s.pop();return t;}//just an enhanced pop
    //bool ComPri(char a,char b);
    stack<double> sn;
    stack<int> sc;
    QString expstring;//QString is similar to string.
    bool legal;
    double result;

};

#endif // EXPRESSION

