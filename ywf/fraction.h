#ifndef FRACTION_H
#define FRACTION_H
#include<iostream>
class Fraction{                                            //������
private:
    int numer;                                              //����
    int denom;                                              //��ĸ
public:
    void Sim(int numer1,int denom1);                          //Լ��
    void Add(int numer1,int denom1,int numer2,int denom2);    //�ӷ�
    void Sub(int numer1,int denom1,int numer2,int denom2);    //����
    void Mul(int numer1,int denom1,int numer2,int denom2);    //�˷�
    void Div(int numer1,int denom1,int numer2,int denom2);    //����
    void Rec(int numer1,int denom1);                          //����
    double Swi();                                             //ת��������
    void Ret();                                               //�д�
    void Pri();                                               //���
};

#endif // FRACTION_H