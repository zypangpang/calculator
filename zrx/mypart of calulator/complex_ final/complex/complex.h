#ifndef COMPLEX_H
#define COMPLEX_H

#include<iostream>
#include<algorithm>
#include<cstdio>
#include<QString>

class Complex
{
public:
    Complex(int r,int v):real(r),virtul(v){}
    ~Complex(){}
    Complex Add(Complex);
    Complex& Multi(Complex);
    QString Div(Complex);
    double Model();
    static QString ComplexToString(Complex);

    int real;     //实数
    int virtul;      //虚数
};

#endif // COMPLEX_H

