/********************************************************************************
** Form generated from reading UI file 'swdcefvgb.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SWDCEFVGB_H
#define UI_SWDCEFVGB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_swdcefvgb
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *swdcefvgb)
    {
        if (swdcefvgb->objectName().isEmpty())
            swdcefvgb->setObjectName("swdcefvgb");
        swdcefvgb->resize(448, 173);
        pushButton = new QPushButton(swdcefvgb);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(130, 130, 80, 24));

        retranslateUi(swdcefvgb);

        QMetaObject::connectSlotsByName(swdcefvgb);
    } // setupUi

    void retranslateUi(QDialog *swdcefvgb)
    {
        swdcefvgb->setWindowTitle(QCoreApplication::translate("swdcefvgb", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("swdcefvgb", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class swdcefvgb: public Ui_swdcefvgb {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SWDCEFVGB_H
