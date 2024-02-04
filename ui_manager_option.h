/********************************************************************************
** Form generated from reading UI file 'manager_option.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGER_OPTION_H
#define UI_MANAGER_OPTION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_manager_option
{
public:
    QLabel *label;
    QLineEdit *inp;
    QPushButton *btn_cancel;
    QLabel *err_empty;
    QPushButton *btn;
    QLabel *label_5;
    QLabel *lbl_text;

    void setupUi(QDialog *manager_option)
    {
        if (manager_option->objectName().isEmpty())
            manager_option->setObjectName("manager_option");
        manager_option->resize(700, 213);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../New folder/icons8-manager-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        manager_option->setWindowIcon(icon);
        label = new QLabel(manager_option);
        label->setObjectName("label");
        label->setGeometry(QRect(0, -30, 701, 251));
        label->setPixmap(QPixmap(QString::fromUtf8("../ghghjkikl.png")));
        inp = new QLineEdit(manager_option);
        inp->setObjectName("inp");
        inp->setGeometry(QRect(220, 119, 261, 41));
        inp->setSizeIncrement(QSize(0, 0));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        font.setPointSize(12);
        font.setBold(true);
        inp->setFont(font);
        inp->setLayoutDirection(Qt::LeftToRight);
        inp->setStyleSheet(QString::fromUtf8("border-bottom: 1px solid yellow;\n"
"background-color: rgb(11, 25, 38);\n"
"border-radius: 2px;\n"
"padding : 5px 45px 5px 45px;\n"
"color: rgb(255, 255, 255);\n"
"placeholder=\" ok \""));
        inp->setMaxLength(50);
        inp->setPlaceholderText(QString::fromUtf8(""));
        btn_cancel = new QPushButton(manager_option);
        btn_cancel->setObjectName("btn_cancel");
        btn_cancel->setGeometry(QRect(500, 120, 180, 40));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        btn_cancel->setFont(font1);
        btn_cancel->setCursor(QCursor(Qt::PointingHandCursor));
        btn_cancel->setMouseTracking(false);
        btn_cancel->setFocusPolicy(Qt::StrongFocus);
        btn_cancel->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgba(12, 0, 72, 60);\n"
"border: 1px solid yellow;\n"
"border-radius: 20px;\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(255, 255, 255);\n"
""));
        err_empty = new QLabel(manager_option);
        err_empty->setObjectName("err_empty");
        err_empty->setGeometry(QRect(220, 174, 261, 16));
        err_empty->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 4);"));
        btn = new QPushButton(manager_option);
        btn->setObjectName("btn");
        btn->setGeometry(QRect(500, 50, 181, 40));
        btn->setFont(font1);
        btn->setCursor(QCursor(Qt::PointingHandCursor));
        btn->setMouseTracking(false);
        btn->setFocusPolicy(Qt::StrongFocus);
        btn->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgba(12, 0, 72, 60);\n"
"border: 1px solid yellow;\n"
"border-radius: 20px;\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(255, 255, 255);\n"
""));
        label_5 = new QLabel(manager_option);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 40, 160, 130));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        label_5->setPixmap(QPixmap(QString::fromUtf8("D:/LEARN/fsefewsfes.png")));
        lbl_text = new QLabel(manager_option);
        lbl_text->setObjectName("lbl_text");
        lbl_text->setGeometry(QRect(220, 60, 261, 31));
        lbl_text->setFont(font);
        lbl_text->setStyleSheet(QString::fromUtf8("\n"
"color: rgba(255, 255, 255, 150);"));

        retranslateUi(manager_option);

        QMetaObject::connectSlotsByName(manager_option);
    } // setupUi

    void retranslateUi(QDialog *manager_option)
    {
        manager_option->setWindowTitle(QCoreApplication::translate("manager_option", "manager option", nullptr));
        label->setText(QString());
#if QT_CONFIG(tooltip)
        inp->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        inp->setInputMask(QString());
        inp->setText(QString());
        btn_cancel->setText(QCoreApplication::translate("manager_option", "cancel", nullptr));
        err_empty->setText(QString());
        btn->setText(QString());
        label_5->setText(QString());
        lbl_text->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class manager_option: public Ui_manager_option {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGER_OPTION_H
