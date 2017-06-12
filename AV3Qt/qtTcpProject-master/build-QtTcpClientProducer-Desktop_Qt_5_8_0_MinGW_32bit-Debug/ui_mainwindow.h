/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *edtIP;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnConnect;
    QPushButton *btnDisconnect;
    QHBoxLayout *horizontalLayout_2;
    QSlider *minSlider;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLCDNumber *minLcd;
    QHBoxLayout *horizontalLayout_3;
    QSlider *maxSlider;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLCDNumber *maxLcd;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QSlider *timingSlider;
    QLabel *timingLbl;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btnStart;
    QPushButton *btnStop;
    QTextBrowser *textBrowser;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(672, 486);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 631, 401));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        edtIP = new QLineEdit(layoutWidget);
        edtIP->setObjectName(QStringLiteral("edtIP"));
        edtIP->setMinimumSize(QSize(0, 30));

        verticalLayout_3->addWidget(edtIP);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnConnect = new QPushButton(layoutWidget);
        btnConnect->setObjectName(QStringLiteral("btnConnect"));
        btnConnect->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(btnConnect);

        btnDisconnect = new QPushButton(layoutWidget);
        btnDisconnect->setObjectName(QStringLiteral("btnDisconnect"));
        btnDisconnect->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(btnDisconnect);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        minSlider = new QSlider(layoutWidget);
        minSlider->setObjectName(QStringLiteral("minSlider"));
        minSlider->setMinimum(1);
        minSlider->setMaximum(100);
        minSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(minSlider);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        minLcd = new QLCDNumber(layoutWidget);
        minLcd->setObjectName(QStringLiteral("minLcd"));
        minLcd->setMinimumSize(QSize(64, 41));
        minLcd->setProperty("intValue", QVariant(1));

        verticalLayout->addWidget(minLcd);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        maxSlider = new QSlider(layoutWidget);
        maxSlider->setObjectName(QStringLiteral("maxSlider"));
        maxSlider->setMinimum(1);
        maxSlider->setMaximum(100);
        maxSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(maxSlider);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        maxLcd = new QLCDNumber(layoutWidget);
        maxLcd->setObjectName(QStringLiteral("maxLcd"));
        maxLcd->setMinimumSize(QSize(64, 41));
        maxLcd->setProperty("intValue", QVariant(1));

        verticalLayout_2->addWidget(maxLcd);


        horizontalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_4->addWidget(label);

        timingSlider = new QSlider(layoutWidget);
        timingSlider->setObjectName(QStringLiteral("timingSlider"));
        timingSlider->setMinimum(1);
        timingSlider->setMaximum(20);
        timingSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(timingSlider);

        timingLbl = new QLabel(layoutWidget);
        timingLbl->setObjectName(QStringLiteral("timingLbl"));
        timingLbl->setMinimumSize(QSize(20, 0));

        horizontalLayout_4->addWidget(timingLbl);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        btnStart = new QPushButton(layoutWidget);
        btnStart->setObjectName(QStringLiteral("btnStart"));
        btnStart->setMinimumSize(QSize(0, 40));

        horizontalLayout_5->addWidget(btnStart);

        btnStop = new QPushButton(layoutWidget);
        btnStop->setObjectName(QStringLiteral("btnStop"));
        btnStop->setMinimumSize(QSize(0, 40));

        horizontalLayout_5->addWidget(btnStop);


        verticalLayout_3->addLayout(horizontalLayout_5);


        horizontalLayout_6->addLayout(verticalLayout_3);

        textBrowser = new QTextBrowser(layoutWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        horizontalLayout_6->addWidget(textBrowser);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 672, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(minSlider, SIGNAL(valueChanged(int)), minLcd, SLOT(display(int)));
        QObject::connect(maxSlider, SIGNAL(valueChanged(int)), maxLcd, SLOT(display(int)));
        QObject::connect(timingSlider, SIGNAL(valueChanged(int)), timingLbl, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        btnConnect->setText(QApplication::translate("MainWindow", "Connect", Q_NULLPTR));
        btnDisconnect->setText(QApplication::translate("MainWindow", "Disconnect", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Min", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Max", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Timing(s)", Q_NULLPTR));
        timingLbl->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        btnStart->setText(QApplication::translate("MainWindow", "Start", Q_NULLPTR));
        btnStop->setText(QApplication::translate("MainWindow", "Stop", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
