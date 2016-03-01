#include "sdf_dialog.h"
#include "ui_sdf_dialog.h"
#include<QDoubleSpinBox>
#include<QtWidgets>
#include<cmath>
using namespace std;
SDF_Dialog::SDF_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SDF_Dialog)
{
    ui->setupUi(this);
    QRegExp regx("[A-Z_]+[A-Za-z_0-9]*");
    QValidator *validator = new QRegExpValidator(regx, ui->lineEdit );
    ui->lineEdit->setValidator(validator);
    floatNum=6;
    state=state1;
}

SDF_Dialog::~SDF_Dialog()
{
    delete ui;
}

QString SDF_Dialog:: toString(double num){
    ostringstream oss;
        oss<<num;
        string s;
       s=oss.str();
       return QString(QString::fromLocal8Bit(s.c_str()));
}

void SDF_Dialog::Output(int state, double n){
    switch(state)
    {
    case state1:
        ui->lineEdit_3->setText(QString::number(n,'f',floatNum));
        break;
    case state2:
        ui->lineEdit_3->setText(QString::number(n,'e',floatNum));
        break;
    case state3:
        ui->lineEdit_3->setText(QString::number(n,'g',floatNum));
        break;
    }
}

QString SDF_Dialog::trans(QString s){
    QString exp=ui->lineEdit->text();
    if(!exp.isEmpty()){
        int n=s.count(exp);
        double num=ui->doubleSpinBox_22->value();
        for(int i=0;i<n;i++){
            int loc=s.indexOf(exp);
            s.replace(loc,exp.size(),toString(num));
        }
    }
    return s;
}

void SDF_Dialog::on_pushButton_2_clicked()
{

    QString tem=ui->lineEdit_2->text();
    QString t=trans(tem);       //??
    expression.SetExpression(t);
    if(expression.LegalAndCal())
    {
        double tresult=expression.GetResult();
        if(tresult!=tresult||tresult+1==tresult)
            ui->lineEdit_2->setText("表达式错误或数值溢出！");
        else
            Output(state,expression.GetResult());    //::
    }
    else
    {
       ui->lineEdit_2->setText("表达式错误或数值溢出！");
    }
}

void SDF_Dialog::on_checkBox_stateChanged(int arg1)
{
    if(arg1==Qt::Checked)
        expression.isRad=false;
    else
        expression.isRad=true;
    QString t=ui->lineEdit_3->text();
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

void SDF_Dialog::on_checkBox_2_stateChanged(int arg1)
{
    if(arg1==Qt::Checked)
        state=state2;
    else if(arg1==Qt::Unchecked)
        state=state1;
    else
        state=state3;
    QString t=ui->lineEdit_3->text();
    bool ok;
    double tn=t.toDouble(&ok);
    if(ok)
    {
        Output(state,tn);
    }
}

void SDF_Dialog::on_spinBox_valueChanged(int arg1)
{
    floatNum=arg1;
}

void SDF_Dialog::on_pushButton_clicked()
{
    QMessageBox::information(this,"帮助","表达式的输入格式参见高级模式帮助内容(可带变量)，\n"
                                       "变量名由字母数字或下划线构成，由大写字母或下划线开头，\n"
                                       "格式控制选项与高级模式格式控制用法类似，\n"
                                       "示例：变量名：Price 变量值：2.00\n"
                                       "表达式：4*Price^2+2*Price+ sin(1.3)");
}
