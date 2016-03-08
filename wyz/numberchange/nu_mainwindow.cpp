#include "nu_mainwindow.h"
#include "ui_NUMainWindow.h"
#include "numberchange.h"
#include<QString.h>


NUMainWindow::NUMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NUMainWindow)
{
   ui->setupUi(this);

    setWindowTitle("进制转换功能");
}




NUMainWindow::~NUMainWindow()
{
    delete ui;
}
numberchange s;

QString tem;
QString disp;
void NUMainWindow::on_button1_clicked()
{

    disp=disp.append('1');
    ui->lineEdit->setText(disp);
}

void NUMainWindow::on_button2_clicked()
{

    disp=disp.append('2');
    ui->lineEdit->setText(disp);
}

void NUMainWindow::on_button3_clicked()
{

    disp=disp.append('3');
    ui->lineEdit->setText(disp);
}

void NUMainWindow::on_button0_clicked()
{

    disp=disp.append('0');
    ui->lineEdit->setText(disp);
}


void NUMainWindow::on_button4_clicked()
{

    disp=disp.append('4');
    ui->lineEdit->setText(disp);
}

void NUMainWindow::on_button5_clicked()
{

    disp=disp.append('5');
    ui->lineEdit->setText(disp);
}


void NUMainWindow::on_button6_clicked()
{

    disp=disp.append('6');
    ui->lineEdit->setText(disp);
}

void NUMainWindow::on_button7_clicked()
{

    disp=disp.append('7');
    ui->lineEdit->setText(disp);
}

void NUMainWindow::on_button8_clicked()
{

    disp=disp.append('8');
    ui->lineEdit->setText(disp);
}
void NUMainWindow::on_button9_clicked()
{
    disp=disp.append('9');
    ui->lineEdit->setText(disp);
}





void NUMainWindow::on_button_erase_clicked()
{
     disp.clear();
     disp.isEmpty();
     s.cleanStr();
       ui->lineEdit->setText("0");

}


void NUMainWindow::on_button_tenTwo_clicked()
{

    QString t=ui->lineEdit->text();
   int n=disp.toInt();
   string x=s.tenTwo(n);
   s.cleanStr();
  ui->lineEdit->setText(QString::fromStdString(x));


}



void NUMainWindow::on_button_tenEight_clicked()
{

   QString t=ui->lineEdit->text();
   int n=t.toInt();
   string x=s.tenEight(n);
   s.cleanStr();
    ui->lineEdit->setText(QString::fromStdString(x));


}


void NUMainWindow::on_button_tenSixteen_clicked()
{
    QString t=ui->lineEdit->text();
    int n=t.toInt();
    string x=s.tenSixteen(n);
    s.cleanStr();
    ui->lineEdit->setText(QString::fromStdString(x));


}

void NUMainWindow::on_button_twoTen_clicked()
{
    QString t=ui->lineEdit->text();
    int n=t.toInt();
    int x=s.twoTen(n);
    s.cleanStr();
    if(x==-1){ui->lineEdit->setText("Your input is malformed!");}
    else ui->lineEdit->setText(QString::number(x));
}


void NUMainWindow::on_button_twoEight_clicked()
{
    QString t=ui->lineEdit->text();
    int n=t.toInt();
   int x=s.twoEight(n);
   s.cleanStr();
   if(x==-1){ui->lineEdit->setText("Your input is malformed!");}
   else ui->lineEdit->setText(QString::number(x));
}

void NUMainWindow::on_button_twoSixteen_clicked()
{
    QString t=ui->lineEdit->text();
    int n=t.toInt();
    string x=s.twoSixteen(n);
    s.cleanStr();
    if(x=="error"){ui->lineEdit->setText("Your input is malformed!");}
    else ui->lineEdit->setText(QString::fromStdString(x));

}




void NUMainWindow::on_button_eightTwo_clicked()
{
    QString t=ui->lineEdit->text();
    int n=t.toInt();
    string x=s.eightTwo(n);
    s.cleanStr();
    if(x=="error"){ui->lineEdit->setText("Your input is malformed!");}
    else ui->lineEdit->setText(QString::fromStdString(x));
}

void NUMainWindow::on_button_eightTen_clicked()
{
    QString t=ui->lineEdit->text();
    int n=t.toInt();
   int x=s.eightTen(n);
   s.cleanStr();
   if(x==-1){ui->lineEdit->setText("Your input is malformed!");}
   else ui->lineEdit->setText(QString::number(x));
}

void NUMainWindow::on_button_eightSixteen_clicked()
{
    QString t=ui->lineEdit->text();
    int n=t.toInt();
    string x=s.eightSixteen(n);
    s.cleanStr();
    if(x=="error"){ui->lineEdit->setText("Your input is malformed!");}
    else ui->lineEdit->setText(QString::fromStdString(x));

}

void NUMainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this,"帮助","输入格式：\n1.只支持正整数转换\n"
                                       "2. 按照按键提示完成转换后的数字显示\n"
                                       "3.每次改变数据后需重新按清除功能键来清除\n");
}
