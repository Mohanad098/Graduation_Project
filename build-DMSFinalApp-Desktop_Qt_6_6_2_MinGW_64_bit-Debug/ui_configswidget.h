/********************************************************************************
** Form generated from reading UI file 'configswidget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGSWIDGET_H
#define UI_CONFIGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigsWidget
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QSpinBox *fps_spin;
    QSpinBox *fdt_spin;
    QComboBox *source_combo;
    QLineEdit *videoname;
    QPushButton *applybutton;
    QLabel *label_video;
    QLabel *border_labe;
    QLabel *border_labe_2;

    void setupUi(QWidget *ConfigsWidget)
    {
        if (ConfigsWidget->objectName().isEmpty())
            ConfigsWidget->setObjectName("ConfigsWidget");
        ConfigsWidget->resize(233, 677);
        ConfigsWidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color:#404E5C;\n"
"}"));
        label = new QLabel(ConfigsWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 20, 161, 20));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        label_2 = new QLabel(ConfigsWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 80, 131, 20));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        label_3 = new QLabel(ConfigsWidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 200, 181, 20));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        label_4 = new QLabel(ConfigsWidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 380, 181, 20));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        fps_spin = new QSpinBox(ConfigsWidget);
        fps_spin->setObjectName("fps_spin");
        fps_spin->setGeometry(QRect(30, 120, 161, 61));
        fps_spin->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"border: 2px solid #4F6272;\n"
"border-radius:20px;\n"
"color:white;\n"
"padding-left:10px;\n"
"	background-color: rgb(79, 98, 114);\n"
"}\n"
"QSpinBox:Hover{\n"
"border: 2px solid #BFD7EA;\n"
"}\n"
"QSpinBox:focus{\n"
"border: 2px solid white;\n"
"}"));
        fps_spin->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        fps_spin->setMinimum(1);
        fps_spin->setMaximum(60);
        fps_spin->setSingleStep(5);
        fps_spin->setValue(30);
        fdt_spin = new QSpinBox(ConfigsWidget);
        fdt_spin->setObjectName("fdt_spin");
        fdt_spin->setGeometry(QRect(30, 240, 161, 61));
        fdt_spin->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"border: 2px solid #4F6272;\n"
"border-radius:20px;\n"
"color:white;\n"
"padding-left:10px;\n"
"	background-color: rgb(79, 98, 114);\n"
"}\n"
"QSpinBox:Hover{\n"
"border: 2px solid #BFD7EA;\n"
"}\n"
"QSpinBox:focus{\n"
"border: 2px solid white;\n"
"}"));
        fdt_spin->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        fdt_spin->setSingleStep(5);
        fdt_spin->setValue(90);
        source_combo = new QComboBox(ConfigsWidget);
        source_combo->setObjectName("source_combo");
        source_combo->setEnabled(true);
        source_combo->setGeometry(QRect(10, 410, 181, 28));
        source_combo->setStyleSheet(QString::fromUtf8("QComboBox{\n"
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
        videoname = new QLineEdit(ConfigsWidget);
        videoname->setObjectName("videoname");
        videoname->setGeometry(QRect(10, 500, 181, 41));
        videoname->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border: 2px solid #4F6272;\n"
"\n"
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
        applybutton = new QPushButton(ConfigsWidget);
        applybutton->setObjectName("applybutton");
        applybutton->setGeometry(QRect(20, 570, 181, 61));
        applybutton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#4F6272; \n"
"color:white;\n"
"border-radius:1px;\n"
"}\n"
"\n"
"QPushButton:Hover{\n"
"background-color:#BFD7EA\n"
"}"));
        label_video = new QLabel(ConfigsWidget);
        label_video->setObjectName("label_video");
        label_video->setGeometry(QRect(10, 470, 91, 20));
        label_video->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        border_labe = new QLabel(ConfigsWidget);
        border_labe->setObjectName("border_labe");
        border_labe->setGeometry(QRect(0, 0, 221, 671));
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
        border_labe_2 = new QLabel(ConfigsWidget);
        border_labe_2->setObjectName("border_labe_2");
        border_labe_2->setGeometry(QRect(10, 60, 201, 271));
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
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        fps_spin->raise();
        fdt_spin->raise();
        source_combo->raise();
        videoname->raise();
        applybutton->raise();
        label_video->raise();

        retranslateUi(ConfigsWidget);

        source_combo->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(ConfigsWidget);
    } // setupUi

    void retranslateUi(QWidget *ConfigsWidget)
    {
        ConfigsWidget->setWindowTitle(QCoreApplication::translate("ConfigsWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("ConfigsWidget", "System Configurations", nullptr));
        label_2->setText(QCoreApplication::translate("ConfigsWidget", "Frames Per Second", nullptr));
        label_3->setText(QCoreApplication::translate("ConfigsWidget", "Face Detection Threshhold", nullptr));
        label_4->setText(QCoreApplication::translate("ConfigsWidget", "Capture Source", nullptr));
        applybutton->setText(QCoreApplication::translate("ConfigsWidget", "Apply Changes", nullptr));
        label_video->setText(QCoreApplication::translate("ConfigsWidget", "Video Name", nullptr));
        border_labe->setText(QString());
        border_labe_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ConfigsWidget: public Ui_ConfigsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGSWIDGET_H
