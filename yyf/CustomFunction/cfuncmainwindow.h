#ifndef CFUNCMAINWINDOW_H
#define CFUNCMAINWINDOW_H

#include "expression.h"
#include <QMainWindow>
#include<QApplication>
#include<QWidget>
#include<QtWidgets>
#include <sstream>
#include <cstring>

enum format{
    state1=1,
    state2=2,
    state3=3
};

namespace Ui {
class CFuncMainWindow;
}

class CFuncMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CFuncMainWindow(QWidget *parent = 0);
    QString toString(double num);
    ~CFuncMainWindow();
    void Output(int state,double n);
    QString trans(QString arg1);

private slots:
    void doHelp();

    void doAbout();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_20_clicked();

    void on_pushButton_21_clicked();

    void on_pushButton_22_clicked();

    void on_pushButton_23_clicked();

    void on_pushButton_24_clicked();

    void on_pushButton_25_clicked();

    void on_pushButton_26_clicked();

    void on_pushButton_27_clicked();

    void on_pushButton_28_clicked();

    void on_pushButton_29_clicked();

    void on_pushButton_30_clicked();

    void on_pushButton_31_clicked();

    void on_pushButton_32_clicked();

    void on_pushButton_34_clicked();

    void on_pushButton_35_clicked();

    void on_pushButton_37_clicked();

    void on_pushButton_38_clicked();

    void on_pushButton_36_clicked();

    void on_pushButton_33_clicked();

    void on_checkBox_stateChanged(int arg1);

    void on_checkBox_2_stateChanged(int arg1);

    void on_lineEdit_2_textChanged(const QString &arg1);

    void on_spinBox_valueChanged(int arg1);

    void on_checkBox_3_stateChanged(int arg1);

private:
    Ui::CFuncMainWindow *ui;
    Expression expression;
    QToolBar* mainToolBar;
    QAction* actAbout;
    QAction* actHelp;
    format state;
    int floatNum;
   // bool selfInput;
};

#endif // CFUNCMAINWINDOW_H
