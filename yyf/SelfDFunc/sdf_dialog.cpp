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
    setWindowTitle("自定义函数");
    setMaximumSize(422,301);
    setMinimumSize(422,301);
}

SDF_Dialog::~SDF_Dialog()
{
    delete ui;
}

int func[funcNum];
QString display;
QString expre;
//double num=1.0;
QString SDF_Dialog:: toString(double num){
    ostringstream oss;
        oss<<num;
        string s;
       s=oss.str();
       return QString(QString::fromLocal8Bit(s.c_str()));
}

QString SDF_Dialog::trans(QString str,double num,int a[]){

    for(int j=0;j<a[0];j++){
        int loc=str.indexOf(funcname[0]);
        QString t=toString(1/num);
        str.replace(loc,3,t);
    }
    for(int j=0;j<a[1];j++){
        int loc=str.indexOf(funcname[1]);
        QString t=toString(num*num);
        str.replace(loc,3,t);
    }
    for(int j=0;j<a[2];j++){
        int loc=str.indexOf(funcname[2]);
        QString t=toString(num*num*num);
        str.replace(loc,3,t);
    }
    for(int j=0;j<a[3];j++){
        int loc=str.indexOf(funcname[3]);
        QString t=toString(sqrt(num));
        str.replace(loc,7,t);
    }
    for(int j=0;j<a[4];j++){
        int loc=str.indexOf(funcname[4]);                //三角函数
        double de=sin(num);
        QString t=toString(de);
        str.replace(loc,4,t);
    }
    for(int j=0;j<a[5];j++){
        int loc=str.indexOf(funcname[5]);               //三角函数
        QString t=toString(cos(num));
        str.replace(loc,4,t);
    }
    for(int j=0;j<a[6];j++){
        int loc=str.indexOf(funcname[6]);                    //三角函数
        QString t=toString(tan(num));
        str.replace(loc,4,t);
    }
    for(int j=0;j<a[7];j++){
        int loc=str.indexOf(funcname[7]);
        QString t=toString(fabs(num));
        str.replace(loc,6,t);
    }
    for(int j=0;j<a[8];j++){
        int loc=str.indexOf(funcname[8]);
        QString t=toString(exp(num));
        str.replace(loc,3,t);
    }
    for(int j=0;j<a[9];j++){
        int loc=str.indexOf(funcname[9]);
        QString t=toString(log(num));
        str.replace(loc,3,t);
    }
    return str;
}


void SDF_Dialog::on_doubleSpinBox_valueChanged(double arg1)
{
    ui->label_6->setText(QString::number(arg1 *( ui->doubleSpinBox_3->value())+ui->doubleSpinBox_2->value()));
}

void SDF_Dialog::on_doubleSpinBox_2_valueChanged(double arg1)
{
    ui->label_6->setText(QString::number(ui->doubleSpinBox->value() *( ui->doubleSpinBox_3->value())+arg1));
}


void SDF_Dialog::on_doubleSpinBox_3_valueChanged(double arg1)
{
    ui->label_6->setText(QString::number(arg1 *( ui->doubleSpinBox->value())+ui->doubleSpinBox_2->value()));
}

void SDF_Dialog::on_doubleSpinBox_4_valueChanged(double arg1)
{
    double num=arg1*(ui->doubleSpinBox_7->value())*(ui->doubleSpinBox_7->value());
    num=num+ui->doubleSpinBox_5->value()*(ui->doubleSpinBox_7->value())+ui->doubleSpinBox_6->value();
    ui->label_12->setText(QString::number(num));
}

void SDF_Dialog::on_doubleSpinBox_5_valueChanged(double arg1)
{
    double num=ui->doubleSpinBox_4->value()*(ui->doubleSpinBox_7->value())*(ui->doubleSpinBox_7->value());
    num=num+arg1*(ui->doubleSpinBox_7->value())+ui->doubleSpinBox_6->value();
    ui->label_12->setText(QString::number(num));
}

