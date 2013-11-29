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

private:
    void calculate(double operand);
    Ui::MainWindow *ui;

    double rezult;
    QString clickedOperator;
    bool operatorPressed;
};

#endif // MAINWINDOW_H
