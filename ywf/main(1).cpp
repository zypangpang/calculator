
#include<iostream>
#include<cmath>
#include"function.h"
using namespace std;

int main()
{
    Function fun;
	cout<<fun.Sin(-PI/6)<<endl;
	cout<<fun.Sin(1)<<endl;
	cout<<fun.Acos(-1)<<endl;  
	cout<<fun.Acos(-0.5)<<endl;
	cout<<fun.Atan(1)<<endl;
	//cout<<fun.Atan2(1,1)<<endl;
	cout<<fun.Ceil(1.001)<<endl;
	cout<<fun.Ceil(-1.09)<<endl;
	cout<<fun.Exp(1)<<endl;
	cout<<fun.Fabs(-1.009)<<endl;
	cout<<fun.Floor(-0.999)<<endl;
	//cout<<fun.Frexp(1.0,p)<<endl;	
	//cout<<fun.Ldexp(9.34,9)<<endl;
	cout<<fun.Log(2)<<endl;
	cout<<fun.Log10(10)<<endl;
	cout<<fun.Log2(2)<<endl;
	//fun.Modf(2.1,&1);
	cout<<fun.Pow(2.0, 3.5)<<endl;
	cout<<fun.Sqrt(65536)<<endl;
	cout<<fun.Tan((1351*PI)/2)<<endl;
	cout<<fun.Acos(-1.5)<<endl;
	cout<<fun.Fmod(2,0)<<endl;
    return 0;

}
