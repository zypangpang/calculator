#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
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
   // void doAdvancedMode();
    void doHelp();
    void doAbout();
    void on_button1_clicked();
    void on_button2_clicked();
    void on_button3_clicked();
    void on_button0_clicked();
    void on_button4_clicked();
    void on_button5_clicked();
    void on_button6_clicked();
    void on_button7_clicked();
    void on_button8_clicked();
    void on_button9_clicked();
    void on_button_point_clicked();
    void on_button_neg_clicked();
    void on_button_space_clicked();
    void on_button_erase_clicked();
    void on_button_eraseAll_clicked();
    void on_button_sum_clicked();
    void on_button_dsum_clicked();
    void on_button_svar_clicked();
    void on_button_uvar_clicked();
    void on_button_var_clicked();
    void on_button_ave_clicked();
    void on_button_sort_clicked();
    void on_button_rsort_clicked();
    void on_button_mid_clicked();
    void on_pushButton_clicked();
};


#endif // MAINWINDOW_H
