/********************************************************************************
** Form generated from reading UI file 'drivermonitoringwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRIVERMONITORINGWIDGET_H
#define UI_DRIVERMONITORINGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DriverMonitoringWidget
{
public:
    QLabel *faceLabel;

    void setupUi(QWidget *DriverMonitoringWidget)
    {
        if (DriverMonitoringWidget->objectName().isEmpty())
            DriverMonitoringWidget->setObjectName("DriverMonitoringWidget");
        DriverMonitoringWidget->resize(805, 581);
        DriverMonitoringWidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color:#404E5C;\n"
"}"));
        faceLabel = new QLabel(DriverMonitoringWidget);
        faceLabel->setObjectName("faceLabel");
        faceLabel->setGeometry(QRect(0, 0, 761, 581));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(faceLabel->sizePolicy().hasHeightForWidth());
        faceLabel->setSizePolicy(sizePolicy);
        faceLabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"border: 2px solid #4F6272;\n"
"border-radius:20px;\n"
"padding-left:10px;\n"
"}\n"
"QLabel:Hover{\n"
"border: 2px solid #BFD7EA;\n"
"}"));
        faceLabel->setFrameShape(QFrame::Box);
        faceLabel->setLineWidth(3);

        retranslateUi(DriverMonitoringWidget);

        QMetaObject::connectSlotsByName(DriverMonitoringWidget);
    } // setupUi

    void retranslateUi(QWidget *DriverMonitoringWidget)
    {
        DriverMonitoringWidget->setWindowTitle(QCoreApplication::translate("DriverMonitoringWidget", "Form", nullptr));
        faceLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DriverMonitoringWidget: public Ui_DriverMonitoringWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRIVERMONITORINGWIDGET_H
