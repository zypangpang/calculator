#ifndef POLY_H
#define POLY_H

#include<iostream>
#include<algorithm>
#include<cstdio>
#include<QString>

class Poly
{
public:
    Poly(int c,int e):coef(c),exp(e){next=NULL;}
    ~Poly(){}
    void AddPoly();  //向已有多项式中增加一项
    static QString toString();
    static QString Diff(); //多项式求导
    static Poly * head;   //整个类共有的头指针
    Poly * next;
private:
    int coef;     //系数
    int exp;      //指数
};


#endif // POLY_H

