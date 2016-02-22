#include "cfuncmainwindow.h"
#include "ui_cfuncmainwindow.h"
#include "expression.h"
using namespace std;

//QString outexp;
//QString calexp;

QString CFuncMainWindow::toString(double num){
    ostringstream oss;
       oss<<num;
       string s;
       s=oss.str();
       return QString(QString::fromLocal8Bit(s.c_str()));
}

QString CFuncMainWindow::trans(QString s){
    QString exp=ui->lineEdit_2->text();
    if(!exp.isEmpty()){
        int n=s.count(exp);
        double num=ui->doubleSpinBox->value();
        for(int i=0;i<n;i++){
            int loc=s.indexOf(exp);
            s.replace(loc,exp.size(),toString(num));
        }
    }
    return s;
}

void CFuncMainWindow::on_pushButton_clicked()
{
    QString t=ui->lineEdit->text();
    if(t=="0"){
        ui->lineEdit->setText(" sin(");
    }else{
        ui->lineEdit->setText(t+" sin(");
    }
}

void CFuncMainWindow::on_pushButton_2_clicked()
{
    QString t=ui->lineEdit->text();
    if(t=="0"){
        ui->lineEdit->setText(" cos(");
    }else{
        ui->lineEdit->setText(t+" cos(");
    }
}

void CFuncMainWindow::on_pushButton_3_clicked()
{
    QString t=ui->lineEdit->text();
    if(t=="0"){
        ui->lineEdit->setText(" tan(");
    }else{
        ui->lineEdit->setText(t+" tan(");
    }
}

void CFuncMainWindow::on_pushButton_4_clicked()
{
    QString t=ui->lineEdit->text();
    if(t=="0"){
        ui->lineEdit->setText(" arcsin(");
    }else{
        ui->lineEdit->setText(t+" arcsin(");
    }
}

void CFuncMainWindow::on_pushButton_5_clicked()
{
    QString t=ui->lineEdit->text();
    if(t=="0"){
        ui->lineEdit->setText(" arccos(");
    }else{
        ui->lineEdit->setText(t+" arccos(");
    }
}

void CFuncMainWindow::on_pushButton_6_clicked()
{
    QString t=ui->lineEdit->text();
    if(t=="0"){
        ui->lineEdit->setText(" arctan(");
    }else{
        ui->lineEdit->setText(t+" arctan(");
    }
}

void CFuncMainWindow::on_pushButton_7_clicked()
{
    QString t=ui->lineEdit->text();
    if(t=="0"){
        ui->lineEdit->setText(" exp(");
    }else{
        ui->lineEdit->setText(t+" exp(");
    }
}

void CFuncMainWindow::on_pushButton_8_clicked()
{
    QString t=ui->lineEdit->text();
    if(t=="0"){
        ui->lineEdit->setText(" log10(");
    }else{
        ui->lineEdit->setText(t+" log10(");
    }
}

void CFuncMainWindow::on_pushButton_9_clicked()
{
    QString t=ui->lineEdit->text();
    if(t=="0"){
        ui->lineEdit->setText(" log2(");
    }else{
        ui->lineEdit->setText(t+" log2(");
    }
}

void CFuncMainWindow::on_pushButton_10_clicked()
{
    QString t=ui->lineEdit->text();
    if(t=="0"){
        ui->lineEdit->setText(" sqrt(");
    }else{
        ui->lineEdit->setText(t+" sqrt(");
    }
}

void CFuncMainWindow::on_pushButton_11_clicked()
{
    QString t=ui->lineEdit->text();
    if(t=="0"){
        ui->lineEdit->setText(" ln(");
    }else{
        ui->lineEdit->setText(t+" ln(");
    }
}

void CFuncMainWindow::on_pushButton_12_clicked()
{
    QString t=ui->lineEdit->text();
    if(t=="0"){
        ui->lineEdit->setText(" abs(");
    }else{
        ui->lineEdit->setText(t+" abs(");
    }
}

void CFuncMainWindow::on_pushButton_13_clicked()
{
    QString t=ui->lineEdit->text();
    if(t=="0"){
        ui->lineEdit->setText(" ceil(");
    }else{
        ui->lineEdit->setText(t+" ceil(");
    }
}

void CFuncMainWindow::on_pushButton_14_clicked()
{
    QString t=ui->lineEdit->text();
    if(t=="0"){
        ui->lineEdit->setText(" floor(");
    }else{
        ui->lineEdit->setText(t+" floor(");
    }
}

void CFuncMainWindow::on_pushButton_15_clicked()
{
    QString t=ui->lineEdit->text();
    if(t=="0"){
        ui->lineEdit->setText(" fac(");
    }else{
        ui->lineEdit->setText(t+" fac(");
    }
}

void CFuncMainWindow::on_pushButton_16_clicked()
{
    ui->lineEdit->backspace();
    QString t=ui->lineEdit->text();
    if(t.isEmpty())
    {
        ui->lineEdit->setText("0");
    }


}

void CFuncMainWindow::on_pushButton_17_clicked()
{
    QString t=ui->lineEdit->text();
    if(t=="0"){
        ui->lineEdit->setText("1");
    }else{
        ui->lineEdit->setText(t+"1");
    }
}

void CFuncMainWindow::on_pushButton_18_clicked()
{
    QString t=ui->lineEdit->text();
    if(t=="0"){
        ui->lineEdit->setText("2");
    }else{
        ui->lineEdit->setText(t+"2");
    }
}

