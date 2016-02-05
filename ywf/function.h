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
     double Log (double x);                 //��eΪ�׵Ķ���
     double Log2(double x);                
     double Log10(double x);
     double Ceil (double x);                      //ȡ����
     double Floor (double x);                     //ȡ����
     double Fabs (double x);
     double Fmod (double x, double y);         //������������������� 
     double Mod(double x);                    //ģPI/2����
     long Fac(int x);                           //�׳�
     void Err();                              //�����˳�
};

#endif // FUNCTION_H