#ifndef ADVANCED_CALWIDGET
#define ADVANCED_CALWIDGET
#include <QApplication>
#include "calwidget.h"
#include "button.h"

class QHBoxLayout;
class AdvancedCalwidget:public CalWidget
{
    Q_OBJECT
public:
    AdvancedCalwidget(QWidget* parent=0);
    void mySetLayout();
    ~AdvancedCalwidget(){}
private slots:
    void RandClicked();
    void formatButtonClicked();
    void radBoxStatusChanged(int);
    //void isRoundChanged(int);
private:
    QHBoxLayout* alayout;
    bool isVirtualCal;
    bool isFractionCal;
    int floatFormat;
};

#endif // ADVANCED_CALWIDGET

