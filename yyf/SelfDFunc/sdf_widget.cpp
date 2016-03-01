#include "sdf_dialog.h"
#include "ui_sdf_dialog.h"
#include<QDoubleSpinBox>
#include<QtWidgets>
#include<cmath>

QString display;
QString expre;
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

