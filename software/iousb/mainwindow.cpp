#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDoubleValidator>

bool dig_dir[4]={false,false,false,false};
bool dig_val[4]={false,false,false,false};

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    ui->DIG_value_0->setStyleSheet("background-color:red");
    ui->DIG_value_1->setStyleSheet("background-color:red");
    ui->DIG_value_2->setStyleSheet("background-color:red");
    ui->DIG_value_3->setStyleSheet("background-color:red");

    QDoubleValidator *valid = new QDoubleValidator(this);
    valid->setBottom(0);
    valid->setDecimals(2);
    valid->setTop(5);

    ui->AN_out_0->setValidator(valid);
    ui->AN_out_1->setValidator(valid);


    connect(ui->DIG_dir_0,SIGNAL(clicked()),SLOT(digital_dir_0()));
    connect(ui->DIG_dir_1,SIGNAL(clicked()),SLOT(digital_dir_1()));
    connect(ui->DIG_dir_2,SIGNAL(clicked()),SLOT(digital_dir_2()));
    connect(ui->DIG_dir_3,SIGNAL(clicked()),SLOT(digital_dir_3()));

    connect(ui->DIG_value_0,SIGNAL(clicked()),SLOT(digital_val_0()));
    connect(ui->DIG_value_1,SIGNAL(clicked()),SLOT(digital_val_1()));
    connect(ui->DIG_value_2,SIGNAL(clicked()),SLOT(digital_val_2()));
    connect(ui->DIG_value_3,SIGNAL(clicked()),SLOT(digital_val_3()));

    connect(ui->DIG_check,SIGNAL(clicked()),SLOT(digital_check()));
    connect(ui->ANIN_check,SIGNAL(clicked()),SLOT(analogin_check()));
    connect(ui->ANOUT_check,SIGNAL(clicked()),SLOT(analogout_check()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digital_dir_all(int dir_num){

    QPushButton* dig_dir_ptr[4];
    dig_dir_ptr[0]= ui->DIG_dir_0;
    dig_dir_ptr[1]= ui->DIG_dir_1;
    dig_dir_ptr[2]= ui->DIG_dir_2;
    dig_dir_ptr[3]= ui->DIG_dir_3;

    QPushButton* dig_val_ptr[4];
    dig_val_ptr[0]=ui->DIG_value_0;
    dig_val_ptr[1]=ui->DIG_value_1;
    dig_val_ptr[2]=ui->DIG_value_2;
    dig_val_ptr[3]=ui->DIG_value_3;


    dig_dir[dir_num]=!dig_dir[dir_num];
    if(dig_dir[dir_num]){
        dig_dir_ptr[dir_num]->setText("OUT");
        dig_val_ptr[dir_num]->setEnabled(true);
    }
    else {
        dig_dir_ptr[dir_num]->setText("IN");
        dig_val_ptr[dir_num]->setEnabled(false);
    }
}

void MainWindow::digital_dir_0(){
    digital_dir_all(0);
}

void MainWindow::digital_dir_1(){
   digital_dir_all(1);
}

void MainWindow::digital_dir_2(){
    digital_dir_all(2);
}

void MainWindow::digital_dir_3(){
   digital_dir_all(3);
}


void MainWindow::digital_val_all(int val_num){

    QPushButton* dig_val_ptr[4];
    dig_val_ptr[0]=ui->DIG_value_0;
    dig_val_ptr[1]=ui->DIG_value_1;
    dig_val_ptr[2]=ui->DIG_value_2;
    dig_val_ptr[3]=ui->DIG_value_3;

    dig_val[val_num]=!dig_val[val_num];
    if(dig_val[val_num]){
        dig_val_ptr[val_num]->setStyleSheet("background-color:green");
        dig_val_ptr[val_num]->setText("True");
    }
    else {
        dig_val_ptr[val_num]->setStyleSheet("background-color:red");
        dig_val_ptr[val_num]->setText("False");
    }
}

void MainWindow::digital_val_0(){
    digital_val_all(0);
}

void MainWindow::digital_val_1(){
digital_val_all(1);
}

void MainWindow::digital_val_2(){
digital_val_all(2);
}

void MainWindow::digital_val_3(){
digital_val_all(3);
}

void MainWindow::digital_enable_all(bool enable){
    QPushButton* dig_dir_ptr[4];
    dig_dir_ptr[0]= ui->DIG_dir_0;
    dig_dir_ptr[1]= ui->DIG_dir_1;
    dig_dir_ptr[2]= ui->DIG_dir_2;
    dig_dir_ptr[3]= ui->DIG_dir_3;

    QPushButton* dig_val_ptr[4];
    dig_val_ptr[0]=ui->DIG_value_0;
    dig_val_ptr[1]=ui->DIG_value_1;
    dig_val_ptr[2]=ui->DIG_value_2;
    dig_val_ptr[3]=ui->DIG_value_3;
    for(int i=0;i<4;i++){
        dig_dir_ptr[i]->setEnabled(enable);
        if(dig_dir[i]==false){
            dig_val_ptr[i]->setEnabled(false);
        }
        else {
            dig_val_ptr[i]->setEnabled(enable);
        }

    }
}



void MainWindow::digital_check(){
    if(ui->DIG_check->isChecked()){
        digital_enable_all(true);
    }
    else {
        digital_enable_all(false);
    }
}

void MainWindow::analogin_check(){
    QLCDNumber* analog_in_ptr[4];
    analog_in_ptr[0]=ui->AN_num_0;
    analog_in_ptr[1]=ui->AN_num_1;
    analog_in_ptr[2]=ui->AN_num_2;
    analog_in_ptr[3]=ui->AN_num_3;

    if(ui->ANIN_check->isChecked()){
        for(int i=0;i<4;i++){
            analog_in_ptr[i]->setEnabled(true);
        }
    }
    else {
        for(int i=0;i<4;i++){
            analog_in_ptr[i]->setEnabled(false);
        }
    }

}

void MainWindow::analogout_check(){
    if(ui->ANOUT_check->isChecked()){
        ui->AN_out_0->setEnabled(true);
        ui->AN_out_1->setEnabled(true);
    }
    else {
        ui->AN_out_0->setEnabled(false);
        ui->AN_out_1->setEnabled(false);
    }
}