void SDF_Dialog::on_doubleSpinBox_6_valueChanged(double arg1)
{
    double num=ui->doubleSpinBox_4->value()*(ui->doubleSpinBox_7->value())*(ui->doubleSpinBox_7->value());
    num=num+ui->doubleSpinBox_5->value()*(ui->doubleSpinBox_7->value())+arg1;
    ui->label_12->setText(QString::number(num));
}

void SDF_Dialog::on_doubleSpinBox_7_valueChanged(double arg1)
{
    double num=ui->doubleSpinBox_4->value()*arg1*arg1;
    num=num+ui->doubleSpinBox_5->value()*arg1+(ui->doubleSpinBox_6->value());
    ui->label_12->setText(QString::number(num));
}

void SDF_Dialog::on_doubleSpinBox_8_valueChanged(double arg1)
{
    double mo=ui->doubleSpinBox_9->value()*arg1+(ui->doubleSpinBox_10->value());
    double demo=ui->doubleSpinBox_9->value()*ui->doubleSpinBox_11->value()+(ui->doubleSpinBox_12->value());
    ui->label_17->setText(QString::number(mo/demo));
}

void SDF_Dialog::on_doubleSpinBox_10_valueChanged(double arg1)
{
    double mo=ui->doubleSpinBox_9->value()*(ui->doubleSpinBox_8->value())+arg1;
    double demo=ui->doubleSpinBox_9->value()*ui->doubleSpinBox_11->value()+(ui->doubleSpinBox_12->value());
    ui->label_17->setText(QString::number(mo/demo));
}


void SDF_Dialog::on_doubleSpinBox_11_valueChanged(double arg1)
{
    double mo=ui->doubleSpinBox_9->value()*(ui->doubleSpinBox_8->value())+ui->doubleSpinBox_10->value();
    double demo=ui->doubleSpinBox_9->value()*arg1+(ui->doubleSpinBox_12->value());
    ui->label_17->setText(QString::number(mo/demo));
}

void SDF_Dialog::on_doubleSpinBox_12_valueChanged(double arg1)
{
    double mo=ui->doubleSpinBox_9->value()*(ui->doubleSpinBox_8->value())+ui->doubleSpinBox_10->value();
    double demo=ui->doubleSpinBox_9->value()*(ui->doubleSpinBox_11->value())+arg1;
    ui->label_17->setText(QString::number(mo/demo));
}

void SDF_Dialog::on_doubleSpinBox_9_valueChanged(double arg1)
{
    double mo=arg1*(ui->doubleSpinBox_8->value())+ui->doubleSpinBox_10->value();
    double demo=arg1*(ui->doubleSpinBox_11->value())+ui->doubleSpinBox_12->value();
    ui->label_17->setText(QString::number(mo/demo));
}

void SDF_Dialog::on_doubleSpinBox_13_valueChanged(double arg1)
{
    double num=pow(arg1,ui->doubleSpinBox_14->value());
    ui->label_23->setText(QString::number(num));
}

void SDF_Dialog::on_doubleSpinBox_14_valueChanged(double arg1)
{
    double num=pow(ui->doubleSpinBox_13->value(),arg1);
    ui->label_23->setText(QString::number(num));
}

void SDF_Dialog::on_doubleSpinBox_15_valueChanged(double arg1)
{
    double num=log(ui->doubleSpinBox_16->value())/log(arg1);
    ui->label_28->setText(QString::number(num));
}


void SDF_Dialog::on_doubleSpinBox_16_valueChanged(double arg1)
{
    double num=log(arg1)/log(ui->doubleSpinBox_15->value());
    ui->label_28->setText(QString::number(num));
}

void SDF_Dialog::on_doubleSpinBox_17_valueChanged(double arg1)
{
    double num=pow(arg1,ui->doubleSpinBox_18->value());
    ui->label_32->setText(QString::number(num));
}

void SDF_Dialog::on_doubleSpinBox_18_valueChanged(double arg1)
{
    double num=pow(arg1,ui->doubleSpinBox_17->value());
    ui->label_32->setText(QString::number(num));
}

void SDF_Dialog::on_doubleSpinBox_19_valueChanged(double arg1)            //三角函数
{
    double num=arg1*sin(ui->doubleSpinBox_20->value()*ui->doubleSpinBox_21->value());
    ui->label_89->setText(QString::number(num));
}

