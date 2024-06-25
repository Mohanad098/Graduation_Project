/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *conn_layout;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *dm_layout;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *sysctrl_layout;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *cfgs_layout;
    QWidget *gridLayoutWidget;
    QGridLayout *readings_layout;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1344, 869);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"background-color:#404E5C\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 1311, 71));
        conn_layout = new QVBoxLayout(verticalLayoutWidget);
        conn_layout->setObjectName("conn_layout");
        conn_layout->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(291, 79, 761, 591));
        dm_layout = new QVBoxLayout(verticalLayoutWidget_2);
        dm_layout->setObjectName("dm_layout");
        dm_layout->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(10, 80, 271, 671));
        sysctrl_layout = new QVBoxLayout(verticalLayoutWidget_3);
        sysctrl_layout->setObjectName("sysctrl_layout");
        sysctrl_layout->setSizeConstraint(QLayout::SetDefaultConstraint);
        sysctrl_layout->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_4 = new QWidget(centralwidget);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayoutWidget_4->setGeometry(QRect(1060, 80, 251, 671));
        cfgs_layout = new QVBoxLayout(verticalLayoutWidget_4);
        cfgs_layout->setObjectName("cfgs_layout");
        cfgs_layout->setContentsMargins(0, 0, 0, 0);
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(290, 670, 761, 141));
        readings_layout = new QGridLayout(gridLayoutWidget);
        readings_layout->setObjectName("readings_layout");
        readings_layout->setContentsMargins(0, 0, 0, 0);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1344, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
