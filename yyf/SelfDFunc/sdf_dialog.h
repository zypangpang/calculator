#ifndef SDF_DIALOG_H
#define SDF_DIALOG_H

#include <QDialog>
#include<sstream>
#include<cstring>
#include<iostream>
#include "expression.h"
#include<QApplication>
#include<QWidget>
#include<QtWidgets>
namespace Ui {
class SDF_Dialog;
}

enum format{
    state1=1,
    state2=2,
    state3=3
};

class SDF_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit SDF_Dialog(QWidget *parent = 0);
    ~SDF_Dialog();
    QString toString(double num);
    QString trans(QString s);
    void Output(int state,double n);

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

    void on_pushButton_2_clicked();

    void on_checkBox_stateChanged(int arg1);

    void on_checkBox_2_stateChanged(int arg1);

    void on_spinBox_valueChanged(int arg1);

    void on_pushButton_clicked();

private:
    Ui::SDF_Dialog *ui;
    Expression expression;
    format state;
    int floatNum;
};

#endif // SDF_DIALOG_H
