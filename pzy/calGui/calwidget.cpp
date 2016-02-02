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
    Button* BspaceButton=CreatButton(tr("Backspace"),SLOT(BspaceClicked()));
    Button* ClearButton=CreatButton(tr("Clear"),SLOT(ClearClicked()));
    Button* CAllButton=CreatButton(tr("ClearAll"),SLOT(CAllClicked()));
    Button* AddButton=CreatButton(tr("+"),SLOT(OrdinaryClicked()));
    Button* SubButton=CreatButton(tr("-"),SLOT(OrdinaryClicked()));
    Button* MulButton=CreatButton(tr("*"),SLOT(OrdinaryClicked()));
    Button* DivButton=CreatButton(tr("/"),SLOT(OrdinaryClicked()));
    Button* PowButton=CreatButton(tr("x^y"),SLOT(PowerClicked()));
    Button* SqrtButton=CreatButton(tr("Sqrt"),SLOT(FunctionClicked()));
    Button* LnButton=CreatButton(tr("ln"),SLOT(FunctionClicked()));
    Button* EqualButton=CreatButton(tr("="),SLOT(EqualClicked()));
    Button* PaiButton=CreatButton(tr("Pai"),SLOT(PaiClicked()));
    Button* PointButton=CreatButton(tr("."),SLOT(PointClicked()));
    for(int i=0;i<10;++i)
    {
        DigitButton[i]=CreatButton(QString::number(i),SLOT(OrdinaryClicked()));
    }
    QGridLayout* layout=new QGridLayout;
    layout->setSizeConstraint(QLayout::SetFixedSize);
    layout->addWidget(display,0,0,1,5);
    layout->addWidget(BspaceButton,1,0,1,2);
    layout->addWidget(BspaceButton, 1, 0, 1, 2);
    layout->addWidget(ClearButton, 1, 2, 1, 2);
    layout->addWidget(CAllButton, 1, 4, 1, 1);
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
    layout->addWidget(SqrtButton,2,4);
    layout->addWidget(LnButton,3,4);
    layout->addWidget(PowButton,4,4);
    layout->addWidget(PaiButton,5,4);
    layout->addWidget(DigitButton[0],5,0);
    layout->addWidget(EqualButton,5,2);
    layout->addWidget(PointButton,5,1);
    setLayout(layout);
}
Button* CalWidget::CreatButton(const QString &text, const char *slot)
{
    Button* button=new Button(text);
    connect(button,SIGNAL(clicked()),this,slot);
    return button;
}
CalWidget::~CalWidget()
{
    delete display;
}

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
    expression.SetExpresion(display->text());
    if(expression.LegalAndCal())
    {
        display->setText(QString::number(expression.GetResult(),'g',10));
    }
    else
    {
        display->setText("Expression Error");
    }
}

void CalWidget::PointClicked()
{
    display->setText(display->text()+".");
}

