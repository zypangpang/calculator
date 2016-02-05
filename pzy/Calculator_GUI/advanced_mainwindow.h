#ifndef ADVANCED_MAINWINDOW
#define ADVANCED_MAINWINDOW
#include <QMainWindow>
#include <QtWidgets>
#include "advanced_calwidget.h"

class AdvancedMainwindow:public QMainWindow
{
    Q_OBJECT
public:
    AdvancedMainwindow(QMainWindow* parent=0);
    ~AdvancedMainwindow(){}
private slots:
    void backToBasicClicked();
    void doAbout();
    void helpClicked();
private:
    //QToolBar* mainTool;
    QMenuBar* mbar;
    QMenu* menuFormat;
    QMenu* menuStatistic;
    QMenu* menuPolynome;
    QMenu* menuCustomFunction;
    QToolBar* mToolBar;
    QAction* actDegOrRad;
    QAction* actFloatDigit;
    QAction* actBackToBasic;
    QAction* inputExpressionMannual;
    QAction* actAbout;
    QAction* actHelp;
    AdvancedCalwidget* acal;


};

#endif // ADVANCED_MAINWINDOW

