/********************************************************************************
** Form generated from reading UI file 'profile_form.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILE_FORM_H
#define UI_PROFILE_FORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_profile_form
{
public:
    QLabel *label;
    QLabel *label_7;
    QLabel *lbl_name;
    QLabel *label_30;
    QLabel *label_6;
    QLabel *lbl_profile_username;
    QLabel *label_5;
    QFrame *frame;
    QPushButton *btn_insert_book;
    QPushButton *btn_request_a_car;
    QPushButton *btn_return_a_book;
    QPushButton *btn_reserved_book;
    QFrame *frame_3;
    QLabel *lbl_firstname;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *lbl_phonenumber;
    QLabel *label_14;
    QLabel *lbl_username;
    QLabel *label_15;
    QLabel *lbl_lastname;
    QLabel *lbl_email;
    QLabel *label_18;

    void setupUi(QDialog *profile_form)
    {
        if (profile_form->objectName().isEmpty())
            profile_form->setObjectName("profile_form");
        profile_form->resize(900, 500);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../New folder/icons8-manager-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        profile_form->setWindowIcon(icon);
        label = new QLabel(profile_form);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 901, 501));
        label->setPixmap(QPixmap(QString::fromUtf8("../blue-mountain-9lbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbfzsxuzjrkpu6c.png")));
        label_7 = new QLabel(profile_form);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(480, 56, 251, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Andalus")});
        font.setPointSize(22);
        font.setBold(false);
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_7->setAlignment(Qt::AlignCenter);
        lbl_name = new QLabel(profile_form);
        lbl_name->setObjectName("lbl_name");
        lbl_name->setGeometry(QRect(140, 60, 171, 20));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        font1.setPointSize(18);
        font1.setBold(true);
        lbl_name->setFont(font1);
        lbl_name->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);\n"
""));
        label_30 = new QLabel(profile_form);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(480, 100, 251, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Andalus")});
        font2.setPointSize(13);
        font2.setBold(false);
        label_30->setFont(font2);
        label_30->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_30->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(profile_form);
        label_6->setObjectName("label_6");
        label_6->setEnabled(true);
        label_6->setGeometry(QRect(16, 30, 131, 131));
        label_6->setPixmap(QPixmap(QString::fromUtf8("D:/asdfgh.png")));
        label_6->setIndent(-15);
        lbl_profile_username = new QLabel(profile_form);
        lbl_profile_username->setObjectName("lbl_profile_username");
        lbl_profile_username->setGeometry(QRect(140, 90, 171, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        font3.setPointSize(15);
        font3.setBold(true);
        lbl_profile_username->setFont(font3);
        lbl_profile_username->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);\n"
""));
        label_5 = new QLabel(profile_form);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(690, 30, 160, 130));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        label_5->setPixmap(QPixmap(QString::fromUtf8("D:/LEARN/fsefewsfes.png")));
        frame = new QFrame(profile_form);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(510, 200, 351, 260));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255,255, 20);\n"
"border-radius:25px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        btn_insert_book = new QPushButton(frame);
        btn_insert_book->setObjectName("btn_insert_book");
        btn_insert_book->setGeometry(QRect(30, 10, 271, 40));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        btn_insert_book->setFont(font4);
        btn_insert_book->setCursor(QCursor(Qt::PointingHandCursor));
        btn_insert_book->setMouseTracking(false);
        btn_insert_book->setFocusPolicy(Qt::StrongFocus);
        btn_insert_book->setStyleSheet(QString::fromUtf8("border-bottom: 1px solid yellow;\n"
"background-color: rgba(0, 0, 255 , 10);\n"
"border-radius: 1px;\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(255, 255, 255);\n"
"text-align: left;\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../New folder/icons8-book-60.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_insert_book->setIcon(icon1);
        btn_request_a_car = new QPushButton(frame);
        btn_request_a_car->setObjectName("btn_request_a_car");
        btn_request_a_car->setGeometry(QRect(30, 140, 271, 40));
        btn_request_a_car->setFont(font4);
        btn_request_a_car->setCursor(QCursor(Qt::PointingHandCursor));
        btn_request_a_car->setMouseTracking(false);
        btn_request_a_car->setFocusPolicy(Qt::StrongFocus);
        btn_request_a_car->setStyleSheet(QString::fromUtf8("text-align: left;\n"
"border-bottom: 1px solid yellow;\n"
"background-color: rgba(0, 0, 255 , 10);\n"
"border-radius: 1px;\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(255, 255, 255);\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../New folder/icons8-membership-card-60.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_request_a_car->setIcon(icon2);
        btn_return_a_book = new QPushButton(frame);
        btn_return_a_book->setObjectName("btn_return_a_book");
        btn_return_a_book->setGeometry(QRect(30, 80, 271, 40));
        btn_return_a_book->setFont(font4);
        btn_return_a_book->setCursor(QCursor(Qt::PointingHandCursor));
        btn_return_a_book->setMouseTracking(false);
        btn_return_a_book->setFocusPolicy(Qt::StrongFocus);
        btn_return_a_book->setStyleSheet(QString::fromUtf8("border-bottom: 1px solid yellow;\n"
"background-color: rgba(0, 0, 255 , 10);\n"
"border-radius: 1px;\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(255, 255, 255);\n"
"text-align: left;\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../New folder/icons8-return-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_return_a_book->setIcon(icon3);
        btn_reserved_book = new QPushButton(frame);
        btn_reserved_book->setObjectName("btn_reserved_book");
        btn_reserved_book->setGeometry(QRect(30, 200, 271, 40));
        btn_reserved_book->setFont(font4);
        btn_reserved_book->setCursor(QCursor(Qt::PointingHandCursor));
        btn_reserved_book->setMouseTracking(false);
        btn_reserved_book->setFocusPolicy(Qt::StrongFocus);
        btn_reserved_book->setStyleSheet(QString::fromUtf8("text-align: left;\n"
"border-bottom: 1px solid yellow;\n"
"background-color: rgba(0, 0, 255 , 10);\n"
"border-radius: 1px;\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(255, 255, 255);\n"
""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../New folder/icons8-library-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_reserved_book->setIcon(icon4);
        frame_3 = new QFrame(profile_form);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(30, 190, 441, 270));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255,255, 20);\n"
"border-radius:25px;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        lbl_firstname = new QLabel(frame_3);
        lbl_firstname->setObjectName("lbl_firstname");
        lbl_firstname->setGeometry(QRect(180, 10, 241, 41));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        font5.setPointSize(13);
        font5.setBold(true);
        lbl_firstname->setFont(font5);
        lbl_firstname->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-bottom: 1px solid yellow;\n"
"background-color: rgba(0, 0, 255 , 10);\n"
"border-radius: 1px;\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(255, 255, 255);\n"
""));
        label_12 = new QLabel(frame_3);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(10, 10, 160, 41));
        label_12->setFont(font5);
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"\n"
"background-color: rgba(0, 0, 255 , 10);\n"
"\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(255, 255, 255);\n"
""));
        label_13 = new QLabel(frame_3);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(10, 160, 160, 41));
        label_13->setFont(font5);
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"\n"
"background-color: rgba(0, 0, 255 , 10);\n"
"\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(255, 255, 255);\n"
""));
        lbl_phonenumber = new QLabel(frame_3);
        lbl_phonenumber->setObjectName("lbl_phonenumber");
        lbl_phonenumber->setGeometry(QRect(180, 160, 241, 41));
        lbl_phonenumber->setFont(font5);
        lbl_phonenumber->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-bottom: 1px solid yellow;\n"
"background-color: rgba(0, 0, 255 , 10);\n"
"border-radius: 1px;\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(255, 255, 255);\n"
""));
        label_14 = new QLabel(frame_3);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(10, 110, 160, 41));
        label_14->setFont(font5);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"\n"
"background-color: rgba(0, 0, 255 , 10);\n"
"\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(255, 255, 255);\n"
""));
        lbl_username = new QLabel(frame_3);
        lbl_username->setObjectName("lbl_username");
        lbl_username->setGeometry(QRect(180, 110, 241, 41));
        lbl_username->setFont(font5);
        lbl_username->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-bottom: 1px solid yellow;\n"
"background-color: rgba(0, 0, 255 , 10);\n"
"border-radius: 1px;\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(255, 255, 255);\n"
""));
        label_15 = new QLabel(frame_3);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(10, 60, 160, 41));
        label_15->setFont(font5);
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"\n"
"background-color: rgba(0, 0, 255 , 10);\n"
"\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(255, 255, 255);\n"
""));
        lbl_lastname = new QLabel(frame_3);
        lbl_lastname->setObjectName("lbl_lastname");
        lbl_lastname->setGeometry(QRect(180, 60, 241, 41));
        lbl_lastname->setFont(font5);
        lbl_lastname->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-bottom: 1px solid yellow;\n"
"background-color: rgba(0, 0, 255 , 10);\n"
"border-radius: 1px;\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(255, 255, 255);\n"
""));
        lbl_email = new QLabel(frame_3);
        lbl_email->setObjectName("lbl_email");
        lbl_email->setGeometry(QRect(180, 210, 241, 41));
        lbl_email->setFont(font5);
        lbl_email->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-bottom: 1px solid yellow;\n"
"background-color: rgba(0, 0, 255 , 10);\n"
"border-radius: 1px;\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(255, 255, 255);\n"
""));
        label_18 = new QLabel(frame_3);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(10, 210, 160, 41));
        label_18->setFont(font5);
        label_18->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"\n"
"background-color: rgba(0, 0, 255 , 10);\n"
"\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(255, 255, 255);\n"
""));

        retranslateUi(profile_form);

        QMetaObject::connectSlotsByName(profile_form);
    } // setupUi

    void retranslateUi(QDialog *profile_form)
    {
        profile_form->setWindowTitle(QCoreApplication::translate("profile_form", "user profile", nullptr));
        label->setText(QString());
        label_7->setText(QCoreApplication::translate("profile_form", "QUT LIBRARY", nullptr));
        lbl_name->setText(QString());
        label_30->setText(QCoreApplication::translate("profile_form", "MANAGMENT SYSTEM", nullptr));
        label_6->setText(QString());
        lbl_profile_username->setText(QString());
        label_5->setText(QString());
        btn_insert_book->setText(QCoreApplication::translate("profile_form", "    Insert a Book", nullptr));
        btn_request_a_car->setText(QCoreApplication::translate("profile_form", "    Request a Membership card", nullptr));
        btn_return_a_book->setText(QCoreApplication::translate("profile_form", "    Return a Book", nullptr));
        btn_reserved_book->setText(QCoreApplication::translate("profile_form", "    My Reserved Book", nullptr));
        lbl_firstname->setText(QString());
        label_12->setText(QCoreApplication::translate("profile_form", "First Name : ", nullptr));
        label_13->setText(QCoreApplication::translate("profile_form", "Phone Number : ", nullptr));
        lbl_phonenumber->setText(QString());
        label_14->setText(QCoreApplication::translate("profile_form", "Username : ", nullptr));
        lbl_username->setText(QString());
        label_15->setText(QCoreApplication::translate("profile_form", "Last Name : ", nullptr));
        lbl_lastname->setText(QString());
        lbl_email->setText(QString());
        label_18->setText(QCoreApplication::translate("profile_form", "Email : ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class profile_form: public Ui_profile_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILE_FORM_H
