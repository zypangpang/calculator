#ifndef FRACTION_H
#define FRACTION_H
#include<iostream>
class Fraction{                                            //分数类
private:
    int numer;                                              //分子
    int denom;                                              //分母
public:
    void Sim(int numer1,int denom1);                          //约分
    void Add(int numer1,int denom1,int numer2,int denom2);    //加法
    void Sub(int numer1,int denom1,int numer2,int denom2);    //减法
    void Mul(int numer1,int denom1,int numer2,int denom2);    //乘法
    void Div(int numer1,int denom1,int numer2,int denom2);    //除法
    void Rec(int numer1,int denom1);                          //求倒数
    double Swi();                                             //转换浮点数
    void Ret();                                               //判错
    void Pri();                                               //输出
};

#endif // FRACTION_H