/********************************************************************************
** Form generated from reading UI file 'login_form.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_FORM_H
#define UI_LOGIN_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_login_form
{
public:
    QLabel *label;
    QLineEdit *inp_username;
    QLineEdit *inp_password;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *btn_login;
    QPushButton *btn_cancel;
    QPushButton *btn_forget;
    QPushButton *btn_signup;
    QLabel *err_username;
    QLabel *err_password;
    QLabel *err_empty;

    void setupUi(QDialog *login_form)
    {
        if (login_form->objectName().isEmpty())
            login_form->setObjectName("login_form");
        login_form->resize(350, 500);
        login_form->setMaximumSize(QSize(350, 500));
        label = new QLabel(login_form);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 351, 501));
        label->setPixmap(QPixmap(QString::fromUtf8("../dsfg.png")));
        inp_username = new QLineEdit(login_form);
        inp_username->setObjectName("inp_username");
        inp_username->setGeometry(QRect(40, 199, 261, 41));
        inp_username->setSizeIncrement(QSize(0, 0));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        font.setPointSize(12);
        font.setBold(true);
        inp_username->setFont(font);
        inp_username->setLayoutDirection(Qt::LeftToRight);
        inp_username->setStyleSheet(QString::fromUtf8("border-bottom: 1px solid yellow;\n"
"background-color: rgb(11, 25, 38);\n"
"border-radius: 2px;\n"
"padding : 5px 45px 5px 45px;\n"
"color: rgb(255, 255, 255);\n"
"placeholder=\" ok \""));
        inp_username->setMaxLength(50);
        inp_password = new QLineEdit(login_form);
        inp_password->setObjectName("inp_password");
        inp_password->setGeometry(QRect(40, 295, 261, 41));
        inp_password->setSizeIncrement(QSize(0, 0));
        inp_password->setFont(font);
        inp_password->setLayoutDirection(Qt::LeftToRight);
        inp_password->setStyleSheet(QString::fromUtf8("border-bottom: 1px solid yellow;\n"
"background-color: rgb(11, 25, 38);\n"
"border-radius: 2px;\n"
"padding : 5px 45px 5px 45px;\n"
"color: rgb(255, 255, 255);\n"
"placeholder=\" ok \""));
        inp_password->setMaxLength(50);
        label_5 = new QLabel(login_form);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(80, 0, 160, 130));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        label_5->setPixmap(QPixmap(QString::fromUtf8("D:/LEARN/fsefewsfes.png")));
        label_7 = new QLabel(login_form);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(40, 110, 251, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Andalus")});
        font1.setPointSize(22);
        font1.setBold(false);
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_7->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(login_form);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 169, 91, 21));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("\n"
"color: rgba(255, 255, 255, 150);"));
        label_3 = new QLabel(login_form);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 265, 91, 21));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("\n"
"color: rgba(255, 255, 255, 150);"));
        btn_login = new QPushButton(login_form);
        btn_login->setObjectName("btn_login");
        btn_login->setGeometry(QRect(120, 374, 181, 40));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        btn_login->setFont(font2);
        btn_login->setCursor(QCursor(Qt::PointingHandCursor));
        btn_login->setMouseTracking(false);
        btn_login->setFocusPolicy(Qt::StrongFocus);
        btn_login->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgba(12, 0, 72, 60);\n"
"border: 1px solid yellow;\n"
"border-radius: 20px;\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(255, 255, 255);\n"
""));
        btn_cancel = new QPushButton(login_form);
        btn_cancel->setObjectName("btn_cancel");
        btn_cancel->setGeometry(QRect(40, 374, 71, 40));
        btn_cancel->setFont(font2);
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
        btn_forget = new QPushButton(login_form);
        btn_forget->setObjectName("btn_forget");
        btn_forget->setGeometry(QRect(40, 445, 261, 24));
        btn_forget->setCursor(QCursor(Qt::PointingHandCursor));
        btn_forget->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 10, 10);\n"
"border:0px;\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(255, 255, 255);\n"
""));
        btn_signup = new QPushButton(login_form);
        btn_signup->setObjectName("btn_signup");
        btn_signup->setGeometry(QRect(40, 472, 261, 24));
        btn_signup->setCursor(QCursor(Qt::PointingHandCursor));
        btn_signup->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 10, 10);\n"
"border:0px;\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(255, 255, 255);\n"
""));
        err_username = new QLabel(login_form);
        err_username->setObjectName("err_username");
        err_username->setGeometry(QRect(40, 245, 261, 16));
        err_username->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 4);"));
        err_password = new QLabel(login_form);
        err_password->setObjectName("err_password");
        err_password->setGeometry(QRect(40, 343, 261, 16));
        err_password->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 4);"));
        err_empty = new QLabel(login_form);
        err_empty->setObjectName("err_empty");
        err_empty->setGeometry(QRect(40, 425, 261, 16));
        err_empty->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 4);"));

        retranslateUi(login_form);

        QMetaObject::connectSlotsByName(login_form);
    } // setupUi

    void retranslateUi(QDialog *login_form)
    {
        login_form->setWindowTitle(QCoreApplication::translate("login_form", "LOGIN FORM", nullptr));
        label->setText(QString());
#if QT_CONFIG(tooltip)
        inp_username->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        inp_username->setInputMask(QString());
        inp_username->setText(QString());
        inp_username->setPlaceholderText(QCoreApplication::translate("login_form", "enter your username..", nullptr));
#if QT_CONFIG(tooltip)
        inp_password->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        inp_password->setInputMask(QString());
        inp_password->setText(QString());
        inp_password->setPlaceholderText(QCoreApplication::translate("login_form", "enter your password..", nullptr));
        label_5->setText(QString());
        label_7->setText(QCoreApplication::translate("login_form", "QUT LIBRARY", nullptr));
        label_2->setText(QCoreApplication::translate("login_form", "Username :", nullptr));
        label_3->setText(QCoreApplication::translate("login_form", "Password :", nullptr));
        btn_login->setText(QCoreApplication::translate("login_form", "login", nullptr));
        btn_cancel->setText(QCoreApplication::translate("login_form", "cancel", nullptr));
        btn_forget->setText(QCoreApplication::translate("login_form", "forget your password ?", nullptr));
        btn_signup->setText(QCoreApplication::translate("login_form", "dont have an account ?", nullptr));
        err_username->setText(QString());
        err_password->setText(QString());
        err_empty->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class login_form: public Ui_login_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_FORM_H
