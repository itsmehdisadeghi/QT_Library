/********************************************************************************
** Form generated from reading UI file 'manager_profile_form.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGER_PROFILE_FORM_H
#define UI_MANAGER_PROFILE_FORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_manager_profile_form
{
public:
    QLabel *label;
    QLabel *lbl_name;
    QLabel *lbl_profile_username;
    QFrame *frame;
    QPushButton *btn_insert_book;
    QPushButton *btn_add_manager;
    QPushButton *btn_all_users;
    QPushButton *btn_delete_book;
    QPushButton *btn_all_book;
    QPushButton *btn_delete_user;
    QPushButton *btn_insert_user;
    QFrame *frame_2;
    QLabel *lbl_firstname;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *lbl_phonenumber;
    QLabel *label_13;
    QLabel *lbl_username;
    QLabel *label_15;
    QLabel *lbl_lastname;
    QLabel *lbl_email;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_2;
    QLabel *lbl_message;

    void setupUi(QDialog *manager_profile_form)
    {
        if (manager_profile_form->objectName().isEmpty())
            manager_profile_form->setObjectName("manager_profile_form");
        manager_profile_form->resize(900, 500);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../New folder/icons8-manager-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        manager_profile_form->setWindowIcon(icon);
        label = new QLabel(manager_profile_form);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 901, 501));
        label->setPixmap(QPixmap(QString::fromUtf8("../blue-mountain-9lbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbfzsxuzjrkpu6c.png")));
        lbl_name = new QLabel(manager_profile_form);
        lbl_name->setObjectName("lbl_name");
        lbl_name->setGeometry(QRect(150, 60, 171, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        font.setPointSize(18);
        font.setBold(true);
        lbl_name->setFont(font);
        lbl_name->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);\n"
""));
        lbl_profile_username = new QLabel(manager_profile_form);
        lbl_profile_username->setObjectName("lbl_profile_username");
        lbl_profile_username->setGeometry(QRect(150, 90, 171, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        font1.setPointSize(15);
        font1.setBold(true);
        lbl_profile_username->setFont(font1);
        lbl_profile_username->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);\n"
""));
        frame = new QFrame(manager_profile_form);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(510, 89, 351, 390));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255,255, 20);\n"
"border-radius:25px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        btn_insert_book = new QPushButton(frame);
        btn_insert_book->setObjectName("btn_insert_book");
        btn_insert_book->setGeometry(QRect(30, 20, 271, 40));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        btn_insert_book->setFont(font2);
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
        btn_add_manager = new QPushButton(frame);
        btn_add_manager->setObjectName("btn_add_manager");
        btn_add_manager->setGeometry(QRect(30, 120, 271, 40));
        btn_add_manager->setFont(font2);
        btn_add_manager->setCursor(QCursor(Qt::PointingHandCursor));
        btn_add_manager->setMouseTracking(false);
        btn_add_manager->setFocusPolicy(Qt::StrongFocus);
        btn_add_manager->setStyleSheet(QString::fromUtf8("border-bottom: 1px solid yellow;\n"
"background-color: rgba(0, 0, 255 , 10);\n"
"border-radius: 1px;\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(255, 255, 255);\n"
"\n"
"text-align: left;"));
        btn_add_manager->setIcon(icon);
        btn_all_users = new QPushButton(frame);
        btn_all_users->setObjectName("btn_all_users");
        btn_all_users->setGeometry(QRect(30, 170, 271, 40));
        btn_all_users->setFont(font2);
        btn_all_users->setCursor(QCursor(Qt::PointingHandCursor));
        btn_all_users->setMouseTracking(false);
        btn_all_users->setFocusPolicy(Qt::StrongFocus);
        btn_all_users->setStyleSheet(QString::fromUtf8("text-align: left;\n"
"border-bottom: 1px solid yellow;\n"
"background-color: rgba(0, 0, 255 , 10);\n"
"border-radius: 1px;\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(255, 255, 255);\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../New folder/icons8-users-60.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_all_users->setIcon(icon2);
        btn_delete_book = new QPushButton(frame);
        btn_delete_book->setObjectName("btn_delete_book");
        btn_delete_book->setGeometry(QRect(30, 70, 271, 40));
        btn_delete_book->setFont(font2);
        btn_delete_book->setCursor(QCursor(Qt::PointingHandCursor));
        btn_delete_book->setMouseTracking(false);
        btn_delete_book->setFocusPolicy(Qt::StrongFocus);
        btn_delete_book->setStyleSheet(QString::fromUtf8("border-bottom: 1px solid yellow;\n"
"background-color: rgba(0, 0, 255 , 10);\n"
"border-radius: 1px;\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(255, 255, 255);\n"
"text-align: left;\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../New folder/icons8-delete-60.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_delete_book->setIcon(icon3);
        btn_all_book = new QPushButton(frame);
        btn_all_book->setObjectName("btn_all_book");
        btn_all_book->setGeometry(QRect(30, 220, 271, 40));
        btn_all_book->setFont(font2);
        btn_all_book->setCursor(QCursor(Qt::PointingHandCursor));
        btn_all_book->setMouseTracking(false);
        btn_all_book->setFocusPolicy(Qt::StrongFocus);
        btn_all_book->setStyleSheet(QString::fromUtf8("text-align: left;\n"
"border-bottom: 1px solid yellow;\n"
"background-color: rgba(0, 0, 255 , 10);\n"
"border-radius: 1px;\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(255, 255, 255);\n"
""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../New folder/icons8-library-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_all_book->setIcon(icon4);
        btn_delete_user = new QPushButton(frame);
        btn_delete_user->setObjectName("btn_delete_user");
        btn_delete_user->setGeometry(QRect(30, 270, 271, 40));
        btn_delete_user->setFont(font2);
        btn_delete_user->setCursor(QCursor(Qt::PointingHandCursor));
        btn_delete_user->setMouseTracking(false);
        btn_delete_user->setFocusPolicy(Qt::StrongFocus);
        btn_delete_user->setStyleSheet(QString::fromUtf8("border-bottom: 1px solid yellow;\n"
"background-color: rgba(0, 0, 255 , 10);\n"
"border-radius: 1px;\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(255, 255, 255);\n"
"text-align: left;\n"
""));
        btn_delete_user->setIcon(icon3);
        btn_insert_user = new QPushButton(frame);
        btn_insert_user->setObjectName("btn_insert_user");
        btn_insert_user->setGeometry(QRect(30, 320, 271, 40));
        btn_insert_user->setFont(font2);
        btn_insert_user->setCursor(QCursor(Qt::PointingHandCursor));
        btn_insert_user->setMouseTracking(false);
        btn_insert_user->setFocusPolicy(Qt::StrongFocus);
        btn_insert_user->setStyleSheet(QString::fromUtf8("border-bottom: 1px solid yellow;\n"
"background-color: rgba(0, 0, 255 , 10);\n"
"border-radius: 1px;\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(255, 255, 255);\n"
"text-align: left;\n"
""));
        btn_insert_user->setIcon(icon2);
        frame_2 = new QFrame(manager_profile_form);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(30, 200, 441, 280));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255,255, 20);\n"
"border-radius:25px;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        lbl_firstname = new QLabel(frame_2);
        lbl_firstname->setObjectName("lbl_firstname");
        lbl_firstname->setGeometry(QRect(180, 10, 241, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        font3.setPointSize(13);
        font3.setBold(true);
        lbl_firstname->setFont(font3);
        lbl_firstname->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-bottom: 1px solid yellow;\n"
"background-color: rgba(0, 0, 255 , 10);\n"
"border-radius: 1px;\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(255, 255, 255);\n"
""));
        label_9 = new QLabel(frame_2);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10, 10, 160, 41));
        label_9->setFont(font3);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"\n"
"background-color: rgba(0, 0, 255 , 10);\n"
"\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(255, 255, 255);\n"
""));
        label_11 = new QLabel(frame_2);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(10, 160, 160, 41));
        label_11->setFont(font3);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"\n"
"background-color: rgba(0, 0, 255 , 10);\n"
"\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(255, 255, 255);\n"
""));
        lbl_phonenumber = new QLabel(frame_2);
        lbl_phonenumber->setObjectName("lbl_phonenumber");
        lbl_phonenumber->setGeometry(QRect(180, 160, 241, 41));
        lbl_phonenumber->setFont(font3);
        lbl_phonenumber->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-bottom: 1px solid yellow;\n"
"background-color: rgba(0, 0, 255 , 10);\n"
"border-radius: 1px;\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(255, 255, 255);\n"
""));
        label_13 = new QLabel(frame_2);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(10, 110, 160, 41));
        label_13->setFont(font3);
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"\n"
"background-color: rgba(0, 0, 255 , 10);\n"
"\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(255, 255, 255);\n"
""));
        lbl_username = new QLabel(frame_2);
        lbl_username->setObjectName("lbl_username");
        lbl_username->setGeometry(QRect(180, 110, 241, 41));
        lbl_username->setFont(font3);
        lbl_username->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-bottom: 1px solid yellow;\n"
"background-color: rgba(0, 0, 255 , 10);\n"
"border-radius: 1px;\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(255, 255, 255);\n"
""));
        label_15 = new QLabel(frame_2);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(10, 60, 160, 41));
        label_15->setFont(font3);
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"\n"
"background-color: rgba(0, 0, 255 , 10);\n"
"\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(255, 255, 255);\n"
""));
        lbl_lastname = new QLabel(frame_2);
        lbl_lastname->setObjectName("lbl_lastname");
        lbl_lastname->setGeometry(QRect(180, 60, 241, 41));
        lbl_lastname->setFont(font3);
        lbl_lastname->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-bottom: 1px solid yellow;\n"
"background-color: rgba(0, 0, 255 , 10);\n"
"border-radius: 1px;\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(255, 255, 255);\n"
""));
        lbl_email = new QLabel(frame_2);
        lbl_email->setObjectName("lbl_email");
        lbl_email->setGeometry(QRect(180, 210, 241, 41));
        lbl_email->setFont(font3);
        lbl_email->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-bottom: 1px solid yellow;\n"
"background-color: rgba(0, 0, 255 , 10);\n"
"border-radius: 1px;\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(255, 255, 255);\n"
""));
        label_18 = new QLabel(frame_2);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(10, 210, 160, 41));
        label_18->setFont(font3);
        label_18->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"\n"
"background-color: rgba(0, 0, 255 , 10);\n"
"\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(255, 255, 255);\n"
""));
        label_19 = new QLabel(manager_profile_form);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(150, 117, 171, 31));
        label_19->setFont(font1);
        label_19->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);\n"
""));
        label_2 = new QLabel(manager_profile_form);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 40, 111, 111));
        label_2->setPixmap(QPixmap(QString::fromUtf8("D:/asdfgh.png")));
        lbl_message = new QLabel(manager_profile_form);
        lbl_message->setObjectName("lbl_message");
        lbl_message->setGeometry(QRect(40, 170, 421, 21));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        lbl_message->setFont(font4);
        lbl_message->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        retranslateUi(manager_profile_form);

        QMetaObject::connectSlotsByName(manager_profile_form);
    } // setupUi

    void retranslateUi(QDialog *manager_profile_form)
    {
        manager_profile_form->setWindowTitle(QCoreApplication::translate("manager_profile_form", "Manager profile ", nullptr));
        label->setText(QString());
        lbl_name->setText(QString());
        lbl_profile_username->setText(QString());
        btn_insert_book->setText(QCoreApplication::translate("manager_profile_form", "    Insert a Book", nullptr));
        btn_add_manager->setText(QCoreApplication::translate("manager_profile_form", "     Add Manager", nullptr));
        btn_all_users->setText(QCoreApplication::translate("manager_profile_form", "    All Users", nullptr));
        btn_delete_book->setText(QCoreApplication::translate("manager_profile_form", "    Delete a Book", nullptr));
        btn_all_book->setText(QCoreApplication::translate("manager_profile_form", "    All Book", nullptr));
        btn_delete_user->setText(QCoreApplication::translate("manager_profile_form", "    Delete a user", nullptr));
        btn_insert_user->setText(QCoreApplication::translate("manager_profile_form", "    Insert a user", nullptr));
        lbl_firstname->setText(QString());
        label_9->setText(QCoreApplication::translate("manager_profile_form", "First Name : ", nullptr));
        label_11->setText(QCoreApplication::translate("manager_profile_form", "Phone Number : ", nullptr));
        lbl_phonenumber->setText(QString());
        label_13->setText(QCoreApplication::translate("manager_profile_form", "Username : ", nullptr));
        lbl_username->setText(QString());
        label_15->setText(QCoreApplication::translate("manager_profile_form", "Last Name : ", nullptr));
        lbl_lastname->setText(QString());
        lbl_email->setText(QString());
        label_18->setText(QCoreApplication::translate("manager_profile_form", "Email : ", nullptr));
        label_19->setText(QCoreApplication::translate("manager_profile_form", "Manager", nullptr));
        label_2->setText(QString());
        lbl_message->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class manager_profile_form: public Ui_manager_profile_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGER_PROFILE_FORM_H
