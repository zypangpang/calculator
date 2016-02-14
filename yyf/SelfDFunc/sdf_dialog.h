#ifndef SDF_DIALOG_H
#define SDF_DIALOG_H

#include <QDialog>
#include <expression.h>
#include<sstream>
#include<cstring>
#include<iostream>
#define funcNum 10
namespace Ui {
class SDF_Dialog;
}

const QString funcname[funcNum]={
    "1/x", "x^2",
    "x^3", "sqrt(x)",
    "sinx","cosx",
    "tanx","abs(x)",
    "e^x","lnx"
};

class SDF_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit SDF_Dialog(QWidget *parent = 0);
    ~SDF_Dialog();
    QString toString(double num);
    QString trans(QString str,double num,int a[]);
private slots:
    void on_doubleSpinBox_valueChanged(double arg1);

    void on_doubleSpinBox_2_valueChanged(double arg1);

    void on_doubleSpinBox_3_valueChanged(double arg1);

    void on_doubleSpinBox_4_valueChanged(double arg1);

    void on_doubleSpinBox_5_valueChanged(double arg1);

    void on_doubleSpinBox_6_valueChanged(double arg1);

    void on_doubleSpinBox_7_valueChanged(double arg1);

    void on_doubleSpinBox_8_valueChanged(double arg1);

    void on_doubleSpinBox_10_valueChanged(double arg1);

    void on_doubleSpinBox_11_valueChanged(double arg1);

    void on_doubleSpinBox_12_valueChanged(double arg1);

    void on_doubleSpinBox_9_valueChanged(double arg1);

    void on_doubleSpinBox_13_valueChanged(double arg1);

    void on_doubleSpinBox_14_valueChanged(double arg1);

    void on_doubleSpinBox_15_valueChanged(double arg1);

    void on_doubleSpinBox_16_valueChanged(double arg1);

    void on_doubleSpinBox_17_valueChanged(double arg1);

    void on_doubleSpinBox_18_valueChanged(double arg1);

    void on_doubleSpinBox_19_valueChanged(double arg1);

    void on_doubleSpinBox_20_valueChanged(double arg1);

    void on_doubleSpinBox_21_valueChanged(double arg1);

    void on_doubleSpinBox_43_valueChanged(double arg1);

    void on_doubleSpinBox_44_valueChanged(double arg1);

    void on_doubleSpinBox_45_valueChanged(double arg1);

    void on_doubleSpinBox_70_valueChanged(double arg1);

    void on_doubleSpinBox_71_valueChanged(double arg1);

    void on_doubleSpinBox_72_valueChanged(double arg1);

    void on_doubleSpinBox_74_valueChanged(double arg1);

    void on_doubleSpinBox_73_valueChanged(double arg1);

    void on_doubleSpinBox_75_valueChanged(double arg1);

    void on_doubleSpinBox_76_valueChanged(double arg1);

    void on_doubleSpinBox_77_valueChanged(double arg1);

    void on_doubleSpinBox_78_valueChanged(double arg1);

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_21_clicked();

    void on_pushButton_24_clicked();

    void on_pushButton_25_clicked();

    void on_pushButton_26_clicked();

    void on_pushButton_27_clicked();

    void on_pushButton_28_clicked();

    void on_pushButton_29_clicked();

    void on_pushButton_30_clicked();

    void on_pushButton_31_clicked();

    void on_pushButton_22_clicked();

    void on_pushButton_23_clicked();

    void on_pushButton_20_clicked();

    void on_pushButton_18_clicked();

    void on_doubleSpinBox_22_valueChanged(double arg1);

private:
    Ui::SDF_Dialog *ui;
    Expression expression;
};

#endif // SDF_DIALOG_H
