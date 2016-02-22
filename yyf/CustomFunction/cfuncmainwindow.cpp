#include "cfuncmainwindow.h"
#include "ui_cfuncmainwindow.h"
#include "expression.h"
CFuncMainWindow::CFuncMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CFuncMainWindow)
{
    ui->setupUi(this);
    setWindowTitle("自定义函数");
    mainToolBar=new QToolBar(this);
    mainToolBar->setAllowedAreas(Qt::TopToolBarArea);
    actAbout=mainToolBar->addAction("关于",this,SLOT(doAbout()));
    actHelp=mainToolBar->addAction("帮助",this,SLOT(doHelp()));
    addToolBar(mainToolBar);
    mainToolBar->setFloatable(false);
    mainToolBar->setMovable(false);
  //  QRegExp regx("^[A-Za-z0-9]+$");"^[A-Z]+$"
     QRegExp regx("[A-Z_]+[A-Za-z_0-9]*");
    QValidator *validator = new QRegExpValidator(regx, ui->lineEdit_2 );
    ui->lineEdit_2->setValidator(validator);
    floatNum=6;
    state=state1;
    //selfInput=false;
}

CFuncMainWindow::~CFuncMainWindow()
{
    delete ui;
}


void CFuncMainWindow::doHelp()
{
    QMessageBox::information(this,"帮助","\n1.输入格式与表达式相同;\n"
                                       "2. 变量名由字母，数字或下划线组成，且以大写字母或下划线开头\n"
                                       "3.用界面输入带变量表达式时，变量名由按钮变量输入\n"
                                       );
}

void CFuncMainWindow::doAbout()
{
    QMessageBox::about(this,"关于","自定义函数模块:\n""设计者：杨云飞");
}

void CFuncMainWindow::Output(int state, double n){
    switch(state)
    {
    case state1:
        ui->lineEdit->setText(QString::number(n,'f',floatNum));
        break;
    case state2:
        ui->lineEdit->setText(QString::number(n,'e',floatNum));
        break;
    case state3:
        ui->lineEdit->setText(QString::number(n,'g',floatNum));
        break;
    }
}

void CFuncMainWindow::on_checkBox_stateChanged(int arg1)
{
    if(arg1==Qt::Checked)
        expression.isRad=false;
    else
        expression.isRad=true;
    QString t=ui->lineEdit->text();
    bool ok;
    double tn=t.toDouble(&ok);
    if(ok)
    {
        switch(expression.isRad)
        {
        case true:
            Output(state,tn/180*PAI);
            break;
        case false:
            Output(state,tn/PAI*180);
            break;
        }
    }
}

void CFuncMainWindow::on_checkBox_2_stateChanged(int arg1)
{
    if(arg1==Qt::Checked)
        state=state2;
    else if(arg1==Qt::Unchecked)
        state=state1;
    else
        state=state3;
    QString t=ui->lineEdit->text();
    bool ok;
    double tn=t.toDouble(&ok);
    if(ok)
    {
        Output(state,tn);
    }
}

void CFuncMainWindow::on_spinBox_valueChanged(int arg1)
{
   floatNum=arg1;
  // ui->lineEdit->setText(QString::number(floatNum));
}

void CFuncMainWindow::on_lineEdit_2_textChanged(const QString &arg1)
{

}

void CFuncMainWindow::on_checkBox_3_stateChanged(int arg1)
{
    if(arg1==Qt::Checked){
        ui->lineEdit->setReadOnly(false);
    }else
        ui->lineEdit->setReadOnly(true);
}
