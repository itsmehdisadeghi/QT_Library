/********************************************************************************
** Form generated from reading UI file 'sw.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SW_H
#define UI_SW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sw
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *sw)
    {
        if (sw->objectName().isEmpty())
            sw->setObjectName("sw");
        sw->resize(800, 600);
        centralwidget = new QWidget(sw);
        centralwidget->setObjectName("centralwidget");
        sw->setCentralWidget(centralwidget);
        menubar = new QMenuBar(sw);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        sw->setMenuBar(menubar);
        statusbar = new QStatusBar(sw);
        statusbar->setObjectName("statusbar");
        sw->setStatusBar(statusbar);

        retranslateUi(sw);

        QMetaObject::connectSlotsByName(sw);
    } // setupUi

    void retranslateUi(QMainWindow *sw)
    {
        sw->setWindowTitle(QCoreApplication::translate("sw", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sw: public Ui_sw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SW_H
