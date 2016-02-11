#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include<QMainWindow>
#include<QApplication>
#include<QWidget>
#include<QtWidgets>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QToolBar* mainToolBar;
    QAction* advancedMode;
    QAction* inputData;
    QAction* actAbout;
    QAction* actHelp;

private slots:
    void doHelp();

    void doAbout();

    void on_button7_clicked();

    void on_button8_clicked();

    void on_button4_clicked();

    void on_button1_clicked();

    void on_button2_clicked();

    void on_button3_clicked();

    void on_button0_clicked();

    void on_button6_clicked();

    void on_button9_clicked();

    void on_button5_clicked();

    void on_button_answer_clicked();

    void on_button_Diff_clicked();

    void on_button_erasecoef_clicked();

    void on_button_eraseexp_clicked();

    void on_button_coef_clicked();

    void on_button_exp_clicked();

    void on_button_neg_clicked();

    void on_button_delete_clicked();

};

#endif // MAINWINDOW_H
