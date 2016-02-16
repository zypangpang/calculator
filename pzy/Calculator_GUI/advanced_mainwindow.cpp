
#include"mainwindow.h"
#include"st_mainwindow.h"

AdvancedMainwindow::AdvancedMainwindow(QMainWindow *parent):QMainWindow(parent)
{
    //setFixedSize(300,300);
    acal=new AdvancedCalwidget(this);
    acal->mySetLayout();

    mbar=new QMenuBar;
    //menuFormat=new QMenu("格式",this);
    menuPolynome=new QMenu("多项式计算",this);
    menuStatistic=new QMenu("统计功能");
    menuCustomFunction=new QMenu("自定义函数");
    //actDegOrRad=menuFormat->addAction("角度/弧度");
    //actFloatDigit=menuFormat->addAction("小数位数");
    //mbar->addMenu(menuFormat);
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
    actStatistic=menuStatistic->addAction("统计功能",this,SLOT(doStatistic()));
    setMenuBar(mbar);
    addToolBar(Qt::TopToolBarArea,mToolBar);

    QLabel* Space=new QLabel;
    Space->setFixedSize(7,20);
    formatCheckBox=new QCheckBox("科学计数法");
    formatCheckBox->setTristate(true);
    formatCheckBox->setFixedSize(90,20);
    formatCheckBox->setCheckState(Qt::PartiallyChecked);
    statusBar=new QStatusBar;
    statusBar->addWidget(Space);
    statusBar->addWidget(formatCheckBox);
    //statusBar->setLayoutDirection(Qt::RightToLeft);
    //statusBar->setFixedSize(sizeHint().width(),28);
    statusBar->setSizeGripEnabled(false);
    QLabel* formatLabel=new QLabel("有效/小数位数");
    statusBar->addWidget(formatLabel);
    formatEdit=new QLineEdit("6");
    formatEdit->setFixedSize(54,20);
    statusBar->addWidget(formatEdit);
    formatButton=new QPushButton("确定");
    formatButton->setFixedSize(40,20);
    statusBar->addWidget(formatButton);
    QLabel* rightSpace=new QLabel;
    rightSpace->setFixedSize(2,20);
    statusBar->addWidget(rightSpace);
    QCheckBox* radCheckedBox=new QCheckBox("角度");
    radCheckedBox->setCheckState(Qt::Unchecked);
    statusBar->addWidget(radCheckedBox);
    /*QCheckBox* roundCheckedBox=new QCheckBox("四舍五入");
    roundCheckedBox->setCheckState(Qt::Unchecked);
    statusBar->addWidget(roundCheckedBox);*/

    setStatusBar(statusBar);

    setCentralWidget(acal);

    QSize size=this->sizeHint();
    setFixedSize(size);
    setWindowTitle("高级模式");

    connect(formatCheckBox,SIGNAL(stateChanged(int)),acal,SLOT(doFormatCheckBoxChanged(int)));
    connect(formatButton,SIGNAL(clicked()),acal,SLOT(formatButtonClicked()));
    connect(radCheckedBox,SIGNAL(stateChanged(int)),acal,SLOT(radBoxStatusChanged(int)));
    //connect(roundCheckedBox,SIGNAL(stateChanged(int)),acal,SLOT(isRoundChanged(int)));
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
    QMessageBox::information(this,"帮助","【输入格式】\n1.函数名前要有一个空格，函数名后要紧跟一个'('\n"
                                       "3.表达式最后不可加等号\n"
                                       "4.正数前不能加'+'\n"
                                       "5.仅支持界面显示的内置函数的计算，\n"
                                       "   若要计算其它函数，请使用自定义函数\n"
                                       "6.示例：\n-1+ sin( sqrt(2)+1)\n"
                                       "【注意】\n"
                                       "1.支持的数的范围：大于-1e+16小于1e+16\n"
                                       "2.当科学计数法为半选定状态时，格式为智能输出格式\n"
                                       "  设定的位数为最大有效数字位数，其它状态为小数位数\n"
                                       "  精确到所设定的小数位数\n"
                                       "3.支持的最大有效数字位数为15,默认有效/小数位数为6");
}

void AdvancedMainwindow::doStatistic()
{
    STMainWindow* stmainwindow=new STMainWindow(this);
    stmainwindow->show();
    stmainwindow->setAttribute(Qt::WA_DeleteOnClose,true);
}
