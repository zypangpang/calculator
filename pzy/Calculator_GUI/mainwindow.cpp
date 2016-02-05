#include"mainwindow.h"

Mainwindow::Mainwindow(QWidget* parent):QMainWindow(parent)
{
   cal=new CalWidget();
   cal->mySetLayout();
   mainToolBar=new QToolBar(this);
   mainToolBar->setAllowedAreas(Qt::TopToolBarArea);
   advancedMode=mainToolBar->addAction("高级模式",this,SLOT(doAdvancedMode()));
   inputExpressionMannual=mainToolBar->addAction("手动输入",cal,SLOT(doInputMannual()));
   actAbout=mainToolBar->addAction("关于",this,SLOT(doAbout()));
   actHelp=mainToolBar->addAction("帮助",this,SLOT(doHelp()));
   mainToolBar->setFloatable(false);
   mainToolBar->setMovable(false);
   addToolBar(Qt::TopToolBarArea,mainToolBar);
   setCentralWidget(cal);
   QSize size=this->sizeHint();
   setFixedSize(size);
   setWindowTitle("计算器");
}

Mainwindow::~Mainwindow()
{
    delete cal;
}

void Mainwindow::doAdvancedMode()
{
    this->hide();
    acal=new AdvancedMainwindow(this);
    acal->show();
}

void Mainwindow::doHelp()
{
    QMessageBox::information(this,"帮助","输入格式：\n1.函数名前要有一个空格;\n"
                                       "2.用{ }框起用于函数的表达式\n"
                                       "3.不需要等于号\n"
                                       "示例：\n1+ tan{(3+6)*5}");
}


void Mainwindow::doAbout()
{
    QMessageBox::about(this,"关于","设计组成员：\n庞在余，杨云飞，王钰昭，赵瑞雪，杨威峰");
}


