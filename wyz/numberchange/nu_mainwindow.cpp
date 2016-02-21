#include "nu_mainwindow.h"
#include "ui_NUMainWindow.h"
#include "numberchange.h"
#include<QString.h>


NUMainWindow::NUMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NUMainWindow)
{
   ui->setupUi(this);
    mainToolBar=new QToolBar(this);
    mainToolBar->setAllowedAreas(Qt::TopToolBarArea);
    actAbout=mainToolBar->addAction("关于",this,SLOT(doAbout()));
    actHelp=mainToolBar->addAction("帮助",this,SLOT(doHelp()));
    setWindowTitle("进制转换功能");
}

void NUMainWindow::doHelp()
{
    QMessageBox::information(this,"帮助","输入格式：\n1.只支持正整数转换\n"
                                       "2. 按照按键提示完成转换后的数字显示\n"
                                       "3.每次改变数据后需重新按清除功能键来清除\n");

}

void NUMainWindow::doAbout()
{
    QMessageBox::about(this,"关于","进制模块:设计者：王钰昭");
}

NUMainWindow::~NUMainWindow()
{
    delete ui;
}
numberchange s;

QString temp;
QString display;
void NUMainWindow::on_button1_clicked()
{

    display=display.append('1');
    ui->lineEdit->setText(display);
}

void NUMainWindow::on_button2_clicked()
{

    display=display.append('2');
    ui->lineEdit->setText(display);
}

void NUMainWindow::on_button3_clicked()
{

    display=display.append('3');
    ui->lineEdit->setText(display);
}

void NUMainWindow::on_button0_clicked()
{

    display=display.append('0');
    ui->lineEdit->setText(display);
}


void NUMainWindow::on_button4_clicked()
{

    display=display.append('4');
    ui->lineEdit->setText(display);
}

void NUMainWindow::on_button5_clicked()
{

    display=display.append('5');
    ui->lineEdit->setText(display);
}


void NUMainWindow::on_button6_clicked()
{

    display=display.append('6');
    ui->lineEdit->setText(display);
}

void NUMainWindow::on_button7_clicked()
{

    display=display.append('7');
    ui->lineEdit->setText(display);
}

void NUMainWindow::on_button8_clicked()
{

    display=display.append('8');
    ui->lineEdit->setText(display);
}
void NUMainWindow::on_button9_clicked()
{
    display=display.append('9');
    ui->lineEdit->setText(display);
}





void NUMainWindow::on_button_erase_clicked()
{
     display.clear();
     display.isEmpty();
     s.cleanStr();
       ui->lineEdit->setText("0");

}


void NUMainWindow::on_button_tenTwo_clicked()
{

    QString t=ui->lineEdit->text();
   int n=display.toInt();
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

