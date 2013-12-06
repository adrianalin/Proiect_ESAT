#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QtMath>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    rezult(0.0),
    operatorPressed(false),
    memory(0)
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
    connect(ui->pushButtonPoint, SIGNAL(clicked()), this, SLOT(onDigitClicked()));

    //binary operator
    connect(ui->pushButtonPlus, SIGNAL(clicked()), this, SLOT(additiveOperator()));
    connect(ui->pushButtonMinus, SIGNAL(clicked()), this, SLOT(additiveOperator()));
    connect(ui->pushButtonStar, SIGNAL(clicked()), this, SLOT(additiveOperator()));
    connect(ui->pushButtonSlash, SIGNAL(clicked()), this, SLOT(additiveOperator()));
    connect(ui->pushButtonSQRT, SIGNAL(clicked()), this, SLOT(sqrtPressed()));
    connect(ui->pushButton_proc, SIGNAL(clicked()), this, SLOT(percentPressed()));

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
        if(clickedOperator.compare("x") == 0){
            rezult *= operand;
        }
        if(clickedOperator.compare("/") == 0){
            rezult /= operand;
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
    if(clickedOperator.compare("x") == 0){
        rezult *= ui->lineEdit->text().toDouble();
        ui->lineEdit->clear();
        ui->lineEdit->setText(QString::number(rezult));
    }
    if(clickedOperator.compare("/") == 0){
        rezult /= ui->lineEdit->text().toDouble();
        ui->lineEdit->clear();
        ui->lineEdit->setText(QString::number(rezult));
    }
    if(clickedOperator.compare("%") == 0){
        rezult *= ui->lineEdit->text().toDouble();
        ui->lineEdit->clear();
        ui->lineEdit->setText(QString::number(rezult));
    }

    rezult = 0.0;
}

void MainWindow::clearPressed(){
    ui->lineEdit->clear();
    rezult = 0.0;
}


void MainWindow::sqrtPressed(){
    if(ui->lineEdit->text().isEmpty() == false){
        rezult = qSqrt(ui->lineEdit->text().toDouble());
        ui->lineEdit->clear();
        ui->lineEdit->setText(QString::number(rezult));
    }
}


void MainWindow::percentPressed(){
    clickedOperator = "%";
    if(ui->lineEdit->text().isEmpty() == false){
        rezult = ui->lineEdit->text().toDouble() / 100. ;
        ui->lineEdit->clear();
    }
}

void MainWindow::on_pushButtonPow_clicked()
{
    if(ui->lineEdit->text().isEmpty() == false){
        rezult = ui->lineEdit->text().toDouble() * ui->lineEdit->text().toDouble();
        ui->lineEdit->clear();
        ui->lineEdit->setText(QString::number(rezult));
    }
}

void MainWindow::on_pushButtonBackspace_clicked()
{
    if(ui->lineEdit->text().isEmpty() == false){
        ui->lineEdit->setText(ui->lineEdit->text().mid(0, ui->lineEdit->text().length()-1));
    }
}

void MainWindow::on_pushButtonMS_clicked()
{
    memory = ui->lineEdit->text().toDouble();
}

void MainWindow::on_pushButtonMR_clicked()
{
    memory = 0;
}

void MainWindow::on_pushButtonMC_clicked()
{
    ui->lineEdit->clear();
    ui->lineEdit->setText(QString::number(memory));
}

void MainWindow::on_pushButtonMplus_clicked()
{
    memory = ui->lineEdit->text().toDouble() + memory;
    ui->lineEdit->setText(QString::number(memory));
}

void MainWindow::on_pushButtonMminus_clicked()
{
    memory = memory - ui->lineEdit->text().toDouble();
    ui->lineEdit->setText(QString::number(memory));
}

void MainWindow::on_pushButtonCE_clicked()
{
    ui->lineEdit->clear();
    memory = 0;
}
