/********************************************************************************
** Form generated from reading UI file 'library_management_system.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARY_MANAGEMENT_SYSTEM_H
#define UI_LIBRARY_MANAGEMENT_SYSTEM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_library_management_system
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *btn_search;
    QPushButton *btn_login;
    QLabel *lbl_booknum;
    QPushButton *btn_signup;
    QLineEdit *inp_search;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label_7;
    QLabel *lbl_usernum;
    QLabel *label_3;
    QPushButton *btn_profile;
    QLabel *err_pro;
    QLabel *err_empty;

    void setupUi(QMainWindow *library_management_system)
    {
        if (library_management_system->objectName().isEmpty())
            library_management_system->setObjectName("library_management_system");
        library_management_system->resize(900, 500);
        library_management_system->setMinimumSize(QSize(900, 500));
        library_management_system->setMaximumSize(QSize(900, 500));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../icons8-add-user-male-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        library_management_system->setWindowIcon(icon);
        library_management_system->setAutoFillBackground(false);
        library_management_system->setStyleSheet(QString::fromUtf8("background-color: rgb(11, 25, 38);\n"
"background-image: url(\"/img.jpg\");"));
        centralwidget = new QWidget(library_management_system);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 901, 501));
        label->setPixmap(QPixmap(QString::fromUtf8("../blue-mountain-9lbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbfzsxuzjrkpu6c.png")));
        btn_search = new QPushButton(centralwidget);
        btn_search->setObjectName("btn_search");
        btn_search->setGeometry(QRect(576, 250, 121, 51));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        btn_search->setFont(font);
        btn_search->setCursor(QCursor(Qt::PointingHandCursor));
        btn_search->setMouseTracking(false);
        btn_search->setFocusPolicy(Qt::StrongFocus);
        btn_search->setStyleSheet(QString::fromUtf8("border: 1px solid yellow;\n"
"background-color: rgb(11, 15, 48);\n"
"border-radius: 25px;\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(255, 255, 255);\n"
""));
        btn_login = new QPushButton(centralwidget);
        btn_login->setObjectName("btn_login");
        btn_login->setGeometry(QRect(6, 10, 81, 41));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        btn_login->setFont(font1);
        btn_login->setCursor(QCursor(Qt::PointingHandCursor));
        btn_login->setStyleSheet(QString::fromUtf8("border: 1px solid red;\n"
"background-color: rgb(11, 25, 38);\n"
"border-radius: 10px;\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(205, 205, 255);\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../icons8-man-60.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_login->setIcon(icon1);
        lbl_booknum = new QLabel(centralwidget);
        lbl_booknum->setObjectName("lbl_booknum");
        lbl_booknum->setGeometry(QRect(224, 340, 180, 120));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("HoloLens MDL2 Assets")});
        font2.setPointSize(18);
        lbl_booknum->setFont(font2);
        lbl_booknum->setStyleSheet(QString::fromUtf8("border : 1px solid white;\n"
"background-color: rgb(11, 25, 48);\n"
"border-radius: 25px;\n"
"color: rgb(255, 255, 0);\n"
"padding : 5px 20px 5px 20px;\n"
"color: rgb(255, 255, 255);\n"
"placeholder=\" ok \""));
        lbl_booknum->setLineWidth(1);
        lbl_booknum->setAlignment(Qt::AlignCenter);
        btn_signup = new QPushButton(centralwidget);
        btn_signup->setObjectName("btn_signup");
        btn_signup->setGeometry(QRect(96, 10, 91, 41));
        btn_signup->setFont(font1);
        btn_signup->setCursor(QCursor(Qt::PointingHandCursor));
        btn_signup->setStyleSheet(QString::fromUtf8("border: 1px solid red;\n"
"background-color: rgb(11, 25, 38);\n"
"border-radius: 10px;\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(205, 205, 255);\n"
""));
        btn_signup->setIcon(icon);
        inp_search = new QLineEdit(centralwidget);
        inp_search->setObjectName("inp_search");
        inp_search->setGeometry(QRect(176, 250, 380, 50));
        inp_search->setSizeIncrement(QSize(0, 0));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        font3.setPointSize(12);
        font3.setBold(true);
        inp_search->setFont(font3);
        inp_search->setLayoutDirection(Qt::LeftToRight);
        inp_search->setStyleSheet(QString::fromUtf8("border: 1px solid yellow;\n"
"background-color: rgb(11, 25, 38);\n"
"border-radius: 25px;\n"
"padding : 5px 45px 5px 45px;\n"
"color: rgb(255, 255, 255);\n"
"placeholder=\" ok \""));
        inp_search->setMaxLength(50);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(356, 60, 160, 130));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        label_5->setPixmap(QPixmap(QString::fromUtf8("D:/LEARN/fsefewsfes.png")));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(250, 360, 120, 20));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        font4.setPointSize(10);
        font4.setBold(true);
        label_2->setFont(font4);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 255);\n"
"background-color: rgb(11, 25, 48);"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(316, 180, 251, 41));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Andalus")});
        font5.setPointSize(22);
        font5.setBold(false);
        label_7->setFont(font5);
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_7->setAlignment(Qt::AlignCenter);
        lbl_usernum = new QLabel(centralwidget);
        lbl_usernum->setObjectName("lbl_usernum");
        lbl_usernum->setGeometry(QRect(458, 340, 180, 120));
        lbl_usernum->setFont(font2);
        lbl_usernum->setStyleSheet(QString::fromUtf8("border : 1px solid white;\n"
"background-color: rgb(11, 25, 48);\n"
"border-radius: 25px;\n"
"color: rgb(255, 255, 0);\n"
"padding : 5px 20px 5px 20px;\n"
"color: rgb(255, 255, 255);\n"
"placeholder=\" ok \""));
        lbl_usernum->setLineWidth(1);
        lbl_usernum->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(480, 360, 121, 20));
        label_3->setFont(font4);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 255);\n"
"background-color: rgb(11, 25, 48);"));
        btn_profile = new QPushButton(centralwidget);
        btn_profile->setObjectName("btn_profile");
        btn_profile->setGeometry(QRect(770, 10, 121, 41));
        btn_profile->setFont(font1);
        btn_profile->setCursor(QCursor(Qt::PointingHandCursor));
        btn_profile->setStyleSheet(QString::fromUtf8("border: 1px solid red;\n"
"background-color: rgb(11, 25, 38);\n"
"border-radius: 10px;\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(205, 205, 255);\n"
""));
        err_pro = new QLabel(centralwidget);
        err_pro->setObjectName("err_pro");
        err_pro->setGeometry(QRect(630, 60, 261, 20));
        err_pro->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 0, 4);"));
        err_empty = new QLabel(centralwidget);
        err_empty->setObjectName("err_empty");
        err_empty->setGeometry(QRect(250, 310, 261, 16));
        err_empty->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 0, 4);"));
        library_management_system->setCentralWidget(centralwidget);

        retranslateUi(library_management_system);

        QMetaObject::connectSlotsByName(library_management_system);
    } // setupUi

    void retranslateUi(QMainWindow *library_management_system)
    {
        library_management_system->setWindowTitle(QCoreApplication::translate("library_management_system", "QUT LIBRARY", nullptr));
        label->setText(QString());
        btn_search->setText(QCoreApplication::translate("library_management_system", "Search", nullptr));
        btn_login->setText(QCoreApplication::translate("library_management_system", "login", nullptr));
        lbl_booknum->setText(QString());
        btn_signup->setText(QCoreApplication::translate("library_management_system", "sign up", nullptr));
#if QT_CONFIG(tooltip)
        inp_search->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        inp_search->setInputMask(QString());
        inp_search->setText(QString());
        inp_search->setPlaceholderText(QCoreApplication::translate("library_management_system", "Search Book name...", nullptr));
        label_5->setText(QString());
        label_2->setText(QCoreApplication::translate("library_management_system", "Number Of Books :", nullptr));
        label_7->setText(QCoreApplication::translate("library_management_system", "QUT LIBRARY", nullptr));
        lbl_usernum->setText(QString());
        label_3->setText(QCoreApplication::translate("library_management_system", "Number of Users : ", nullptr));
        btn_profile->setText(QCoreApplication::translate("library_management_system", "my profile", nullptr));
        err_pro->setText(QString());
        err_empty->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class library_management_system: public Ui_library_management_system {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARY_MANAGEMENT_SYSTEM_H
