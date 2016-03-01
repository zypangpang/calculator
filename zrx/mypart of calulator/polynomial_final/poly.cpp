#include<poly.h>
#include<cmath>
#include<cstring>
QString IntToString(int n)
{
   int k=0,i=0;
   char ch[100];
   QString s;
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
   return s;
}

Poly * Poly::head=new Poly(0,0);  //类外定义head变量(不能写在头文件中)

void Poly:: AddPoly()
{
    Poly * t0=Poly::head;
    Poly * t=t0->next;    //对this指针进行 操作

    if(t==NULL) {this->next=t; t0->next=this;}
    int e=this->exp;
    int temp;
    while(t!=NULL)
    {
        if(e>t->exp){t=t->next;t0=t0->next;}
        else if(e==t->exp)
        {
            temp=this->coef+t->coef;
            if(temp==0) t0->next=t->next; //存在内存泄露
            else t->coef=temp;
            return;
        }
        else
        {
            this->next=t;
            t0->next=this;
            return;
        }
    }
    this->next=t; t0->next=this;return;
}

QString Poly ::toString(){      //将当前多项式转换成QString类型

    QString str;
    QString temp;
    Poly * t=(Poly::head)->next;
    if(t==NULL) return str="0";
    int num;
    while(t!=NULL)
    {
        num=t->coef;
        if(num<0)
        {
            str=str.append('-');
            num=-num;
        }
        else str=str.append('+');
        temp=IntToString(num);
        str=str.append(temp);
        num=t->exp;
        if(num==0) {t=t->next;}
        else
        {
            str=str.append('x');
            str=str.append('^');
            temp=IntToString(num);
            str=str.append(temp);
            t=t->next;
        }
    }
    return str;
}

QString Poly:: Diff()            //求导数(静态成员函数)
{
    QString str,temp;
    Poly * t=(Poly::head)->next;
    int numcoef,numexp,num;
    if(t->exp==0) t=t->next;
    while(t!=NULL)
    {
      numcoef=(t->coef)*(t->exp);
      numexp=t->exp-1;
      if(numcoef<0)
      {
          str=str.append('-');
          numcoef=-numcoef;
      }
      else str=str.append('+');
      temp=IntToString(numcoef);
      str=str.append(temp);        //!!!problem

      if(num==0) t=t->next;
      else
      {
          str=str.append('x');
          str=str.append('^');

          temp=IntToString(numexp);
          str=str.append(temp);
          t=t->next;
      }

    }
    return str;
}

/*
QString statistics ::toString(int num){
    ostringstream oss;
        oss<<num;
        string s;
       s=oss.str();
       return QString(QString::fromLocal8Bit(s.c_str()));
}*/







