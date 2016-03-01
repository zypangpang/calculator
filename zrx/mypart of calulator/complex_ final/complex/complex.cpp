#include<complex.h>
#include<cmath>
#include<cstring>

QString IntToString(int n) //默认n是正整数
{
   int k=0,i=0;
   char ch[100];
   QString s="";    //起始为空字符串
   while(n!=0)
   {
       k=n%10;      //先得到个位数
       ch[i]='0'+k;
       i++;
       n=n/10;
   }

   for(int j=i-1;j>=0;j--)
   {
       s=s.append(ch[j]);
   }
   return s;     // 别忘记 return语句
}

QString Complex::ComplexToString(Complex f)
{
    QString s="";
    QString s1;
    QString s2;
    if(f.real==0 && f.virtul==0) {s=s.append('0');return s;}
   if(f.real<0){ s=s.append('-');s1=IntToString(-f.real);}
    else { s1=IntToString(f.real);}
    s=s.append(s1);

    if(f.virtul<0)
    { s=s.append('-');s2=IntToString(-f.virtul);s=s.append(s2);s=s.append('i');}
    else if(f.virtul==0){return s;}
         else {s=s.append('+');s2=IntToString(f.virtul); s=s.append(s2);s=s.append('i');}
    return s;
    /*

    if(f.real<0){ s=s.append('-');s1=QString::number(-f.real,'g',6);}
      else { s1=QString::number(f.real,'g',6);}
      s=s.append(s1);

      if(f.virtul<0)
      { s=s.append('-');s2=QString::number(-f.virtul,'g',6); s=s.append(s2);s=s.append('i');}
      else if(f.virtul==0){return s;}
           else {s=s.append('+');s2=QString::number(f.virtul,'g',6); s=s.append(s2);s=s.append('i');}
      return s;*/
}

Complex Complex::Add(Complex f)
{
    real=real+f.real;
    virtul=virtul+f.virtul;
    return (* this);
}

Complex& Complex::Multi(Complex f)
{
    int r=real;
    real=real*f.real-virtul*f.virtul;  //调试了好几个小时 竟然是一个非常愚蠢的错误 real的值已经更改了 就不能用了
    virtul=r*f.virtul+f.real*virtul;

    return ( *this);
}

QString Complex:: Div(Complex f)
{
    double d,d1,d2;
    QString s="";
    QString s1;
    QString s2;
    d=f.real*f.real+f.virtul*f.virtul;
    d1=(real*f.real+f.virtul*virtul)*1.0/d;
    d2=(-real*f.virtul+virtul*f.real)*1.0/d;

    if(d1<0){ s=s.append('-');s1=QString::number(-d1,'g',6);}
    else { s1=QString::number(d1,'g',6);}
    s=s.append(s1);

    if(d2<0){ s=s.append('-');s2=QString::number(-d2,'g',6);s=s.append(s2);s=s.append('i');}
    else if(d2==0){return s;}
    else
    { s=s.append('+');s2=QString::number(d2,'g',6);s=s.append(s2);s=s.append('i');}

    return s;
}

double Complex::Model()
{
    double d;
    d=real*real+virtul*virtul;
    d=sqrt(d);
    return d;
}
