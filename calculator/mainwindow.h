#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void additiveOperator();
    void onDigitClicked();
    void equalPressed();
    void clearPressed();
    void sqrtPressed();
    void percentPressed();

    void on_pushButtonPow_clicked();

    void on_pushButtonBackspace_clicked();

    void on_pushButtonMS_clicked();

    void on_pushButtonMR_clicked();

    void on_pushButtonMC_clicked();

    void on_pushButtonMplus_clicked();

    void on_pushButtonMminus_clicked();

    void on_pushButtonCE_clicked();

private:
    void calculate(double operand);
    Ui::MainWindow *ui;

    double rezult, memory;
    QString clickedOperator;
    bool operatorPressed;
};

#endif // MAINWINDOW_H