void SDF_Dialog::on_doubleSpinBox_20_valueChanged(double arg1)          //三角函数
{
    double num=ui->doubleSpinBox_19->value()*sin(arg1*ui->doubleSpinBox_21->value());
    ui->label_89->setText(QString::number(num));
}

void SDF_Dialog::on_doubleSpinBox_21_valueChanged(double arg1)           //三角函数
{
    double num=ui->doubleSpinBox_19->value()*sin(arg1*ui->doubleSpinBox_20->value());
    ui->label_89->setText(QString::number(num));
}

void SDF_Dialog::on_doubleSpinBox_43_valueChanged(double arg1)          //三角函数
{
    double num=arg1*cos(ui->doubleSpinBox_44->value()*ui->doubleSpinBox_45->value());
    ui->label_96->setText(QString::number(num));
}

void SDF_Dialog::on_doubleSpinBox_44_valueChanged(double arg1)          //三角函数
{
    double num=ui->doubleSpinBox_43->value()*cos(arg1*ui->doubleSpinBox_45->value());
    ui->label_96->setText(QString::number(num));
}

void SDF_Dialog::on_doubleSpinBox_45_valueChanged(double arg1)           //三角函数
{
    double num=ui->doubleSpinBox_43->value()*cos(arg1*ui->doubleSpinBox_44->value());
    ui->label_96->setText(QString::number(num));
}

void SDF_Dialog::on_doubleSpinBox_70_valueChanged(double arg1)          //三角函数
{
    double num=arg1*tan(ui->doubleSpinBox_71->value()*ui->doubleSpinBox_72->value());
    ui->label_155->setText(QString::number(num));
}

void SDF_Dialog::on_doubleSpinBox_71_valueChanged(double arg1)          //三角函数
{
    double num=ui->doubleSpinBox_70->value()*tan(arg1*ui->doubleSpinBox_72->value());
    ui->label_155->setText(QString::number(num));
}

void SDF_Dialog::on_doubleSpinBox_72_valueChanged(double arg1)           //三角函数
{
    double num=ui->doubleSpinBox_70->value()*tan(arg1*ui->doubleSpinBox_71->value());
    ui->label_155->setText(QString::number(num));
}

void SDF_Dialog::on_doubleSpinBox_74_valueChanged(double arg1)        //三角函数
{
    double num=arg1*asin(ui->doubleSpinBox_73->value());
    ui->label_161->setText(QString::number(num));
}

void SDF_Dialog::on_doubleSpinBox_73_valueChanged(double arg1)          //三角函数
{
    double num=ui->doubleSpinBox_74->value()*asin(arg1);
    ui->label_161->setText(QString::number(num));
}

void SDF_Dialog::on_doubleSpinBox_75_valueChanged(double arg1)         //三角函数
{
    double num=arg1*acos(ui->doubleSpinBox_76->value());
    ui->label_167->setText(QString::number(num));
}

void SDF_Dialog::on_doubleSpinBox_76_valueChanged(double arg1)         //三角函数
{
    double num=ui->doubleSpinBox_75->value()*acos(arg1);
    ui->label_167->setText(QString::number(num));
}

void SDF_Dialog::on_doubleSpinBox_77_valueChanged(double arg1)        //三角函数
{
    double num=arg1*atan(ui->doubleSpinBox_78->value());
    ui->label_173->setText(QString::number(num));
}

void SDF_Dialog::on_doubleSpinBox_78_valueChanged(double arg1)          //三角函数
{
    double num=ui->doubleSpinBox_77->value()*atan(arg1);
    ui->label_173->setText(QString::number(num));
}

void SDF_Dialog::on_pushButton_11_clicked()
{
    display.append("(");
    ui->output->setText(display);
}

void SDF_Dialog::on_pushButton_12_clicked()
{
    display.append(")");
    ui->output->setText(display);
}

void SDF_Dialog::on_pushButton_4_clicked()
{
    display.append("7");
    ui->output->setText(display);
}

