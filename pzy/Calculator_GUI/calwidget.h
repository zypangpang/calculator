#ifndef CALWIDGET
#define CALWIDGET

#include <QWidget>
#include "expression.h"

class QLineEdit;
class QToolButton;
class Button;
class QGridLayout;

class CalWidget:public QWidget
{
    Q_OBJECT

public:
    CalWidget(QWidget* parent=0);
    ~CalWidget(){}
    virtual void mySetLayout();
private slots:
    void OrdinaryClicked();
    void FunctionClicked();
    void BspaceClicked();
    void ClearClicked();
    //void CAllClicked();
    void PaiClicked();
    //void PowerClicked();
    void EqualClicked();
    void PointClicked();
    void doInputMannual();

protected:
    QGridLayout* layout;
    Button* CreatButton(const QString& text, const char* slot);
private:
    QLineEdit* display;
    Button* DigitButton[10];
    Expression expression;
    //bool EqualState;
   // QString exprs;

};

#endif // CALWIDGET

