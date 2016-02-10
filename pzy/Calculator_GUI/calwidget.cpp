#include <QtWidgets>
#include "calwidget.h"
#include "button.h"


CalWidget::CalWidget(QWidget *parent):QWidget(parent)
{
    //EqualState=false;
    display=new QLineEdit("0");
    display->setReadOnly(true);
    display->setAlignment(Qt::AlignRight);
    //display->setMaxLength(15);
    QFont font = display->font();
    font.setPointSize(font.pointSize() + 8);
    display->setFont(font);
    Button* BspaceButton=CreatButton(tr("退格"),SLOT(BspaceClicked()));
    Button* ClearButton=CreatButton(tr("清除"),SLOT(ClearClicked()));
    Button* CAllButton=CreatButton(tr("清除全部"),SLOT(CAllClicked()));
    Button* AddButton=CreatButton(tr("+"),SLOT(OrdinaryClicked()));
    Button* SubButton=CreatButton(tr("-"),SLOT(OrdinaryClicked()));
    Button* MulButton=CreatButton(tr("*"),SLOT(OrdinaryClicked()));
    Button* DivButton=CreatButton(tr("/"),SLOT(OrdinaryClicked()));
    Button* PowButton=CreatButton(tr("^"),SLOT(OrdinaryClicked()));
    Button* SqrtButton=CreatButton(tr("sqrt"),SLOT(FunctionClicked()));
    Button* LnButton=CreatButton(tr("ln"),SLOT(FunctionClicked()));
    Button* EqualButton=CreatButton(tr("="),SLOT(EqualClicked()));
    Button* PaiButton=CreatButton(tr("Pai"),SLOT(PaiClicked()));
    Button* PointButton=CreatButton(tr("."),SLOT(PointClicked()));
    Button* LBBracketButton=CreatButton(tr("{"),SLOT(OrdinaryClicked()));
    Button* RBBracketButton=CreatButton(tr("}"),SLOT(OrdinaryClicked()));
    Button* LBracketButton=CreatButton(tr("("),SLOT(OrdinaryClicked()));
    Button* RBracketButton=CreatButton(tr(")"),SLOT(OrdinaryClicked()));
    Button* ModButton=CreatButton(tr("%"),SLOT(OrdinaryClicked()));
    for(int i=0;i<10;++i)
    {
        DigitButton[i]=CreatButton(QString::number(i),SLOT(OrdinaryClicked()));
    }
    layout=new QGridLayout;
    layout->setSizeConstraint(QLayout::SetFixedSize);
    layout->addWidget(display,0,0,1,6);
    layout->addWidget(BspaceButton,1,0,1,2);
    layout->addWidget(ClearButton, 1, 2, 1, 2);
    layout->addWidget(CAllButton, 1, 5, 1, 1);
    for(int i=1;i<10;++i)
    {
        int r=4-(i-1)/3;
        int c=(i-1)%3;
        layout->addWidget(DigitButton[i],r,c);
    }
    layout->addWidget(AddButton,5,3);
    layout->addWidget(SubButton,4,3);
    layout->addWidget(MulButton,3,3);
    layout->addWidget(DivButton,2,3);
    layout->addWidget(SqrtButton,2,5);
    layout->addWidget(LnButton,3,5);
    layout->addWidget(PowButton,4,5);
    layout->addWidget(PaiButton,5,5);
    layout->addWidget(DigitButton[0],5,0);
    layout->addWidget(EqualButton,5,2);
    layout->addWidget(PointButton,5,1);
    layout->addWidget(LBBracketButton,1,4);
    layout->addWidget(RBBracketButton,2,4);
    layout->addWidget(LBracketButton,3,4);
    layout->addWidget(RBracketButton,4,4);
    layout->addWidget(ModButton,5,4);
}
Button* CalWidget::CreatButton(const QString &text, const char *slot)
{
    Button* button=new Button(text);
    connect(button,SIGNAL(clicked()),this,slot);
    return button;
}

void CalWidget::mySetLayout()
{
    setLayout(layout);
}
/*CalWidget::~CalWidget()
{
    delete display;
}*/

void CalWidget::OrdinaryClicked()
{
    Button* t=qobject_cast<Button*>(sender());
    if(display->text()=="0")
    {
        display->setText(t->text());

    }
    else
    {
        display->setText(display->text()+t->text());
    }
}

void CalWidget::FunctionClicked()
{
    Button* t=qobject_cast<Button*>(sender());
    if(display->text()=="0")
    {
        display->setText(" "+t->text());

    }
    else
    {
        display->setText(display->text()+" "+t->text());
    }
}

void CalWidget::BspaceClicked()
{
    display->backspace();
    QString t=display->text();
    if(t.isEmpty())
    {
        display->setText("0");
    }
}

void CalWidget::ClearClicked()
{
    display->setText("0");
}

void CalWidget::PaiClicked()
{
    if(display->text()=="0")
    {
        display->setText("3.1415926535");

    }
    else
    {
        display->setText(display->text()+"3.1415926535");
    }
}

void CalWidget::EqualClicked()
{
    QString t=display->text();
    if(t[0].isNumber()||t[0]=='('||t[0]==' '||t[0]=='-'||t[0]=='.')
    {
    expression.SetExpression(display->text());
    if(expression.LegalAndCal())
    {
        display->setText(QString::number(expression.GetResult(),'g',10));
    }
    else
    {
        display->setText("表达式错误！");
    }
    }
    else
    {
        display->setText("表达式错误！");
    }
}

void CalWidget::PointClicked()
{
    display->setText(display->text()+".");
}

void CalWidget::doInputMannual()
{
    bool ok;
    QString text=QInputDialog::getText(this,tr("手动输入"),tr("表达式："),QLineEdit::Normal,tr("1+ sin{30}"),&ok);
    if(ok&&!text.isEmpty())
    {
    expression.SetExpression(text);
    if(expression.LegalAndCal())
    {
        display->setText(QString::number(expression.GetResult(),'g',10));
    }
    else
    {
        display->setText("表达式错误！");
    }
    }
}

