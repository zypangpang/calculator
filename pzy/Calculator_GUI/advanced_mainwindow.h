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
    QLineEdit* formatEdit;
private slots:
    void backToBasicClicked();
    void doAbout();
    void helpClicked();
    void doStatistic();
private:
    //QToolBar* mainTool;
    QStatusBar* statusBar;
    QCheckBox* formatCheckBox;
    QPushButton* formatButton;
    QMenuBar* mbar;
    //QMenu* menuFormat;
    QMenu* menuStatistic;
    QMenu* menuPolynome;
    QMenu* menuCustomFunction;
    QToolBar* mToolBar;
    //QAction* actDegOrRad;
    //QAction* actFloatDigit;
    QAction* actBackToBasic;
    QAction* inputExpressionMannual;
    QAction* actAbout;
    QAction* actHelp;
    QAction* actStatistic;
    AdvancedCalwidget* acal;


};

#endif // ADVANCED_MAINWINDOW

