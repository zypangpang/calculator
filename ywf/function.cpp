#include<iostream>
#include<cmath>
#include"function.h"

using namespace std;
double Function::Sin(double x)
{
    return sin(x);
}

double Function::Cos(double x)
{
    return cos(x);
}

double Function::Tan(double x)
{
    if(fabs(Mod(x))<0.0000000001){
        Err();
    }
    return tan(x);
}

double Function::Asin(double x)
{
    if(x<-1||x>1){
        Err();
    }
    return asin(x);
}

double Function::Acos(double x)
{
    if(x<-1||x>1){
        Err();
    }
    return acos(x);
}

double Function::Atan(double x)
{
    return atan(x);
}


double Function::Exp(double x)
{
    return exp(x);
}

double Function::Pow(double x, double y)
{
    if(x==0&&(y<=0)){
        Err();
    }
    return pow(x,y);
}

double Function::Sqrt(double x)
{
    if(x<0){
        Err();
    }
    return sqrt(x);
}

double Function::Log(double x)  
{
    if(x<=0){
        Err();
    }
    return log(x);
}

double Function::Log2(double x)
{
    if(x<=0){
        Err();
    }
    return ((log(x))/(log(2.0)));
}

double Function::Log10(double x)
{
    if(x<=0){
        Err();
    }
    return log10(x);
}

double Function::Ceil(double x)  
{
    return ceil(x);
}

double Function::Floor(double x)
{
    return floor(x);
}

double Function::Fabs(double x)
{
    return fabs(x);
}

double Function::Fmod (double x, double y)
{
	if(fabs(y)<0.0000000000001){
		Err();
	}
	return fmod(x,y);
}


double Function::Mod(double x)
{
    double y=x+PI/2;
    if(y>0){
       while(y>=PI){
        y-=PI;
       }

    }
    else{
        while(y<=-PI){
         y+=PI;
        }
    }
    return y;
}

long Function::Fac(int x)
{
    long s=1;
    for(;x>=1;--x)
        s*=x;
    return s;
}

void Function::Err()
{
    cout<<"the input is invalid!"<<endl;
	exit(-1);
}