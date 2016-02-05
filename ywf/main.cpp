
#include<iostream>
#include"fraction.h"
using namespace std;

int main()
{
    Fraction fra;
    fra.Sim(2,-108);
    fra.Pri();
    fra.Add(6,5,2,9);
     fra.Pri();
	 cout<<fra.Swi()<<endl;
    fra.Sub(2,5,-1,5);
     fra.Pri();
    fra.Mul(6,2,0,5);
     fra.Pri();
    fra.Rec(3,-2);
    fra.Pri();
	fra.Div(3,6,0,4);
    return 0;

}
