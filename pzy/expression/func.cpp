/* you do not need to understand these definitions of functions.
 * A knowledge of how to use them is required.*/
/* But if you find any fault or unreasonable code in this file,you can also tell me.*/

#include<math.h>
#include"expression.h"

/*Expression::Expression(QString s)
{
    expstring=s;
    legal=true;
    result=0;
}*/

double Expression::myBasicCal(double a,double b,int op)
{
    switch(op)
    {
    case 0:
        return a+b;
    case 1:
        return a-b;
    case 2:
        return a*b;
    case 3:
        return a/b;
    }
}
double Expression::FunCal(int b,int m,int e)
{
    int i=0;
    for( i=0;i<30;++i)
    {
        int j=0;
        for( j=b+1;j<m;++j)
        {
            if(function[i][j-b-1]!=expstring[j])
                break;
        }
        if(j>=m)
            break;
    }
    Expression t(expstring.mid(m+1,e-m-1));
    if(!t.LegalAndCal())
    {
        //error information
    }
    switch(i)
    {
    case 0:
        return sin(t.GetResult());
    case 1:
        return cos(t.GetResult());
    case 2:
        return tan(t.GetResult());

    }
}

/*bool Expression::ComPri(char a, char b)
{
    int i=0,j=0;
    switch(a)
    {
    case '+':
        i=0;
        break;
    case '-':
        i=1;
        break;
    case '*':
        i=2;
        break;
    case '/':
        i=3;
        break;
    }
    switch(b)
    {
    case '+':
        j=0;
        break;
    case '-':
        j=1;
        break;
    case '*':
        j=2;
        break;
    case '/':
        j=3;
        break;
    }
    if(PRIORITY[i][j]>0)
        return true;
    else
        return false;
}*/

 bool Expression::LegalAndCal()
 {
     double t=0;
     int op=0;
     for(int i=0;expstring[i]!='\0';++i)
     {
         //t=0;
         switch(expstring[i].unicode())
         {
         case '0':
         case '1':
         case '2':
         case '3':
         case '4':
         case '5':
         case '6':
         case '7':
         case '8':
         case '9':
         {
             int b=i;
             while(expstring[i]<='9'&&expstring[i]>='0'||expstring[i]=='.')
             {
                ++i;
             }
             QString numstring=expstring.mid(b,i-b);
             --i;
             sn.push(numstring.toDouble());
             break;
         }
         case '+':

             for(op=sc.top();PRIORITY[0][op]<=0;op=sc.top())
             {
                double m=mypop(sn);
                double n=mypop(sn);
                sn.push(myBasicCal(n,m,op));
                sc.pop();
             }
             sc.push(0); 
             break;
         case '-':
              for(op=sc.top();PRIORITY[1][op]<=0;op=sc.top())
             {
                double m=mypop(sn);
                double n=mypop(sn);
                sn.push(myBasicCal(n,m,op));
                sc.pop();
             }

             sc.push(1);
             break;
         case '*':
              for(op=sc.top();PRIORITY[2][op]<=0;op=sc.top())
             {
                double m=mypop(sn);
                double n=mypop(sn);
                sn.push(myBasicCal(n,m,op));
                 sc.pop();
             }

             sc.push(2);
             break;
         case '/':
             for(op=sc.top();PRIORITY[2][op]<=0;op=sc.top())
             {
                double m=mypop(sn);
                double n=mypop(sn);
                sn.push(myBasicCal(n,m,op));
                sc.pop();
             }

             sc.push(3);
             break;
         case ' ':
         {
             int begin=i,middle=0;
             while(expstring[i]!='}')
             {
                 if(expstring[i]=='{')
                 {
                     middle=i;
                 }
                 ++i;
             }
             sn.push(FunCal(begin,middle,i));
             break;
         }
         case '(':
             sc.push(4);
             break;
         case ')':
             while((op=sc.top())!=4)
             {
                 double m=mypop(sn);
                 double n=mypop(sn);
                 sn.push(myBasicCal(n,m,op));
                 sc.pop();
             }
             sc.pop();
             break;   
         }

     }
     while((op=sc.top())!=4)
     {
         double m=mypop(sn);
         double n=mypop(sn);
         sn.push(myBasicCal(n,m,op));
         sc.pop();
     }
     sc.pop();
     result=mypop(sn);
     //need to complete!
     return true;
 }
 /*The negative number can be accomplished in the following way:
  * when users press the "-"(not the subtraction key), the screen doesn't display a "0"
  * before it, but there will be a "0" in the internal string.*/





