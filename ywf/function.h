#ifndef FUNCTION_H
#define FUNCTION_H
#include<iostream>
using namespace std;

const double PI=3.141592653589;

class Function{
public:
     double Sin(double x);
     double Cos(double x);
     double Tan(double x);
     double Asin (double x);               
     double Acos (double x);              
     double Atan (double x);              
     double Exp (double x);
     double Pow (double x, double y);
     double Sqrt (double x);
     double Log (double x);                 //以e为底的对数
     double Log2(double x);                
     double Log10(double x);
     double Ceil (double x);                      //取上整
     double Floor (double x);                     //取下整
     double Fabs (double x);
     double Fmod (double x, double y);         //返回两参数相除的余数 
     double Mod(double x);                    //模PI/2函数
     long Fac(int x);                           //阶乘
     void Err();                              //错误退出
};

#endif // FUNCTION_H