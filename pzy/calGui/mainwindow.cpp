#include"mainwindow.h"


Mainwindow::Mainwindow(QWidget* parent):QMainWindow(parent)
{
   cal=new CalWidget();
   setCentralWidget(cal);
   QSize size=this->sizeHint();
   setFixedSize(size);
   setWindowTitle("Calculator");
}

Mainwindow::~Mainwindow()
{
    delete cal;
}