void SDF_Dialog::on_pushButton_5_clicked()
{
    display.append("8");
    ui->output->setText(display);
}

void SDF_Dialog::on_pushButton_6_clicked()
{
    display.append("9");
    ui->output->setText(display);
}

void SDF_Dialog::on_pushButton_7_clicked()
{
    display.append("4");
    ui->output->setText(display);
}

void SDF_Dialog::on_pushButton_8_clicked()
{
    display.append("5");
    ui->output->setText(display);
}

void SDF_Dialog::on_pushButton_9_clicked()
{
    display.append("6");
    ui->output->setText(display);
}

void SDF_Dialog::on_pushButton_10_clicked()
{
    display.append("1");
    ui->output->setText(display);
}

void SDF_Dialog::on_pushButton_clicked()
{
    display.append("2");
    ui->output->setText(display);
}

void SDF_Dialog::on_pushButton_14_clicked()
{
    display.append("3");
    ui->output->setText(display);
}

void SDF_Dialog::on_pushButton_16_clicked()
{
    display.append("0");
    ui->output->setText(display);
}

void SDF_Dialog::on_pushButton_17_clicked()
{
    display.append(".");
    ui->output->setText(display);
}

void SDF_Dialog::on_pushButton_3_clicked()
{

    display.append("+");
    ui->output->setText(display);
}

void SDF_Dialog::on_pushButton_2_clicked()
{

    display.append("-");
    ui->output->setText(display);
}

void SDF_Dialog::on_pushButton_15_clicked()
{

    display.append("*");
    ui->output->setText(display);
}

void SDF_Dialog::on_pushButton_21_clicked()
{

    display.append("/");
    ui->output->setText(display);
}

void SDF_Dialog::on_pushButton_24_clicked()
{
    display.append("1/x");
    func[0]++;
    ui->output->setText(display);
}

void SDF_Dialog::on_pushButton_25_clicked()
{
     func[1]++;
     display.append("x^2");
    ui->output->setText(display);
}

void SDF_Dialog::on_pushButton_26_clicked()
{
    func[2]++;
     display.append("x^3");
    ui->output->setText(display);
}

void SDF_Dialog::on_pushButton_27_clicked()
{
     func[3]++;
     display.append("sqrt(x)");
    ui->output->setText(display);
}

void SDF_Dialog::on_pushButton_28_clicked()
{
     func[4]++;
     display.append("sinx");
    ui->output->setText(display);
}

void SDF_Dialog::on_pushButton_29_clicked()
{
    func[5]++;
    display.append("cosx");
    ui->output->setText(display);
}

void SDF_Dialog::on_pushButton_30_clicked()
{
    func[6]++;
     display.append("tanx");
    ui->output->setText(display);
}

void SDF_Dialog::on_pushButton_31_clicked()
{
    func[7]++;
     display.append("abs(x)");
    ui->output->setText(display);
}

void SDF_Dialog::on_pushButton_22_clicked()
{
    func[8]++;
     display.append("e^x");
    ui->output->setText(display);
}

void SDF_Dialog::on_pushButton_23_clicked()
{
     func[9]++;
     display.append("lnx");
    ui->output->setText(display);
}

void SDF_Dialog::on_pushButton_20_clicked()
{
    expre=trans(display,ui->doubleSpinBox_22->value(),func);
    if(expre.isEmpty()){
        ui->lcdNumber->display(QString::number(0));
    }else{
        expression.SetExpression(expre);
        if(expression.LegalAndCal())
        {
            //display=toString(expression.GetResult());
            // ui->output->setText(display);
            double num=expression.GetResult();
            ui->lcdNumber->display(num);
        }
        else
        {
            ui->output->setText("表达式错误");
            display="";
            ui->lcdNumber->display(QString::number(0));
        }

    }
}

void SDF_Dialog::on_pushButton_18_clicked()
{
    expre="";
    memset(func,0,sizeof(func));
    display="";
    ui->output->setText(display);
}

void SDF_Dialog::on_doubleSpinBox_22_valueChanged(double arg1)
{

    expre=trans(display,arg1,func);

}
