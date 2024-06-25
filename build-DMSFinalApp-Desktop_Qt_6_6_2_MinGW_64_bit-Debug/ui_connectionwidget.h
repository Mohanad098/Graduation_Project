/********************************************************************************
** Form generated from reading UI file 'connectionwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTIONWIDGET_H
#define UI_CONNECTIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConnectionWidget
{
public:
    QLineEdit *ipLineEdit;
    QLineEdit *portLineEdit;
    QPushButton *connectButton;
    QPushButton *disconnectButton;
    QLabel *statusLabel;
    QLabel *border_labe_2;

    void setupUi(QWidget *ConnectionWidget)
    {
        if (ConnectionWidget->objectName().isEmpty())
            ConnectionWidget->setObjectName("ConnectionWidget");
        ConnectionWidget->resize(1383, 87);
        ConnectionWidget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #404E5C;\n"
"}\n"
"\n"
"QLineEdit#lineEdit1, QLineEdit#lineEdit2 {\n"
"    border: 2px solid #4F6272;\n"
"    border-radius: 20px;\n"
"    color: white;\n"
"    padding-left: 10px;\n"
"    background-color: rgb(79, 98, 114);\n"
"}\n"
"QLineEdit#lineEdit1:hover, QLineEdit#lineEdit2:hover {\n"
"    border: 2px solid #BFD7EA;\n"
"}\n"
"QLineEdit#lineEdit1:focus, QLineEdit#lineEdit2:focus {\n"
"    border: 2px solid white;\n"
"}\n"
""));
        ipLineEdit = new QLineEdit(ConnectionWidget);
        ipLineEdit->setObjectName("ipLineEdit");
        ipLineEdit->setGeometry(QRect(20, 20, 381, 31));
        ipLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border: 2px solid #4F6272;\n"
"border-radius:20px;\n"
"color:white;\n"
"padding-left:10px;\n"
"	background-color: rgb(79, 98, 114);\n"
"}\n"
"QLineEdit:Hover{\n"
"border: 2px solid #BFD7EA;\n"
"}\n"
"QLineEdit:focus{\n"
"border: 2px solid white;\n"
"}"));
        portLineEdit = new QLineEdit(ConnectionWidget);
        portLineEdit->setObjectName("portLineEdit");
        portLineEdit->setGeometry(QRect(430, 20, 191, 31));
        portLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border: 2px solid #4F6272;\n"
"border-radius:20px;\n"
"color:white;\n"
"padding-left:10px;\n"
"	background-color: rgb(79, 98, 114);\n"
"}\n"
"QLineEdit:Hover{\n"
"border: 2px solid #BFD7EA;\n"
"}\n"
"QLineEdit:focus{\n"
"border: 2px solid white;\n"
"}"));
        connectButton = new QPushButton(ConnectionWidget);
        connectButton->setObjectName("connectButton");
        connectButton->setGeometry(QRect(660, 20, 151, 31));
        connectButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#4F6272; \n"
"color:white;\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:Hover{\n"
"background-color:#BFD7EA\n"
"}"));
        disconnectButton = new QPushButton(ConnectionWidget);
        disconnectButton->setObjectName("disconnectButton");
        disconnectButton->setGeometry(QRect(840, 20, 151, 31));
        disconnectButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#4F6272; \n"
"color:white;\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:Hover{\n"
"background-color:#BFD7EA\n"
"}"));
        statusLabel = new QLabel(ConnectionWidget);
        statusLabel->setObjectName("statusLabel");
        statusLabel->setGeometry(QRect(1010, 20, 251, 31));
        statusLabel->setAlignment(Qt::AlignCenter);
        border_labe_2 = new QLabel(ConnectionWidget);
        border_labe_2->setObjectName("border_labe_2");
        border_labe_2->setGeometry(QRect(10, 10, 1271, 51));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(border_labe_2->sizePolicy().hasHeightForWidth());
        border_labe_2->setSizePolicy(sizePolicy);
        border_labe_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"border: 2px solid #4F6272;\n"
"border-radius:20px;\n"
"padding-left:10px;\n"
"}\n"
"QLabel:Hover{\n"
"border: 2px solid #BFD7EA;\n"
"}"));
        border_labe_2->setFrameShape(QFrame::Box);
        border_labe_2->setLineWidth(3);
        border_labe_2->raise();
        ipLineEdit->raise();
        portLineEdit->raise();
        connectButton->raise();
        disconnectButton->raise();
        statusLabel->raise();

        retranslateUi(ConnectionWidget);

        QMetaObject::connectSlotsByName(ConnectionWidget);
    } // setupUi

    void retranslateUi(QWidget *ConnectionWidget)
    {
        ConnectionWidget->setWindowTitle(QCoreApplication::translate("ConnectionWidget", "Form", nullptr));
        ipLineEdit->setPlaceholderText(QCoreApplication::translate("ConnectionWidget", "Enter IP Address...", nullptr));
        portLineEdit->setPlaceholderText(QCoreApplication::translate("ConnectionWidget", "Enter Port Number...", nullptr));
        connectButton->setText(QCoreApplication::translate("ConnectionWidget", "Connect", nullptr));
        disconnectButton->setText(QCoreApplication::translate("ConnectionWidget", "Disconnect", nullptr));
        statusLabel->setText(QString());
        border_labe_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ConnectionWidget: public Ui_ConnectionWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTIONWIDGET_H
