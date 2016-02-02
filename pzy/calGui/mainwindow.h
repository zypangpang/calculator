#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QApplication>
#include<QWidget>
#include<QMainWindow>
#include<QtWidgets>
#include"calwidget.h"

class Mainwindow:public QMainWindow
{
    Q_OBJECT
public:
    explicit Mainwindow(QWidget *parent = 0);
    ~Mainwindow();
private:

    CalWidget* cal;


};

#endif // MAINWINDOW_H

