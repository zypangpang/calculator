
#ifndef EXPRESSION
#define EXPRESSION
#include <QString>
#include <stack>
#include <queue>
const int FuncNumber=15;
using std::stack;
const QString function[FuncNumber]=
{
    "sin",
    "cos",
    "tan",
    "arcsin",
    "arccos",
    "arctan",
    "exp",
    "sqrt",
    "ln",
    "log10",
    "ceil",
    "floor",
    "abs",
    "fac",
    "log2"
};//Function array which can be added.
const int PRIORITY[7][7]=
{  // +  -  *  /  (  ^  %
    { 0, 0,-1,-1, 1,-1,-1},//+
    { 0, 0,-1,-1, 1,-1,-1},//-
    { 1, 1, 0, 0, 1,-1, 0},//*
    { 1, 1, 0, 0, 1,-1, 0},//÷
    {-1,-1,-1,-1, 0,-1,-1},//(
    { 1, 1, 1, 1, 1, 1, 1},//^
    { 1, 1, 0, 0, 1,-1, 0} //%
};
class Expression
{
public:
    Expression(QString s=""):expstring(s),legal(true),result(0){sc.push(4);}
    bool LegalAndCal();//judge the validity of the expression and calculate,but now the judgement hasn't been finished.
    double GetResult(){return result;}
    void SetExpression(QString s);
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

