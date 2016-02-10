#include "st_mainWindow.h"
#include "ui_STMainWindow.h"
#include "statistics.h"
STMainWindow::STMainWindow(QMainWindow *parent) :
    QMainWindow(parent),
    ui(new Ui::STMainWindow)
{
    ui->setupUi(this);
    mainToolBar=new QToolBar(this);
    mainToolBar->setAllowedAreas(Qt::TopToolBarArea);
    actAbout=mainToolBar->addAction("关于",this,SLOT(doAbout()));
    actHelp=mainToolBar->addAction("帮助",this,SLOT(doHelp()));
    setWindowTitle("统计功能");
    addToolBar(mainToolBar);
    mainToolBar->setFloatable(false);
    mainToolBar->setMovable(false);
    setFixedSize(404,279);

}

void STMainWindow::doHelp()
{
    QMessageBox::information(this,"帮助","输入格式：\n1.每个数据后要有一个空格;\n"
                                       "2. 连续输入两个空格默认输入数据0\n"
                                       "3.每次改变数据后需重新按相应功能键来刷新结果\n"
                                       "示例："
                                       "(1.2 -2.3 4 2 )");
}

void STMainWindow::doAbout()
{
    QMessageBox::about(this,"关于","统计模块:\n""设计者：杨云飞");
}

STMainWindow::~STMainWindow()
{
    delete ui;
}

statistics s;

QString temp;
QString display;
void STMainWindow::on_button1_clicked()
{
    temp=temp.append('1');
    display=display.append('1');
    ui->input->setText(display);
}

void STMainWindow::on_button2_clicked()
{
    temp=temp.append('2');
    display=display.append('2');
    ui->input->setText(display);
}

void STMainWindow::on_button3_clicked()
{
    temp=temp.append('3');
    display=display.append('3');
    ui->input->setText(display);
}

void STMainWindow::on_button0_clicked()
{
    temp=temp.append('0');
    display=display.append('0');
    ui->input->setText(display);
}


void STMainWindow::on_button4_clicked()
{
    temp=temp.append('4');
    display=display.append('4');
    ui->input->setText(display);
}

void STMainWindow::on_button5_clicked()
{
    temp=temp.append('5');
    display=display.append('5');
    ui->input->setText(display);
}

void STMainWindow::on_button6_clicked()
{
    temp=temp.append('6');
    display=display.append('6');
    ui->input->setText(display);
}

void STMainWindow::on_button7_clicked()
{
    temp=temp.append('7');
    display=display.append('7');
    ui->input->setText(display);
}

void STMainWindow::on_button8_clicked()
{
    temp=temp.append('8');
    display=display.append('8');
    ui->input->setText(display);
}
void STMainWindow::on_button9_clicked()
{
    temp=temp.append('9');
    display=display.append('9');
    ui->input->setText(display);
}

void STMainWindow::on_button_point_clicked()
{
    temp=temp.append('.');
    display=display.append('.');
    ui->input->setText(display);
}

void STMainWindow::on_button_neg_clicked()
{

    if(temp.isEmpty()){
        temp=temp.append('-');
        display=display.append('-');
    }
    ui->input->setText(display);
}

void STMainWindow::on_button_space_clicked()
{
    bool ok;
    double num=temp.toDouble(&ok);
    s.AddData(num);
    temp="";
    display=display.append(" ");
    ui->input->setText(display);
}

void STMainWindow::on_button_erase_clicked()
{
    if(display.isEmpty()){
        ui->input->setText("Erase error");
    }else{
        if(!temp.isEmpty()){
            display=display.left(display.size()-temp.size());
            temp="";
        }else{
           s.Erase();
           display=s.renew();
        }
        ui->input->setText(display);
    }
}

void STMainWindow::on_button_eraseAll_clicked()
{
    temp="";
    display="";
    s.empty();
    ui->input->setText(display);
}

void STMainWindow::on_button_sum_clicked()
{
    double sum;
    sum=s.Sum();
    ui->lcdNumber->display(sum);
}

void STMainWindow::on_button_dsum_clicked()
{
    double Dsum;
    Dsum=s.DSum();
    ui->lcdNumber->display(Dsum);
}


void STMainWindow::on_button_svar_clicked()
{
    double svar;
    svar=s.StaVar();
    ui->lcdNumber->display(svar);
}


void STMainWindow::on_button_uvar_clicked()
{
    double uvar;
    uvar=s.UnVariance();
    ui->lcdNumber->display(uvar);
}

void STMainWindow::on_button_var_clicked()
{
    double var;
    var=s.Variance();
    ui->lcdNumber->display(var);
}

void STMainWindow::on_button_ave_clicked()
{
    double ave;
    ave=s.Average();
    ui->lcdNumber->display(ave);
}

void STMainWindow::on_button_sort_clicked()
{
    display=s.Sort();
    ui->input->setText(display);
}

void STMainWindow::on_button_rsort_clicked()
{
    display=s.rSort();
    ui->input->setText(display);
}

void STMainWindow::on_button_mid_clicked()
{
    double mid;
    mid=s.Midnum();
    ui->lcdNumber->display(mid);
}

void STMainWindow::on_pushButton_clicked()
{
    ui->lcdNumber->display(s.Max_Min());
}
