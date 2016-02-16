//#include <QLabel>
//#include <QLayout>
#include <QtWidgets>
#include "advanced_calwidget.h"
#include "randmainwindow.h"
#include "advanced_mainwindow.h"

AdvancedCalwidget::AdvancedCalwidget(QWidget *parent):CalWidget(parent)
{
    Button* SinButton=CreatButton("sin",SLOT(FunctionClicked()));
    Button* CosButton=CreatButton("cos",SLOT(FunctionClicked()));
    Button* TanButton=CreatButton("tan",SLOT(FunctionClicked()));
    Button* ArcsinButton=CreatButton("arcsin",SLOT(FunctionClicked()));
    Button* ArccosButton=CreatButton("arccos",SLOT(FunctionClicked()));
    Button* ArctanButton=CreatButton("arctan",SLOT(FunctionClicked()));
    Button* ExpButton=CreatButton("exp",SLOT(FunctionClicked()));
    Button* Log10Button=CreatButton("log10",SLOT(FunctionClicked()));
    Button* Log2Button=CreatButton("log2",SLOT(FunctionClicked()));
    Button* CeilButton=CreatButton("ceil",SLOT(FunctionClicked()));
    Button* FloorButton=CreatButton("floor",SLOT(FunctionClicked()));
    Button* AbsButton=CreatButton("abs",SLOT(FunctionClicked()));
    Button* FacButton=CreatButton("fac",SLOT(FunctionClicked()));
    Button* IButton=CreatButton("i",SLOT(OrdinaryClicked()));
    Button* FractionButton=CreatButton("|",SLOT(OrdinaryClicked()));//attention,symbol!

    Button* RandButton=CreatButton("rand",SLOT(RandClicked()));

    QLabel* label=new QLabel("\t函数功能键区\t");
    QFont font=label->font();
    font.setPointSize(font.pointSize()+2);
    label->setFont(font);
    label->setFrameShape(QFrame::StyledPanel);

    QGridLayout* rlayout=new QGridLayout;
    rlayout->addWidget(label,0,0,1,4);
    rlayout->addWidget(SinButton,1,1);
    rlayout->addWidget(CosButton,1,2);
    rlayout->addWidget(TanButton,1,3);
    rlayout->addWidget(ArcsinButton,2,1);
    rlayout->addWidget(ArccosButton,2,2);
    rlayout->addWidget(ArctanButton,2,3);
    rlayout->addWidget(ExpButton,3,1);
    rlayout->addWidget(Log10Button,3,2);
    rlayout->addWidget(Log2Button,3,3);
    rlayout->addWidget(CeilButton,4,1);
    rlayout->addWidget(FloorButton,4,2);
    rlayout->addWidget(AbsButton,4,3);
    rlayout->addWidget(FacButton,5,1);
    rlayout->addWidget(IButton,5,2);
    rlayout->addWidget(FractionButton,5,3);
    rlayout->addWidget(RandButton,3,0);
    alayout=new QHBoxLayout;
    QFrame* line=new QFrame(this);
    line->setFrameShape(QFrame::VLine);
    line->setFrameShadow(QFrame::Sunken);
    //seperator->setFrameShape(QFrame::VLine);
    alayout->addLayout(layout);;
    //alayout->addSpacing(10);
    alayout->addWidget(line);
    alayout->addLayout(rlayout);

}

void AdvancedCalwidget::mySetLayout()
{
    setLayout(alayout);
}

void AdvancedCalwidget::RandClicked()
{
    RandMainwindow* randmwindow=new RandMainwindow(this);
    randmwindow->setAttribute(Qt::WA_DeleteOnClose,true);
    randmwindow->show();
}

void AdvancedCalwidget::formatButtonClicked()
{
    bool ok;
    int t=qobject_cast<AdvancedMainwindow*>(this->parent())->formatEdit->text().toInt(&ok);
    if(ok==true&&t<=15&&t>=0)
    {
        floatNumber=t;
    }
    else
    {
        qobject_cast<AdvancedMainwindow*>(this->parent())->formatEdit->setText(QString::number(floatNumber));
        QMessageBox::information(this,"错误","输入数字错误！\n"
                                           "请输入大于等于0小于等于15的整数！");
    }
}

void AdvancedCalwidget::radBoxStatusChanged(int State)
{
    if(State==Qt::Checked)
        expression.isRad=false;
    else
        expression.isRad=true;
    QString t=this->display->text();
    bool ok;
    double tn=t.toDouble(&ok);
    if(ok)
    {
        switch(expression.isRad)
        {
        case true:
            formatOutput(formatState,tn/180*PAI);
            break;
        case false:
            formatOutput(formatState,tn/PAI*180);
            break;
        }
    }
}

/*void AdvancedCalwidget::isRoundChanged(int state)
{
    switch(state)
    {
    case Qt::Checked:
        isRound=true;
        break;
    case Qt::Unchecked:
        isRound=false;
        break;
    }
}*/
