/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QPushButton *pushButton5;
    QPushButton *pushButton6;
    QPushButton *pushButtonStar;
    QPushButton *pushButtonMC;
    QPushButton *pushButton9;
    QPushButton *pushButtonMminus;
    QPushButton *pushButtonBackspace;
    QPushButton *pushButtonMS;
    QPushButton *pushButtonMplus;
    QPushButton *pushButton8;
    QPushButton *pushButtonSlash;
    QPushButton *pushButtonPlus;
    QPushButton *pushButtonCE;
    QPushButton *pushButtonMR;
    QPushButton *pushButtonC;
    QPushButton *pushButtonPlusMinus;
    QPushButton *pushButtonSQRT;
    QPushButton *pushButton3;
    QPushButton *pushButtonMinus;
    QPushButton *pushButton4;
    QPushButton *pushButtonEqual;
    QPushButton *pushButton_proc;
    QPushButton *pushButtonPow;
    QPushButton *pushButton1;
    QPushButton *pushButton2;
    QPushButton *pushButton0;
    QPushButton *pushButtonPoint;
    QPushButton *pushButton7;
    QLineEdit *lineEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(444, 241);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton5 = new QPushButton(centralWidget);
        pushButton5->setObjectName(QStringLiteral("pushButton5"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton5->sizePolicy().hasHeightForWidth());
        pushButton5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton5, 4, 1, 1, 1);

        pushButton6 = new QPushButton(centralWidget);
        pushButton6->setObjectName(QStringLiteral("pushButton6"));
        sizePolicy.setHeightForWidth(pushButton6->sizePolicy().hasHeightForWidth());
        pushButton6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton6, 4, 2, 1, 1);

        pushButtonStar = new QPushButton(centralWidget);
        pushButtonStar->setObjectName(QStringLiteral("pushButtonStar"));
        sizePolicy.setHeightForWidth(pushButtonStar->sizePolicy().hasHeightForWidth());
        pushButtonStar->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButtonStar, 4, 3, 1, 1);

        pushButtonMC = new QPushButton(centralWidget);
        pushButtonMC->setObjectName(QStringLiteral("pushButtonMC"));
        sizePolicy.setHeightForWidth(pushButtonMC->sizePolicy().hasHeightForWidth());
        pushButtonMC->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButtonMC, 1, 0, 1, 1);

        pushButton9 = new QPushButton(centralWidget);
        pushButton9->setObjectName(QStringLiteral("pushButton9"));
        sizePolicy.setHeightForWidth(pushButton9->sizePolicy().hasHeightForWidth());
        pushButton9->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton9, 3, 2, 1, 1);

        pushButtonMminus = new QPushButton(centralWidget);
        pushButtonMminus->setObjectName(QStringLiteral("pushButtonMminus"));
        sizePolicy.setHeightForWidth(pushButtonMminus->sizePolicy().hasHeightForWidth());
        pushButtonMminus->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButtonMminus, 1, 4, 1, 1);

        pushButtonBackspace = new QPushButton(centralWidget);
        pushButtonBackspace->setObjectName(QStringLiteral("pushButtonBackspace"));
        sizePolicy.setHeightForWidth(pushButtonBackspace->sizePolicy().hasHeightForWidth());
        pushButtonBackspace->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButtonBackspace, 2, 0, 1, 1);

        pushButtonMS = new QPushButton(centralWidget);
        pushButtonMS->setObjectName(QStringLiteral("pushButtonMS"));
        sizePolicy.setHeightForWidth(pushButtonMS->sizePolicy().hasHeightForWidth());
        pushButtonMS->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButtonMS, 1, 2, 1, 1);

        pushButtonMplus = new QPushButton(centralWidget);
        pushButtonMplus->setObjectName(QStringLiteral("pushButtonMplus"));
        sizePolicy.setHeightForWidth(pushButtonMplus->sizePolicy().hasHeightForWidth());
        pushButtonMplus->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButtonMplus, 1, 3, 1, 1);

        pushButton8 = new QPushButton(centralWidget);
        pushButton8->setObjectName(QStringLiteral("pushButton8"));
        sizePolicy.setHeightForWidth(pushButton8->sizePolicy().hasHeightForWidth());
        pushButton8->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton8, 3, 1, 1, 1);

        pushButtonSlash = new QPushButton(centralWidget);
        pushButtonSlash->setObjectName(QStringLiteral("pushButtonSlash"));
        sizePolicy.setHeightForWidth(pushButtonSlash->sizePolicy().hasHeightForWidth());
        pushButtonSlash->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButtonSlash, 3, 3, 1, 1);

        pushButtonPlus = new QPushButton(centralWidget);
        pushButtonPlus->setObjectName(QStringLiteral("pushButtonPlus"));
        sizePolicy.setHeightForWidth(pushButtonPlus->sizePolicy().hasHeightForWidth());
        pushButtonPlus->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButtonPlus, 6, 3, 1, 1);

        pushButtonCE = new QPushButton(centralWidget);
        pushButtonCE->setObjectName(QStringLiteral("pushButtonCE"));
        sizePolicy.setHeightForWidth(pushButtonCE->sizePolicy().hasHeightForWidth());
        pushButtonCE->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButtonCE, 2, 1, 1, 1);

        pushButtonMR = new QPushButton(centralWidget);
        pushButtonMR->setObjectName(QStringLiteral("pushButtonMR"));
        sizePolicy.setHeightForWidth(pushButtonMR->sizePolicy().hasHeightForWidth());
        pushButtonMR->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButtonMR, 1, 1, 1, 1);

        pushButtonC = new QPushButton(centralWidget);
        pushButtonC->setObjectName(QStringLiteral("pushButtonC"));
        sizePolicy.setHeightForWidth(pushButtonC->sizePolicy().hasHeightForWidth());
        pushButtonC->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButtonC, 2, 2, 1, 1);

        pushButtonPlusMinus = new QPushButton(centralWidget);
        pushButtonPlusMinus->setObjectName(QStringLiteral("pushButtonPlusMinus"));
        sizePolicy.setHeightForWidth(pushButtonPlusMinus->sizePolicy().hasHeightForWidth());
        pushButtonPlusMinus->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButtonPlusMinus, 2, 3, 1, 1);

        pushButtonSQRT = new QPushButton(centralWidget);
        pushButtonSQRT->setObjectName(QStringLiteral("pushButtonSQRT"));
        sizePolicy.setHeightForWidth(pushButtonSQRT->sizePolicy().hasHeightForWidth());
        pushButtonSQRT->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButtonSQRT, 2, 4, 1, 1);

        pushButton3 = new QPushButton(centralWidget);
        pushButton3->setObjectName(QStringLiteral("pushButton3"));
        sizePolicy.setHeightForWidth(pushButton3->sizePolicy().hasHeightForWidth());
        pushButton3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton3, 5, 2, 1, 1);

        pushButtonMinus = new QPushButton(centralWidget);
        pushButtonMinus->setObjectName(QStringLiteral("pushButtonMinus"));
        sizePolicy.setHeightForWidth(pushButtonMinus->sizePolicy().hasHeightForWidth());
        pushButtonMinus->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButtonMinus, 5, 3, 1, 1);

        pushButton4 = new QPushButton(centralWidget);
        pushButton4->setObjectName(QStringLiteral("pushButton4"));
        sizePolicy.setHeightForWidth(pushButton4->sizePolicy().hasHeightForWidth());
        pushButton4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton4, 4, 0, 1, 1);

        pushButtonEqual = new QPushButton(centralWidget);
        pushButtonEqual->setObjectName(QStringLiteral("pushButtonEqual"));
        sizePolicy.setHeightForWidth(pushButtonEqual->sizePolicy().hasHeightForWidth());
        pushButtonEqual->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButtonEqual, 5, 4, 2, 1);

        pushButton_proc = new QPushButton(centralWidget);
        pushButton_proc->setObjectName(QStringLiteral("pushButton_proc"));
        sizePolicy.setHeightForWidth(pushButton_proc->sizePolicy().hasHeightForWidth());
        pushButton_proc->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_proc, 3, 4, 1, 1);

        pushButtonPow = new QPushButton(centralWidget);
        pushButtonPow->setObjectName(QStringLiteral("pushButtonPow"));
        sizePolicy.setHeightForWidth(pushButtonPow->sizePolicy().hasHeightForWidth());
        pushButtonPow->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButtonPow, 4, 4, 1, 1);

        pushButton1 = new QPushButton(centralWidget);
        pushButton1->setObjectName(QStringLiteral("pushButton1"));
        sizePolicy.setHeightForWidth(pushButton1->sizePolicy().hasHeightForWidth());
        pushButton1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton1, 5, 0, 1, 1);

        pushButton2 = new QPushButton(centralWidget);
        pushButton2->setObjectName(QStringLiteral("pushButton2"));
        sizePolicy.setHeightForWidth(pushButton2->sizePolicy().hasHeightForWidth());
        pushButton2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton2, 5, 1, 1, 1);

        pushButton0 = new QPushButton(centralWidget);
        pushButton0->setObjectName(QStringLiteral("pushButton0"));
        sizePolicy.setHeightForWidth(pushButton0->sizePolicy().hasHeightForWidth());
        pushButton0->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton0, 6, 0, 1, 2);

        pushButtonPoint = new QPushButton(centralWidget);
        pushButtonPoint->setObjectName(QStringLiteral("pushButtonPoint"));
        sizePolicy.setHeightForWidth(pushButtonPoint->sizePolicy().hasHeightForWidth());
        pushButtonPoint->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButtonPoint, 6, 2, 1, 1);

        pushButton7 = new QPushButton(centralWidget);
        pushButton7->setObjectName(QStringLiteral("pushButton7"));
        sizePolicy.setHeightForWidth(pushButton7->sizePolicy().hasHeightForWidth());
        pushButton7->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton7, 3, 0, 1, 1);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        lineEdit->setLayoutDirection(Qt::LeftToRight);
        lineEdit->setReadOnly(true);

        gridLayout->addWidget(lineEdit, 0, 0, 1, 5);


        horizontalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralWidget);
        QWidget::setTabOrder(pushButtonMC, pushButtonMR);
        QWidget::setTabOrder(pushButtonMR, pushButtonMS);
        QWidget::setTabOrder(pushButtonMS, pushButtonMplus);
        QWidget::setTabOrder(pushButtonMplus, pushButtonMminus);
        QWidget::setTabOrder(pushButtonMminus, pushButtonBackspace);
        QWidget::setTabOrder(pushButtonBackspace, pushButtonCE);
        QWidget::setTabOrder(pushButtonCE, pushButtonC);
        QWidget::setTabOrder(pushButtonC, pushButtonPlusMinus);
        QWidget::setTabOrder(pushButtonPlusMinus, pushButtonSQRT);
        QWidget::setTabOrder(pushButtonSQRT, pushButton7);
        QWidget::setTabOrder(pushButton7, pushButton8);
        QWidget::setTabOrder(pushButton8, pushButton9);
        QWidget::setTabOrder(pushButton9, pushButtonSlash);
        QWidget::setTabOrder(pushButtonSlash, pushButton_proc);
        QWidget::setTabOrder(pushButton_proc, pushButton4);
        QWidget::setTabOrder(pushButton4, pushButton5);
        QWidget::setTabOrder(pushButton5, pushButton6);
        QWidget::setTabOrder(pushButton6, pushButtonStar);
        QWidget::setTabOrder(pushButtonStar, pushButtonPow);
        QWidget::setTabOrder(pushButtonPow, pushButton1);
        QWidget::setTabOrder(pushButton1, pushButton2);
        QWidget::setTabOrder(pushButton2, pushButton3);
        QWidget::setTabOrder(pushButton3, pushButtonMinus);
        QWidget::setTabOrder(pushButtonMinus, pushButtonEqual);
        QWidget::setTabOrder(pushButtonEqual, pushButton0);
        QWidget::setTabOrder(pushButton0, pushButtonPoint);
        QWidget::setTabOrder(pushButtonPoint, pushButtonPlus);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButton5->setText(QApplication::translate("MainWindow", "5", 0));
        pushButton6->setText(QApplication::translate("MainWindow", "6", 0));
        pushButtonStar->setText(QApplication::translate("MainWindow", "x", 0));
        pushButtonMC->setText(QApplication::translate("MainWindow", "MC", 0));
        pushButton9->setText(QApplication::translate("MainWindow", "9", 0));
        pushButtonMminus->setText(QApplication::translate("MainWindow", "M-", 0));
        pushButtonBackspace->setText(QApplication::translate("MainWindow", "<-", 0));
        pushButtonMS->setText(QApplication::translate("MainWindow", "MS", 0));
        pushButtonMplus->setText(QApplication::translate("MainWindow", "M+", 0));
        pushButton8->setText(QApplication::translate("MainWindow", "8", 0));
        pushButtonSlash->setText(QApplication::translate("MainWindow", "/", 0));
        pushButtonPlus->setText(QApplication::translate("MainWindow", "+", 0));
        pushButtonCE->setText(QApplication::translate("MainWindow", "CE", 0));
        pushButtonMR->setText(QApplication::translate("MainWindow", "MR", 0));
        pushButtonC->setText(QApplication::translate("MainWindow", "C", 0));
        pushButtonPlusMinus->setText(QApplication::translate("MainWindow", "+/-", 0));
        pushButtonSQRT->setText(QApplication::translate("MainWindow", "sqrt", 0));
        pushButton3->setText(QApplication::translate("MainWindow", "3", 0));
        pushButtonMinus->setText(QApplication::translate("MainWindow", "-", 0));
        pushButton4->setText(QApplication::translate("MainWindow", "4", 0));
        pushButtonEqual->setText(QApplication::translate("MainWindow", "=", 0));
        pushButton_proc->setText(QApplication::translate("MainWindow", "%", 0));
        pushButtonPow->setText(QApplication::translate("MainWindow", "x^2", 0));
        pushButton1->setText(QApplication::translate("MainWindow", "1", 0));
        pushButton2->setText(QApplication::translate("MainWindow", "2", 0));
        pushButton0->setText(QApplication::translate("MainWindow", "0", 0));
        pushButtonPoint->setText(QApplication::translate("MainWindow", ".", 0));
        pushButton7->setText(QApplication::translate("MainWindow", "7", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
