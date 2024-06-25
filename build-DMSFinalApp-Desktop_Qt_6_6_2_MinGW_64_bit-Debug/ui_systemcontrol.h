/********************************************************************************
** Form generated from reading UI file 'systemcontrol.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEMCONTROL_H
#define UI_SYSTEMCONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SystemControl
{
public:
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *trialLineedit;
    QPushButton *sendtrialbutton;
    QLabel *label;
    QLabel *label_2;
    QPushButton *offbutton;
    QPushButton *onbutton;
    QComboBox *comboFaceDetection;
    QComboBox *comboHeadPose;
    QComboBox *comboEyeGaze;
    QLabel *border_labe;
    QLabel *border_labe_2;

    void setupUi(QWidget *SystemControl)
    {
        if (SystemControl->objectName().isEmpty())
            SystemControl->setObjectName("SystemControl");
        SystemControl->resize(332, 711);
        SystemControl->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color:#404E5C;\n"
"}"));
        label_3 = new QLabel(SystemControl);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 190, 161, 20));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        label_4 = new QLabel(SystemControl);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 320, 161, 20));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        label_5 = new QLabel(SystemControl);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(50, 450, 161, 20));
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        trialLineedit = new QLineEdit(SystemControl);
        trialLineedit->setObjectName("trialLineedit");
        trialLineedit->setGeometry(QRect(20, 590, 211, 28));
        trialLineedit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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
        sendtrialbutton = new QPushButton(SystemControl);
        sendtrialbutton->setObjectName("sendtrialbutton");
        sendtrialbutton->setGeometry(QRect(80, 630, 83, 29));
        sendtrialbutton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#4F6272; \n"
"color:white;\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:Hover{\n"
"background-color:#BFD7EA\n"
"}"));
        label = new QLabel(SystemControl);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 30, 121, 20));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(SystemControl);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 140, 108, 20));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        label_2->setAlignment(Qt::AlignCenter);
        offbutton = new QPushButton(SystemControl);
        offbutton->setObjectName("offbutton");
        offbutton->setGeometry(QRect(130, 80, 80, 29));
        offbutton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#4F6272; \n"
"color:white;\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:Hover{\n"
"background-color:#BFD7EA\n"
"}"));
        onbutton = new QPushButton(SystemControl);
        onbutton->setObjectName("onbutton");
        onbutton->setGeometry(QRect(30, 80, 80, 29));
        onbutton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#4F6272; \n"
"color:white;\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:Hover{\n"
"background-color:#BFD7EA\n"
"}"));
        comboFaceDetection = new QComboBox(SystemControl);
        comboFaceDetection->setObjectName("comboFaceDetection");
        comboFaceDetection->setGeometry(QRect(20, 230, 191, 51));
        comboFaceDetection->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"border: 2px solid #4F6272;\n"
"border-radius:20px;\n"
"color:white;\n"
"padding-left:10px;\n"
"	background-color: rgb(79, 98, 114);\n"
"}\n"
"QComboBox:Hover{\n"
"border: 2px solid #BFD7EA;\n"
"}\n"
"QComboBox:focus{\n"
"border: 2px solid white;\n"
"}"));
        comboHeadPose = new QComboBox(SystemControl);
        comboHeadPose->setObjectName("comboHeadPose");
        comboHeadPose->setGeometry(QRect(20, 360, 191, 51));
        comboHeadPose->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"border: 2px solid #4F6272;\n"
"border-radius:20px;\n"
"color:white;\n"
"padding-left:10px;\n"
"	background-color: rgb(79, 98, 114);\n"
"}\n"
"QComboBox:Hover{\n"
"border: 2px solid #BFD7EA;\n"
"}\n"
"QComboBox:focus{\n"
"border: 2px solid white;\n"
"}"));
        comboEyeGaze = new QComboBox(SystemControl);
        comboEyeGaze->setObjectName("comboEyeGaze");
        comboEyeGaze->setGeometry(QRect(30, 490, 191, 51));
        comboEyeGaze->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"border: 2px solid #4F6272;\n"
"border-radius:20px;\n"
"color:white;\n"
"padding-left:10px;\n"
"	background-color: rgb(79, 98, 114);\n"
"}\n"
"QComboBox:Hover{\n"
"border: 2px solid #BFD7EA;\n"
"}\n"
"QComboBox:focus{\n"
"border: 2px solid white;\n"
"}"));
        border_labe = new QLabel(SystemControl);
        border_labe->setObjectName("border_labe");
        border_labe->setGeometry(QRect(0, 0, 251, 671));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(border_labe->sizePolicy().hasHeightForWidth());
        border_labe->setSizePolicy(sizePolicy);
        border_labe->setStyleSheet(QString::fromUtf8("QLabel{\n"
"border: 2px solid #4F6272;\n"
"border-radius:20px;\n"
"padding-left:10px;\n"
"}\n"
"QLabel:Hover{\n"
"border: 2px solid #BFD7EA;\n"
"}"));
        border_labe->setFrameShape(QFrame::Box);
        border_labe->setLineWidth(3);
        border_labe_2 = new QLabel(SystemControl);
        border_labe_2->setObjectName("border_labe_2");
        border_labe_2->setGeometry(QRect(10, 150, 231, 421));
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
        border_labe->raise();
        border_labe_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        trialLineedit->raise();
        sendtrialbutton->raise();
        label->raise();
        label_2->raise();
        offbutton->raise();
        onbutton->raise();
        comboFaceDetection->raise();
        comboHeadPose->raise();
        comboEyeGaze->raise();

        retranslateUi(SystemControl);

        QMetaObject::connectSlotsByName(SystemControl);
    } // setupUi

    void retranslateUi(QWidget *SystemControl)
    {
        SystemControl->setWindowTitle(QCoreApplication::translate("SystemControl", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("SystemControl", "Face Detection Models", nullptr));
        label_4->setText(QCoreApplication::translate("SystemControl", "Head Pose Model", nullptr));
        label_5->setText(QCoreApplication::translate("SystemControl", "Eye Gaze Model", nullptr));
        sendtrialbutton->setText(QCoreApplication::translate("SystemControl", "Send", nullptr));
        label->setText(QCoreApplication::translate("SystemControl", "System ON/OFF", nullptr));
        label_2->setText(QCoreApplication::translate("SystemControl", "Model Selection", nullptr));
        offbutton->setText(QCoreApplication::translate("SystemControl", "OFF", nullptr));
        onbutton->setText(QCoreApplication::translate("SystemControl", "ON", nullptr));
        border_labe->setText(QString());
        border_labe_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SystemControl: public Ui_SystemControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEMCONTROL_H
