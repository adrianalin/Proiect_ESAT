#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    rezult(0.0),
    operatorPressed(false)
{
    ui->setupUi(this);
    ui->lineEdit->setAlignment(Qt::AlignRight);

    //digit
    connect(ui->pushButton0, SIGNAL(clicked()), this, SLOT(onDigitClicked()));
    connect(ui->pushButton1, SIGNAL(clicked()), this, SLOT(onDigitClicked()));
    connect(ui->pushButton2, SIGNAL(clicked()), this, SLOT(onDigitClicked()));
    connect(ui->pushButton3, SIGNAL(clicked()), this, SLOT(onDigitClicked()));
    connect(ui->pushButton4, SIGNAL(clicked()), this, SLOT(onDigitClicked()));
    connect(ui->pushButton5, SIGNAL(clicked()), this, SLOT(onDigitClicked()));
    connect(ui->pushButton6, SIGNAL(clicked()), this, SLOT(onDigitClicked()));
    connect(ui->pushButton7, SIGNAL(clicked()), this, SLOT(onDigitClicked()));
    connect(ui->pushButton8, SIGNAL(clicked()), this, SLOT(onDigitClicked()));
    connect(ui->pushButton9, SIGNAL(clicked()), this, SLOT(onDigitClicked()));

    //binary operator
    connect(ui->pushButtonPlus, SIGNAL(clicked()), this, SLOT(additiveOperator()));
    connect(ui->pushButtonMinus, SIGNAL(clicked()), this, SLOT(additiveOperator()));

    //equal
    connect(ui->pushButtonEqual, SIGNAL(clicked()), this, SLOT(equalPressed()));

    //clear
    connect(ui->pushButtonC, SIGNAL(clicked()), this, SLOT(clearPressed()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onDigitClicked(){
    QPushButton* clickedButton = qobject_cast<QPushButton* > (sender());
    ui->lineEdit->setText(ui->lineEdit->text() + clickedButton->text());
}

void MainWindow::additiveOperator(){
    QPushButton* clickedButton =  qobject_cast<QPushButton* >(sender());
    clickedOperator = clickedButton->text();

    calculate(ui->lineEdit->text().toDouble());

    ui->lineEdit->clear();
}

void MainWindow::calculate(double operand){
    //init rezult to the default value
    if(operatorPressed == false){
        operatorPressed = true;
        rezult = operand;
    } else {
        if(clickedOperator.compare("+") == 0){
            rezult += operand;
        }
        if(clickedOperator.compare("-") == 0){
            rezult -= operand;
        }
    }
}

void MainWindow::equalPressed(){
    operatorPressed = false;
    if(clickedOperator.compare("+") == 0){
        rezult += ui->lineEdit->text().toDouble();
        ui->lineEdit->clear();
        ui->lineEdit->setText(QString::number(rezult));
    }
    if(clickedOperator.compare("-") == 0){
        rezult -= ui->lineEdit->text().toDouble();
        ui->lineEdit->clear();
        ui->lineEdit->setText(QString::number(rezult));
    }

    rezult = 0.0;
}

void MainWindow::clearPressed(){
    ui->lineEdit->clear();
    rezult = 0.0;
}
