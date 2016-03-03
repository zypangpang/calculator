#include "mainwindow_poly.h"
#include "ui_mainwindow_poly.h"
#include "poly.h"

MainWindowPoly::MainWindowPoly(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowPoly)
{
    ui->setupUi(this);
    mainToolBar=new QToolBar(this);
    mainToolBar->setAllowedAreas(Qt::TopToolBarArea);
    actAbout=mainToolBar->addAction("关于",this,SLOT(doAbout()));
    actHelp=mainToolBar->addAction("帮助",this,SLOT(doHelp()));
    setWindowTitle("多项式功能");
}


void MainWindowPoly::doHelp()
{
    QMessageBox::information(this,"帮助","输入格式：\n1.先输入一个数，然后点击系数或次数按钮;\n"
                                       "2.系数和次数均为浮点数 \n"
                                       "3.系数允许是负数，次数不允许是负数\n"
                                       "示例："
                                       "2->系数按钮->6->次数按钮->结果=按钮->2x^6"
                                       "\n注意事项:\n1. 清除结果按钮将本次结果全部清空，重新开始下一次操作");
}

void MainWindowPoly::doAbout()
{
    QMessageBox::about(this,"关于","多项式模块:\n""设计者：赵瑞雪");
}

MainWindowPoly::~MainWindowPoly()
{
    delete ui;
}

QString temp;
QString tempcoef;
QString tempexp;

void MainWindowPoly::on_button1_clicked()
{
    temp=temp.append('1');
}

void MainWindowPoly::on_button2_clicked()
{
    temp=temp.append('2');
}

void MainWindowPoly::on_button3_clicked()
{
    temp=temp.append('3');
}

void MainWindowPoly::on_button0_clicked()
{
    temp=temp.append('0');
}


void MainWindowPoly::on_button4_clicked()
{
    temp=temp.append('4');
}

void MainWindowPoly::on_button5_clicked()
{
    temp=temp.append('5');
}

void MainWindowPoly::on_button6_clicked()
{
    temp=temp.append('6');
}

void MainWindowPoly::on_button8_clicked()
{
    temp=temp.append('8');
}
void MainWindowPoly::on_button9_clicked()
{
    temp=temp.append('9');
}

void MainWindowPoly::on_button7_clicked()
{
    temp=temp.append('7');
}

void MainWindowPoly::on_button_pos_clicked()
{
    temp=temp.append('.');
}

void MainWindowPoly::on_button_erasecoef_clicked()
{
    temp="";
    ui->inputcoef->setText(temp);  //将页面清空
}

void MainWindowPoly::on_button_eraseexp_clicked()
{
    temp="";
    ui->inputexp->setText(temp);   //将页面清空
}

void MainWindowPoly::on_button_answer_clicked()  //输出结果
{

    QString display;
    double numcoef=tempcoef.toDouble();    //按空格之前 先将数字保存好
    double numexp=tempexp.toDouble();
    if(numcoef!=0)
    {
    Poly * pt= new Poly(numcoef,numexp);
    pt->AddPoly();               //向多项式中增加项
    }
    temp="";                        //将temp更新为空
    display=Poly::toString();
    ui->answer->setText(display);   //显示一个字符串
}

void MainWindowPoly::on_button_coef_clicked()
{
    tempcoef=temp;
    ui->inputcoef->setText(temp);
    temp="";
}

void MainWindowPoly::on_button_exp_clicked()
{
    tempexp=temp;
    ui->inputexp->setText(temp);
    temp="";
}


void MainWindowPoly::on_button_neg_clicked()
{

     if(temp.isEmpty()){
          temp=temp.append('-');
        }
}

void MainWindowPoly::on_button_Diff_clicked()
{
    QString display;
    display=Poly::Diff();
    ui->answer->setText(display);
}

// 为什么空格键改不了 没能实现清除结果的功能 但是代码没有问题
void MainWindowPoly::on_button_delete_clicked()
{
    tempcoef="";
    tempexp="";
    ui->inputexp->setText("");
    ui->inputcoef->setText("");
    ui->answer->setText("");
}

void MainWindowPoly::on_button_erasecoef_2_clicked()
{
    tempcoef="";
    tempexp="";
    ui->inputexp->setText("");
    ui->inputcoef->setText("");
    ui->answer->setText("");
    (Poly::head)->next=NULL;              //重新开始
}

void MainWindowPoly::on_pushButton_clicked() //恢复求导之前的状态
{
    QString display;
    display=Poly::toString();
    ui->answer->setText(display);
}

