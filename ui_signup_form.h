/********************************************************************************
** Form generated from reading UI file 'signup_form.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_FORM_H
#define UI_SIGNUP_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_signup_form
{
public:
    QLabel *label;
    QFrame *frame;
    QLineEdit *inp_phonenumber;
    QLabel *label_3;
    QLineEdit *inp_email;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_8;
    QLineEdit *inp_userid;
    QLineEdit *inp_password;
    QLabel *label_9;
    QLineEdit *inp_lastname;
    QLineEdit *inp_firstname;
    QLabel *err_username;
    QLabel *err_phonenumber;
    QLabel *err_email;
    QLabel *err_username_2;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label_20;
    QPushButton *btn_signup;
    QPushButton *pushButton_2;
    QPushButton *btn_cancel;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *err_empty;

    void setupUi(QDialog *signup_form)
    {
        if (signup_form->objectName().isEmpty())
            signup_form->setObjectName("signup_form");
        signup_form->resize(900, 500);
        label = new QLabel(signup_form);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 901, 501));
        label->setPixmap(QPixmap(QString::fromUtf8("../blue-mountain-9lbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbfzsxuzjrkpu6c.png")));
        frame = new QFrame(signup_form);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(20, 170, 860, 230));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255,255, 20);\n"
"border-radius:25px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        inp_phonenumber = new QLineEdit(frame);
        inp_phonenumber->setObjectName("inp_phonenumber");
        inp_phonenumber->setGeometry(QRect(160, 90, 261, 41));
        inp_phonenumber->setSizeIncrement(QSize(0, 0));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        font.setPointSize(12);
        font.setBold(true);
        inp_phonenumber->setFont(font);
        inp_phonenumber->setLayoutDirection(Qt::LeftToRight);
        inp_phonenumber->setStyleSheet(QString::fromUtf8("border-bottom: 1px solid yellow;\n"
"background-color: rgb(11, 25, 38);\n"
"border-radius: 2px;\n"
"padding : 5px 45px 5px 45px;\n"
"color: rgb(255, 255, 255);\n"
"placeholder=\" ok \""));
        inp_phonenumber->setMaxLength(50);
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 100, 131, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        font1.setPointSize(13);
        font1.setBold(true);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        inp_email = new QLineEdit(frame);
        inp_email->setObjectName("inp_email");
        inp_email->setGeometry(QRect(160, 160, 261, 41));
        inp_email->setSizeIncrement(QSize(0, 0));
        inp_email->setFont(font);
        inp_email->setLayoutDirection(Qt::LeftToRight);
        inp_email->setStyleSheet(QString::fromUtf8("border-bottom: 1px solid yellow;\n"
"background-color: rgb(11, 25, 38);\n"
"border-radius: 2px;\n"
"padding : 5px 45px 5px 45px;\n"
"color: rgb(255, 255, 255);\n"
"placeholder=\" ok \""));
        inp_email->setMaxLength(50);
        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 170, 131, 21));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(440, 40, 131, 21));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        label_8 = new QLabel(frame);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(440, 170, 131, 21));
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgba(255, 255, 255, 255);"));
        inp_userid = new QLineEdit(frame);
        inp_userid->setObjectName("inp_userid");
        inp_userid->setGeometry(QRect(580, 90, 261, 41));
        inp_userid->setSizeIncrement(QSize(0, 0));
        inp_userid->setFont(font);
        inp_userid->setLayoutDirection(Qt::LeftToRight);
        inp_userid->setStyleSheet(QString::fromUtf8("border-bottom: 1px solid yellow;\n"
"background-color: rgb(11, 25, 38);\n"
"border-radius: 2px;\n"
"padding : 5px 45px 5px 45px;\n"
"color: rgb(255, 255, 255);\n"
"placeholder=\" ok \""));
        inp_userid->setMaxLength(50);
        inp_password = new QLineEdit(frame);
        inp_password->setObjectName("inp_password");
        inp_password->setGeometry(QRect(580, 160, 261, 41));
        inp_password->setSizeIncrement(QSize(0, 0));
        inp_password->setFont(font);
        inp_password->setLayoutDirection(Qt::LeftToRight);
        inp_password->setStyleSheet(QString::fromUtf8("border-bottom: 1px solid yellow;\n"
"background-color: rgb(11, 25, 38);\n"
"border-radius: 2px;\n"
"padding : 5px 45px 5px 45px;\n"
"color: rgb(255, 255, 255);\n"
"placeholder=\" ok \"\n"
"background-color: rgb(11, 25, 38);"));
        inp_password->setMaxLength(50);
        label_9 = new QLabel(frame);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(440, 100, 131, 21));
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        inp_lastname = new QLineEdit(frame);
        inp_lastname->setObjectName("inp_lastname");
        inp_lastname->setGeometry(QRect(580, 30, 261, 41));
        inp_lastname->setSizeIncrement(QSize(0, 0));
        inp_lastname->setFont(font);
        inp_lastname->setLayoutDirection(Qt::LeftToRight);
        inp_lastname->setStyleSheet(QString::fromUtf8("border-bottom: 1px solid yellow;\n"
"background-color: rgb(11, 25, 38);\n"
"border-radius: 2px;\n"
"padding : 5px 45px 5px 45px;\n"
"color: rgb(255, 255, 255);\n"
"placeholder=\" ok \""));
        inp_lastname->setMaxLength(50);
        inp_firstname = new QLineEdit(frame);
        inp_firstname->setObjectName("inp_firstname");
        inp_firstname->setGeometry(QRect(160, 30, 261, 41));
        inp_firstname->setSizeIncrement(QSize(0, 0));
        inp_firstname->setFont(font);
        inp_firstname->setLayoutDirection(Qt::LeftToRight);
        inp_firstname->setStyleSheet(QString::fromUtf8("border-bottom: 1px solid yellow;\n"
"background-color: rgb(11, 25, 38);\n"
"border-radius: 2px;\n"
"padding : 5px 45px 5px 45px;\n"
"color: rgb(255, 255, 255);\n"
"placeholder=\" ok \""));
        inp_firstname->setMaxLength(50);
        err_username = new QLabel(frame);
        err_username->setObjectName("err_username");
        err_username->setGeometry(QRect(580, 136, 261, 16));
        err_username->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 0, 4);"));
        err_phonenumber = new QLabel(frame);
        err_phonenumber->setObjectName("err_phonenumber");
        err_phonenumber->setGeometry(QRect(163, 135, 251, 16));
        err_phonenumber->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 0, 4);"));
        err_email = new QLabel(frame);
        err_email->setObjectName("err_email");
        err_email->setGeometry(QRect(159, 206, 261, 16));
        err_email->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 0, 4);"));
        err_username_2 = new QLabel(frame);
        err_username_2->setObjectName("err_username_2");
        err_username_2->setGeometry(QRect(500, 120, 261, 16));
        err_username_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 0, 4);"));
        label_7 = new QLabel(signup_form);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(190, 50, 251, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Andalus")});
        font2.setPointSize(22);
        font2.setBold(false);
        label_7->setFont(font2);
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_7->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(signup_form);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 26, 160, 130));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        label_5->setPixmap(QPixmap(QString::fromUtf8("D:/LEARN/fsefewsfes.png")));
        label_2 = new QLabel(signup_form);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 210, 131, 21));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("\n"
"color: rgba(255, 255, 255, 255);"));
        label_20 = new QLabel(signup_form);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(190, 100, 251, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Andalus")});
        font3.setPointSize(13);
        font3.setBold(false);
        label_20->setFont(font3);
        label_20->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_20->setAlignment(Qt::AlignCenter);
        btn_signup = new QPushButton(signup_form);
        btn_signup->setObjectName("btn_signup");
        btn_signup->setGeometry(QRect(690, 440, 181, 40));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        btn_signup->setFont(font4);
        btn_signup->setCursor(QCursor(Qt::PointingHandCursor));
        btn_signup->setMouseTracking(false);
        btn_signup->setFocusPolicy(Qt::StrongFocus);
        btn_signup->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgba(12, 0, 72, 60);\n"
"border: 1px solid yellow;\n"
"border-radius: 20px;\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(255, 255, 255);\n"
""));
        pushButton_2 = new QPushButton(signup_form);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(340, 450, 261, 24));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 10, 10);\n"
"border:0px;\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(255, 255, 255);\n"
""));
        btn_cancel = new QPushButton(signup_form);
        btn_cancel->setObjectName("btn_cancel");
        btn_cancel->setGeometry(QRect(610, 440, 71, 40));
        btn_cancel->setFont(font4);
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
        label_10 = new QLabel(signup_form);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(570, 50, 221, 41));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Cooper Black")});
        font5.setPointSize(19);
        font5.setBold(false);
        label_10->setFont(font5);
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_10->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(signup_form);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(560, 100, 221, 41));
        label_11->setFont(font5);
        label_11->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_11->setAlignment(Qt::AlignCenter);
        err_empty = new QLabel(signup_form);
        err_empty->setObjectName("err_empty");
        err_empty->setGeometry(QRect(600, 410, 261, 16));
        err_empty->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 0, 4);"));

        retranslateUi(signup_form);

        QMetaObject::connectSlotsByName(signup_form);
    } // setupUi

    void retranslateUi(QDialog *signup_form)
    {
        signup_form->setWindowTitle(QCoreApplication::translate("signup_form", "SIGN UP FORM", nullptr));
        label->setText(QString());
#if QT_CONFIG(tooltip)
        inp_phonenumber->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        inp_phonenumber->setInputMask(QString());
        inp_phonenumber->setText(QString());
        inp_phonenumber->setPlaceholderText(QCoreApplication::translate("signup_form", "enter  phone number ..", nullptr));
        label_3->setText(QCoreApplication::translate("signup_form", "Phone Number :", nullptr));
#if QT_CONFIG(tooltip)
        inp_email->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        inp_email->setInputMask(QString());
        inp_email->setText(QString());
        inp_email->setPlaceholderText(QCoreApplication::translate("signup_form", "enter an Email..", nullptr));
        label_6->setText(QCoreApplication::translate("signup_form", "E Mail :", nullptr));
        label_4->setText(QCoreApplication::translate("signup_form", "Last  Name :", nullptr));
        label_8->setText(QCoreApplication::translate("signup_form", "Password :", nullptr));
#if QT_CONFIG(tooltip)
        inp_userid->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        inp_userid->setInputMask(QString());
        inp_userid->setText(QString());
        inp_userid->setPlaceholderText(QCoreApplication::translate("signup_form", "enter your username..", nullptr));
#if QT_CONFIG(tooltip)
        inp_password->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        inp_password->setInputMask(QString());
        inp_password->setText(QString());
        inp_password->setPlaceholderText(QCoreApplication::translate("signup_form", "enter a password..", nullptr));
        label_9->setText(QCoreApplication::translate("signup_form", "Username :", nullptr));
#if QT_CONFIG(tooltip)
        inp_lastname->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        inp_lastname->setInputMask(QString());
        inp_lastname->setText(QString());
        inp_lastname->setPlaceholderText(QCoreApplication::translate("signup_form", "enter your last name ..", nullptr));
#if QT_CONFIG(tooltip)
        inp_firstname->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        inp_firstname->setInputMask(QString());
        inp_firstname->setText(QString());
        inp_firstname->setPlaceholderText(QCoreApplication::translate("signup_form", "enter your first name ..", nullptr));
        err_username->setText(QString());
        err_phonenumber->setText(QString());
        err_email->setText(QString());
        err_username_2->setText(QString());
        label_7->setText(QCoreApplication::translate("signup_form", "QUT LIBRARY", nullptr));
        label_5->setText(QString());
        label_2->setText(QCoreApplication::translate("signup_form", "First Name :", nullptr));
        label_20->setText(QCoreApplication::translate("signup_form", "MANAGMENT SYSTEM", nullptr));
        btn_signup->setText(QCoreApplication::translate("signup_form", "sign up", nullptr));
        pushButton_2->setText(QCoreApplication::translate("signup_form", "already have an account ?", nullptr));
        btn_cancel->setText(QCoreApplication::translate("signup_form", "cancel", nullptr));
        label_10->setText(QCoreApplication::translate("signup_form", "wellcome to ", nullptr));
        label_11->setText(QCoreApplication::translate("signup_form", "qut library", nullptr));
        err_empty->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class signup_form: public Ui_signup_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_FORM_H
