
#include"mainwindow.h"

AdvancedMainwindow::AdvancedMainwindow(QMainWindow *parent):QMainWindow(parent)
{
    //setFixedSize(300,300);
    acal=new AdvancedCalwidget;
    acal->mySetLayout();

    mbar=new QMenuBar;
    menuFormat=new QMenu("格式",this);
    menuPolynome=new QMenu("多项式计算",this);
    menuStatistic=new QMenu("统计功能");
    menuCustomFunction=new QMenu("自定义函数");
    actDegOrRad=menuFormat->addAction("角度/弧度");
    actFloatDigit=menuFormat->addAction("小数位数");
    mbar->addMenu(menuFormat);
    mbar->addMenu(menuPolynome);
    mbar->addMenu(menuStatistic);
    mbar->addMenu(menuCustomFunction);
    mToolBar=new QToolBar;
    mToolBar->setFloatable(false);
    mToolBar->setMovable(false);
    actBackToBasic=mToolBar->addAction("基本模式",this,SLOT(backToBasicClicked()));
    inputExpressionMannual=mToolBar->addAction("手动输入",acal,SLOT(doInputMannual()));
    actAbout=mToolBar->addAction("关于",this,SLOT(doAbout()));
    actHelp=mToolBar->addAction("帮助",this,SLOT(helpClicked()));
    setMenuBar(mbar);
    addToolBar(Qt::TopToolBarArea,mToolBar);

    setCentralWidget(acal);

    QSize size=this->sizeHint();
    setFixedSize(size);
    setWindowTitle("高级模式");

}

void AdvancedMainwindow::backToBasicClicked()
{
    this->hide();
    Mainwindow* m=qobject_cast<Mainwindow*>(this->parent());
    m->show();
}
void AdvancedMainwindow::doAbout()
{
    QMessageBox::about(this,"关于","设计组成员：\n庞在余，杨云飞，王钰昭，赵瑞雪，杨威峰");
}

void AdvancedMainwindow::helpClicked()
{
    QMessageBox::information(this,"帮助","输入格式：\n1.函数名前要有一个空格;\n"
                                       "2.用{ }框起用于函数的表达式\n"
                                       "3.不需要等号\n"
                                       "4.正数前不能加'+'\n"
                                       "示例：\n1+ tan{(3+6)*5}");
}