void CFuncMainWindow::on_pushButton_19_clicked()
{
    QString t=ui->lineEdit->text();
    if(t=="0"){
        ui->lineEdit->setText("3");
    }else{
        ui->lineEdit->setText(t+"3");
    }
}


void CFuncMainWindow::on_pushButton_20_clicked()
{
    QString t=ui->lineEdit->text();
    if(t=="0"){
        ui->lineEdit->setText("4");
    }else{
        ui->lineEdit->setText(t+"4");
    }
}

void CFuncMainWindow::on_pushButton_21_clicked()
{
    QString t=ui->lineEdit->text();
    if(t=="0"){
        ui->lineEdit->setText("5");
    }else{
        ui->lineEdit->setText(t+"5");
    }
}

void CFuncMainWindow::on_pushButton_22_clicked()
{
    QString t=ui->lineEdit->text();
    if(t=="0"){
        ui->lineEdit->setText("6");
    }else{
        ui->lineEdit->setText(t+"6");
    }
}

void CFuncMainWindow::on_pushButton_23_clicked()
{
    QString t=ui->lineEdit->text();
    if(t=="0"){
        ui->lineEdit->setText("7");
    }else{
        ui->lineEdit->setText(t+"7");
    }
}

void CFuncMainWindow::on_pushButton_24_clicked()
{
    QString t=ui->lineEdit->text();
    if(t=="0"){
        ui->lineEdit->setText("8");
    }else{
        ui->lineEdit->setText(t+"8");
    }
}

void CFuncMainWindow::on_pushButton_25_clicked()
{
    QString t=ui->lineEdit->text();
    if(t=="0"){
        ui->lineEdit->setText("9");
    }else{
        ui->lineEdit->setText(t+"9");
    }
}

void CFuncMainWindow::on_pushButton_26_clicked()
{
    QString t=ui->lineEdit->text();
    if(t=="0"){
        ui->lineEdit->setText("0");
    }else{
        ui->lineEdit->setText(t+"0");
    }
}

void CFuncMainWindow::on_pushButton_27_clicked()
{
    QString t=ui->lineEdit->text();
    if(t=="0"){
        ui->lineEdit->setText(".");
    }else{
        ui->lineEdit->setText(t+".");
    }
}

void CFuncMainWindow::on_pushButton_29_clicked()
{
    QString t=ui->lineEdit->text();
    if(t=="0"){
        ui->lineEdit->setText("+");
    }else{
        ui->lineEdit->setText(t+"+");
    }
}

void CFuncMainWindow::on_pushButton_30_clicked()
{
    QString t=ui->lineEdit->text();
    if(t=="0"){
        ui->lineEdit->setText("-");
    }else{
        ui->lineEdit->setText(t+"-");
    }
}

void CFuncMainWindow::on_pushButton_31_clicked()
{
    QString t=ui->lineEdit->text();
    if(t=="0"){
        ui->lineEdit->setText("*");
    }else{
        ui->lineEdit->setText(t+"*");
    }
}

void CFuncMainWindow::on_pushButton_32_clicked()
{
    QString t=ui->lineEdit->text();
    if(t=="0"){
        ui->lineEdit->setText("/");
    }else{
        ui->lineEdit->setText(t+"/");
    }
}

void CFuncMainWindow::on_pushButton_34_clicked()
{
    QString t=ui->lineEdit->text();
    if(t=="0"){
        ui->lineEdit->setText("(");
    }else{
        ui->lineEdit->setText(t+"(");
    }
}

void CFuncMainWindow::on_pushButton_35_clicked()
{
    QString t=ui->lineEdit->text();
    if(t=="0"){
        ui->lineEdit->setText(")");
    }else{
        ui->lineEdit->setText(t+")");
    }
}

void CFuncMainWindow::on_pushButton_37_clicked()
{
    QString t=ui->lineEdit->text();
    if(t=="0"){
        ui->lineEdit->setText("^");
    }else{
        ui->lineEdit->setText(t+"^");
    }
}

void CFuncMainWindow::on_pushButton_38_clicked()
{
    QString t=ui->lineEdit->text();
    if(t=="0"){
        ui->lineEdit->setText("%");
    }else{
        ui->lineEdit->setText(t+"%");
    }
}

void CFuncMainWindow::on_pushButton_36_clicked()
{
    QString t=ui->lineEdit->text();
    if(ui->lineEdit_2->text().isEmpty()){
        ui->lineEdit->setText("变量未定义");
    }else{
        if(t=="0"){
            ui->lineEdit->setText(ui->lineEdit_2->text());
        }else{
            ui->lineEdit->setText(t+ui->lineEdit_2->text());
        }
    }
}

void CFuncMainWindow::on_pushButton_33_clicked()
{
    ui->lineEdit_2->setText("");
    ui->lineEdit->setText("0");
}

void CFuncMainWindow::on_pushButton_28_clicked()
{
     QString tem=ui->lineEdit->text();
     QString t=trans(tem);       //??
     expression.SetExpression(t);
     if(expression.LegalAndCal())
     {
         double tresult=expression.GetResult();
         if(tresult!=tresult||tresult+1==tresult)
             ui->lineEdit->setText("表达式错误或数值溢出！");
         else
             Output(state,expression.GetResult());    //::
     }
     else
     {
        ui->lineEdit->setText("表达式错误或数值溢出！");
     }
}
