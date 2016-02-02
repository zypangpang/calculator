/* you do not need to understand these definitions of functions.
 * A knowledge of how to use them is required.*/
/* But if you find any fault or unreasonable codes in this file,you can also tell me.*/

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
    int i=-1;
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
    if(i>=30) return NAN;
    Expression t(expstring.mid(m+1,e-m-1));
    if(!t.LegalAndCal())
    {
        return false;
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
     //double t=0;
     int op=0;
     for(int i=0;expstring[i]!='\0';++i)
     {
         //deal with variables:if(expstring[i].isAlpha()) using the "Variable" class
         //"Variable" class need to be completed.
         switch(expstring[i].unicode())
         {
         case '.':
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
             while((expstring[i]<='9'&&expstring[i]>='0')||expstring[i]=='.')
             {
                ++i;
             }
             QString numstring=expstring.mid(b,i-b);
             --i;
             if(!MyToDouble(numstring)) return false;
             break;
         }
         case '+':
             if(!opcal(0)) return false;
             break;
         case '-':
             if(sn.empty())
             {
                 ++i;
                 int b=i;
                 if(expstring[i]=='(')
                 {
                     while(expstring[i]!=')'&&expstring[i]!='\0')
                     {
                         ++i;
                     }
                     if(expstring[i]=='\0') return false;
                     QString temp=expstring.mid(b+1,i-b-1);
                     Expression et(temp);
                     if(!et.LegalAndCal())
                     {
                         return false;
                     }
                     sn.push(0-et.GetResult());
                 }
                 else
                 {
                    while((expstring[i]<='9'&&expstring[i]>='0')||expstring[i]=='.')
                    {
                        ++i;
                    }
                    QString numstring=expstring.mid(b-1,i-b+1);
                    --i;
                    if(!MyToDouble(numstring)) return false;
                 }
             }
             else
             {
                if(!opcal(1)) return false;
             }
             break;
         case '*':
             if(!opcal(2)) return false;
             break;
         case '/':
             if(!opcal(3)) return false;
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
             double fcresult=FunCal(begin,middle,i);
             if(fcresult==NAN) return false;
             sn.push(fcresult);
             break;
         }
         case '(':
         {
             /*int b=i;
             while(expstring[i]!=')'&&expstring[i]!='\0')
             {
                 ++i;
             }
             if(expstring[i]=='\0') return false;
             QString temp=expstring.mid(b+1,i-b-1);
             Expression et(temp);
             if(!et.LegalAndCal())
             {
                 return false;
             }
             sn.push(et.GetResult());

             break;*/
             sc.push(4);
             break;
         }
         case ')':
         {
             while(sc.size()>1&&(op=sc.top())!=4)
             {
                 if(sn.empty()) return false;
                 double m=mypop(sn);
                 if(sn.empty()) return false;
                 double n=mypop(sn);
                 sn.push(myBasicCal(n,m,op));
                 sc.pop();
             }
             sc.pop();
             if(sc.empty()) return false;
             break;
         }
         default:
             return false;
         }



     }
     while(sc.size()>1)
     {
         op=sc.top();
         if(op==4)
         {
             sc.pop();
             continue;
         }
         if(sn.empty()) return false;
         double m=mypop(sn);
         if(sn.empty()) return false;
         double n=mypop(sn);
         sn.push(myBasicCal(n,m,op));
         sc.pop();
     }
     //sc.pop();
     result=mypop(sn);
     return true;
 }

 void Expression::SetExpresion(QString s)
 {
     expstring=s;
     while(!sn.empty())
     {
         sn.pop();
     }
     while(sc.size()!=1)
     {
         sc.pop();
     }
     legal=true;
 }

 bool Expression::MyToDouble(const QString& numstring)
 {
     bool ok=false;
     double b=numstring.toDouble(&ok);
     if(!ok) return false;
     sn.push(b);
     return true;
 }

 bool Expression::opcal(int currentop)
 {
    int op=-1;
     for(op=sc.top();PRIORITY[currentop][op]<=0;op=sc.top())
     {
        if(sn.empty()) return false;
        double m=mypop(sn);
        if(sn.empty()) return false;
        double n=mypop(sn);
        sn.push(myBasicCal(n,m,op));
        sc.pop();
     }
     sc.push(currentop);
     return true;
 }
 /**************************************************************************/
 //This version makes the input of "-" more naturally. The negative operator
 //and the subtraction operator are integrated. Now you can use subtraction
 //operator to represent the negative operator.
 /**************************************************************************/





