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
    AdvancedCalwidget(CalWidget* parent=0);
    void mySetLayout();
    ~AdvancedCalwidget(){}
private slots:
    void RandClicked();
private:
    QHBoxLayout* alayout;
    bool isVirtualCal;
    bool isFractionCal;
    bool isRad;
    int floatFormat;
};

#endif // ADVANCED_CALWIDGET

