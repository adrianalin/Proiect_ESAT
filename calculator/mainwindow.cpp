#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit->setAlignment(Qt::AlignRight);

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
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onDigitClicked(){
    QPushButton* clickedButton = qobject_cast<QPushButton* > (sender());
    ui->lineEdit->setText(ui->lineEdit->text() + clickedButton->text());
}
