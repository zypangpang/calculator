#include<iostream>
#include"fraction.h"
using namespace std;


//此函数为输出测试(使用了控制台输出）
void Fraction::Pri()
{
	if(numer==0||denom==1)
		cout<<numer<<endl;
	else
        cout<<numer<<"/"<<denom<<endl;
}
//判错测试函数（同上）
void Fraction::Ret()
{
    cout<<"除数不合法！"<<endl;
    //exit(1);

}


double Fraction::Swi (){

    return ((double) numer/denom);
}

void Fraction::Sim(int numer1, int denom1)
{
    if(denom1==0){
        Ret();
        return ;
    }
    int r=numer1%denom1;
    int numer2=numer1;
    int denom2=denom1;
    while(r!=0){
        numer2=denom2;
        denom2=r;
        r=numer2%denom2;
    }
    numer=numer1/denom2;
    denom=denom1/denom2;
	if(numer*denom<0&&numer>0){
		numer=(-1)*numer;
		denom=(-1)*denom;
	}
    return ;
}


void Fraction::Add(int numer1, int denom1, int numer2, int denom2)
{
    if(denom1==0||denom2==0){
        Ret();
        return ;
    }
    numer1=numer1*denom2;
    numer2=numer2*denom1;
    numer=numer1+numer2;
    denom=denom1*denom2;
    Sim(numer,denom);
    return ;

}


void Fraction::Sub(int numer1, int denom1, int numer2, int denom2)
{
    if(denom1==0||denom2==0){
        Ret();
        return ;
    }
    numer1=numer1*denom2;
    numer2=numer2*denom1;
    numer=numer1-numer2;
    denom=denom1*denom2;
    Sim(numer,denom);
    return ;

}

void Fraction::Mul(int numer1, int denom1, int numer2, int denom2)
{
    if(denom1==0||denom2==0){
        Ret();
        return ;
    }
    numer=numer1*numer2;
    denom=denom1*denom2;
    Sim(numer,denom);
    return ;

}

void Fraction::Div(int numer1, int denom1, int numer2, int denom2)
{
    if(denom1==0||denom2==0||numer2==0){
        Ret();
        return ;
    }
    Mul(numer1,denom1,denom2,numer2);
    return ;

}

void Fraction::Rec(int numer1, int denom1)
{
    if(denom1==0||numer1==0){
        Ret();
        return ;
    }
    Sim(denom1,numer1);
    return ;
}
