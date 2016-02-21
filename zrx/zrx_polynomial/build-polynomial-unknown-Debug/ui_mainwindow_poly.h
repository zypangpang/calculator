/********************************************************************************
** Form generated from reading UI file 'mainwindow_poly.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_POLY_H
#define UI_MAINWINDOW_POLY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *button2;
    QPushButton *button3;
    QPushButton *button1;
    QPushButton *button4;
    QPushButton *button5;
    QPushButton *button6;
    QPushButton *button7;
    QPushButton *button8;
    QPushButton *button9;
    QPushButton *button_pos;
    QPushButton *button0;
    QPushButton *button_erasecoef;
    QPushButton *button_eraseexp;
    QPushButton *button_neg;
    QPushButton *button_answer;
    QLabel *otherfunc;
    QPushButton *button_Diff;
    QLabel *inputcoef;
    QLabel *inputexp;
    QPushButton *button_coef;
    QPushButton *button_exp;
    QLabel *answer;
    QPushButton *button_erasecoef_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(399, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        button2 = new QPushButton(centralWidget);
        button2->setObjectName(QStringLiteral("button2"));
        button2->setGeometry(QRect(80, 170, 31, 31));
        button3 = new QPushButton(centralWidget);
        button3->setObjectName(QStringLiteral("button3"));
        button3->setGeometry(QRect(130, 170, 31, 31));
        button1 = new QPushButton(centralWidget);
        button1->setObjectName(QStringLiteral("button1"));
        button1->setGeometry(QRect(30, 170, 31, 31));
        button4 = new QPushButton(centralWidget);
        button4->setObjectName(QStringLiteral("button4"));
        button4->setGeometry(QRect(30, 120, 31, 31));
        button5 = new QPushButton(centralWidget);
        button5->setObjectName(QStringLiteral("button5"));
        button5->setGeometry(QRect(80, 120, 31, 31));
        button6 = new QPushButton(centralWidget);
        button6->setObjectName(QStringLiteral("button6"));
        button6->setGeometry(QRect(130, 120, 31, 31));
        button7 = new QPushButton(centralWidget);
        button7->setObjectName(QStringLiteral("button7"));
        button7->setGeometry(QRect(30, 70, 31, 31));
        button8 = new QPushButton(centralWidget);
        button8->setObjectName(QStringLiteral("button8"));
        button8->setGeometry(QRect(80, 70, 31, 31));
        button9 = new QPushButton(centralWidget);
        button9->setObjectName(QStringLiteral("button9"));
        button9->setGeometry(QRect(130, 70, 31, 31));
        button_pos = new QPushButton(centralWidget);
        button_pos->setObjectName(QStringLiteral("button_pos"));
        button_pos->setGeometry(QRect(180, 70, 31, 31));
        button0 = new QPushButton(centralWidget);
        button0->setObjectName(QStringLiteral("button0"));
        button0->setGeometry(QRect(180, 170, 31, 31));
        button_erasecoef = new QPushButton(centralWidget);
        button_erasecoef->setObjectName(QStringLiteral("button_erasecoef"));
        button_erasecoef->setGeometry(QRect(90, 30, 71, 31));
        button_eraseexp = new QPushButton(centralWidget);
        button_eraseexp->setObjectName(QStringLiteral("button_eraseexp"));
        button_eraseexp->setGeometry(QRect(170, 30, 71, 31));
        button_neg = new QPushButton(centralWidget);
        button_neg->setObjectName(QStringLiteral("button_neg"));
        button_neg->setGeometry(QRect(180, 120, 31, 31));
        button_answer = new QPushButton(centralWidget);
        button_answer->setObjectName(QStringLiteral("button_answer"));
        button_answer->setGeometry(QRect(10, 220, 51, 31));
        otherfunc = new QLabel(centralWidget);
        otherfunc->setObjectName(QStringLiteral("otherfunc"));
        otherfunc->setGeometry(QRect(280, 120, 101, 31));
        button_Diff = new QPushButton(centralWidget);
        button_Diff->setObjectName(QStringLiteral("button_Diff"));
        button_Diff->setGeometry(QRect(290, 160, 81, 31));
        inputcoef = new QLabel(centralWidget);
        inputcoef->setObjectName(QStringLiteral("inputcoef"));
        inputcoef->setGeometry(QRect(300, 40, 81, 21));
        inputcoef->setFrameShape(QFrame::Box);
        inputcoef->setFrameShadow(QFrame::Sunken);
        inputexp = new QLabel(centralWidget);
        inputexp->setObjectName(QStringLiteral("inputexp"));
        inputexp->setGeometry(QRect(300, 90, 81, 21));
        inputexp->setFrameShape(QFrame::Box);
        inputexp->setFrameShadow(QFrame::Sunken);
        button_coef = new QPushButton(centralWidget);
        button_coef->setObjectName(QStringLiteral("button_coef"));
        button_coef->setGeometry(QRect(260, 40, 31, 21));
        button_exp = new QPushButton(centralWidget);
        button_exp->setObjectName(QStringLiteral("button_exp"));
        button_exp->setGeometry(QRect(260, 90, 31, 21));
        answer = new QLabel(centralWidget);
        answer->setObjectName(QStringLiteral("answer"));
        answer->setGeometry(QRect(70, 220, 321, 31));
        answer->setFrameShape(QFrame::Box);
        answer->setFrameShadow(QFrame::Sunken);
        button_erasecoef_2 = new QPushButton(centralWidget);
        button_erasecoef_2->setObjectName(QStringLiteral("button_erasecoef_2"));
        button_erasecoef_2->setGeometry(QRect(10, 30, 71, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 399, 19));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        button2->setText(QApplication::translate("MainWindow", "2", 0));
        button3->setText(QApplication::translate("MainWindow", "3", 0));
        button1->setText(QApplication::translate("MainWindow", "1", 0));
        button4->setText(QApplication::translate("MainWindow", "4", 0));
        button5->setText(QApplication::translate("MainWindow", "5", 0));
        button6->setText(QApplication::translate("MainWindow", "6", 0));
        button7->setText(QApplication::translate("MainWindow", "7", 0));
        button8->setText(QApplication::translate("MainWindow", "8", 0));
        button9->setText(QApplication::translate("MainWindow", "9", 0));
        button_pos->setText(QApplication::translate("MainWindow", "+", 0));
        button0->setText(QApplication::translate("MainWindow", "0", 0));
        button_erasecoef->setText(QApplication::translate("MainWindow", "\346\270\205\351\231\244\347\263\273\346\225\260", 0));
        button_eraseexp->setText(QApplication::translate("MainWindow", "\346\270\205\351\231\244\346\254\241\346\225\260", 0));
        button_neg->setText(QApplication::translate("MainWindow", "-", 0));
        button_answer->setText(QApplication::translate("MainWindow", "\347\273\223\346\236\234=", 0));
        otherfunc->setText(QApplication::translate("MainWindow", "    \345\205\266\345\256\203\345\212\237\350\203\275 ", 0));
        button_Diff->setText(QApplication::translate("MainWindow", "\346\261\202\345\257\274", 0));
        inputcoef->setText(QApplication::translate("MainWindow", "0", 0));
        inputexp->setText(QApplication::translate("MainWindow", "0", 0));
        button_coef->setText(QApplication::translate("MainWindow", "\347\263\273\346\225\260", 0));
        button_exp->setText(QApplication::translate("MainWindow", "\346\254\241\346\225\260", 0));
        answer->setText(QApplication::translate("MainWindow", "0", 0));
        button_erasecoef_2->setText(QApplication::translate("MainWindow", "\346\270\205\351\231\244\347\273\223\346\236\234", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_POLY_H
