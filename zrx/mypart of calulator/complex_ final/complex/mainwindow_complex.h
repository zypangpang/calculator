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
    void on_Button1_clicked();

    void on_Button2_clicked();

    void on_Button3_clicked();

    void on_Button0_clicked();

    void on_Button4_clicked();

    void on_Button5_clicked();

    void on_Button6_clicked();

    void on_Button7_clicked();

    void on_Button8_clicked();

    void on_Button9_clicked();

    void on_Button_pos_clicked();

    void on_Button_neg_clicked();

    void on_Button_point_clicked();

    void on_Button_multi_clicked();

    void on_Button_div_clicked();

    void on_real_clicked();

    void on_virtual_2_clicked();

    void on_erase_answer_clicked();

    void on_erase_real_clicked();

    void on_erase_virtual_clicked();

    void on_ans_clicked();

    void doHelp();

    void doAbout();
};

#endif // MAINWINDOW_H
