/********************************************************************************
** Form generated from reading UI file 'search_result.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_RESULT_H
#define UI_SEARCH_RESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_search_result
{
public:
    QLabel *label;
    QLabel *label_5;
    QLabel *label_7;
    QFrame *frame;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *lbl_bookname;
    QLabel *lbl_bookauthor;
    QLabel *lbl_borrowedby;
    QPushButton *btn_borrow;
    QPushButton *btn_cancel;
    QLabel *err_empty;

    void setupUi(QDialog *search_result)
    {
        if (search_result->objectName().isEmpty())
            search_result->setObjectName("search_result");
        search_result->resize(900, 400);
        label = new QLabel(search_result);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 901, 501));
        label->setPixmap(QPixmap(QString::fromUtf8("../blue-mountain-9lbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbfzsxuzjrkpu6c.png")));
        label_5 = new QLabel(search_result);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(360, 0, 160, 130));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        label_5->setPixmap(QPixmap(QString::fromUtf8("D:/LEARN/fsefewsfes.png")));
        label_7 = new QLabel(search_result);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(320, 110, 251, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Andalus")});
        font.setPointSize(22);
        font.setBold(false);
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_7->setAlignment(Qt::AlignCenter);
        frame = new QFrame(search_result);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(20, 160, 851, 141));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255,255, 20);\n"
"border-radius:25px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(110, 10, 71, 20));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        font1.setPointSize(10);
        font1.setBold(true);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 255);\n"
"background-color: rgba(11, 25, 48 , 0);"));
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(380, 10, 81, 20));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 255);\n"
"background-color: rgba(11, 25, 48 , 0);"));
        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(640, 10, 91, 20));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 255);\n"
"background-color: rgba(11, 25, 48 , 0);"));
        lbl_bookname = new QLabel(frame);
        lbl_bookname->setObjectName("lbl_bookname");
        lbl_bookname->setGeometry(QRect(20, 60, 250, 40));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        font2.setPointSize(13);
        font2.setBold(true);
        lbl_bookname->setFont(font2);
        lbl_bookname->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-bottom: 1px solid yellow;\n"
"background-color: rgba(0, 0, 255 , 10);\n"
"border-radius: 1px;\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(255, 255, 255);\n"
""));
        lbl_bookname->setAlignment(Qt::AlignCenter);
        lbl_bookauthor = new QLabel(frame);
        lbl_bookauthor->setObjectName("lbl_bookauthor");
        lbl_bookauthor->setGeometry(QRect(310, 60, 240, 40));
        lbl_bookauthor->setFont(font2);
        lbl_bookauthor->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-bottom: 1px solid yellow;\n"
"background-color: rgba(0, 0, 255 , 10);\n"
"border-radius: 1px;\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(255, 255, 255);\n"
""));
        lbl_bookauthor->setAlignment(Qt::AlignCenter);
        lbl_borrowedby = new QLabel(frame);
        lbl_borrowedby->setObjectName("lbl_borrowedby");
        lbl_borrowedby->setGeometry(QRect(590, 60, 210, 40));
        lbl_borrowedby->setFont(font2);
        lbl_borrowedby->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-bottom: 1px solid yellow;\n"
"background-color: rgba(0, 0, 255 , 10);\n"
"border-radius: 1px;\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(255, 255, 255);\n"
"text-align: center;"));
        lbl_borrowedby->setAlignment(Qt::AlignCenter);
        btn_borrow = new QPushButton(search_result);
        btn_borrow->setObjectName("btn_borrow");
        btn_borrow->setGeometry(QRect(760, 330, 121, 41));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        btn_borrow->setFont(font3);
        btn_borrow->setCursor(QCursor(Qt::PointingHandCursor));
        btn_borrow->setStyleSheet(QString::fromUtf8("border: 1px solid red;\n"
"background-color: rgb(11, 25, 38);\n"
"border-radius: 10px;\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(205, 205, 255);\n"
""));
        btn_cancel = new QPushButton(search_result);
        btn_cancel->setObjectName("btn_cancel");
        btn_cancel->setGeometry(QRect(630, 330, 121, 41));
        btn_cancel->setFont(font3);
        btn_cancel->setCursor(QCursor(Qt::PointingHandCursor));
        btn_cancel->setStyleSheet(QString::fromUtf8("border: 1px solid red;\n"
"background-color: rgb(11, 25, 38);\n"
"border-radius: 10px;\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(205, 205, 255);\n"
""));
        err_empty = new QLabel(search_result);
        err_empty->setObjectName("err_empty");
        err_empty->setGeometry(QRect(360, 345, 261, 16));
        err_empty->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 0, 4);"));

        retranslateUi(search_result);

        QMetaObject::connectSlotsByName(search_result);
    } // setupUi

    void retranslateUi(QDialog *search_result)
    {
        search_result->setWindowTitle(QCoreApplication::translate("search_result", "Search result", nullptr));
        label->setText(QString());
        label_5->setText(QString());
        label_7->setText(QCoreApplication::translate("search_result", "QUT LIBRARY", nullptr));
        label_3->setText(QCoreApplication::translate("search_result", "Book Name", nullptr));
        label_4->setText(QCoreApplication::translate("search_result", "Book Author", nullptr));
        label_6->setText(QCoreApplication::translate("search_result", "borrowed by", nullptr));
        lbl_bookname->setText(QCoreApplication::translate("search_result", "-", nullptr));
        lbl_bookauthor->setText(QCoreApplication::translate("search_result", "-", nullptr));
        lbl_borrowedby->setText(QCoreApplication::translate("search_result", "-", nullptr));
        btn_borrow->setText(QCoreApplication::translate("search_result", "Borrow", nullptr));
        btn_cancel->setText(QCoreApplication::translate("search_result", "cancel", nullptr));
        err_empty->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class search_result: public Ui_search_result {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_RESULT_H
