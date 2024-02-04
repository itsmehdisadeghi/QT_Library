/********************************************************************************
** Form generated from reading UI file 'insert_book.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERT_BOOK_H
#define UI_INSERT_BOOK_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_insert_book
{
public:
    QLabel *label;
    QLabel *label_20;
    QPushButton *btn_insert;
    QPushButton *btn_cancel;
    QLabel *label_5;
    QLabel *err_empty;
    QFrame *frame;
    QLineEdit *inp_pag_number;
    QLabel *label_3;
    QLineEdit *inp_edition_number;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_8;
    QLineEdit *inp_publisher;
    QLineEdit *inp_release_date;
    QLabel *label_9;
    QLineEdit *inp_autho_name;
    QLineEdit *inp_book_name;
    QLabel *label_2;
    QLabel *label_7;

    void setupUi(QDialog *insert_book)
    {
        if (insert_book->objectName().isEmpty())
            insert_book->setObjectName("insert_book");
        insert_book->resize(900, 500);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../New folder/icons8-book-60.png"), QSize(), QIcon::Normal, QIcon::Off);
        insert_book->setWindowIcon(icon);
        label = new QLabel(insert_book);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 901, 501));
        label->setPixmap(QPixmap(QString::fromUtf8("../blue-mountain-9lbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbfzsxuzjrkpu6c.png")));
        label_20 = new QLabel(insert_book);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(520, 70, 251, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Andalus")});
        font.setPointSize(13);
        font.setBold(false);
        label_20->setFont(font);
        label_20->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_20->setAlignment(Qt::AlignCenter);
        btn_insert = new QPushButton(insert_book);
        btn_insert->setObjectName("btn_insert");
        btn_insert->setGeometry(QRect(690, 440, 181, 40));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        btn_insert->setFont(font1);
        btn_insert->setCursor(QCursor(Qt::PointingHandCursor));
        btn_insert->setMouseTracking(false);
        btn_insert->setFocusPolicy(Qt::StrongFocus);
        btn_insert->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgba(12, 0, 72, 60);\n"
"border: 1px solid yellow;\n"
"border-radius: 20px;\n"
"padding : 5px 5px 5px 5px;\n"
"color: rgb(255, 255, 255);\n"
""));
        btn_cancel = new QPushButton(insert_book);
        btn_cancel->setObjectName("btn_cancel");
        btn_cancel->setGeometry(QRect(610, 440, 71, 40));
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
        label_5 = new QLabel(insert_book);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(370, 26, 160, 130));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        label_5->setPixmap(QPixmap(QString::fromUtf8("D:/LEARN/fsefewsfes.png")));
        err_empty = new QLabel(insert_book);
        err_empty->setObjectName("err_empty");
        err_empty->setGeometry(QRect(600, 410, 261, 16));
        err_empty->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 0, 4);"));
        frame = new QFrame(insert_book);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(20, 170, 860, 230));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255,255, 20);\n"
"border-radius:25px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        inp_pag_number = new QLineEdit(frame);
        inp_pag_number->setObjectName("inp_pag_number");
        inp_pag_number->setGeometry(QRect(160, 95, 261, 41));
        inp_pag_number->setSizeIncrement(QSize(0, 0));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        font2.setPointSize(12);
        font2.setBold(true);
        inp_pag_number->setFont(font2);
        inp_pag_number->setLayoutDirection(Qt::LeftToRight);
        inp_pag_number->setStyleSheet(QString::fromUtf8("border-bottom: 1px solid yellow;\n"
"background-color: rgb(11, 25, 38);\n"
"border-radius: 2px;\n"
"padding : 5px 45px 5px 45px;\n"
"color: rgb(255, 255, 255);\n"
"placeholder=\" ok \""));
        inp_pag_number->setMaxLength(50);
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 105, 151, 21));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        font3.setPointSize(13);
        font3.setBold(true);
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        inp_edition_number = new QLineEdit(frame);
        inp_edition_number->setObjectName("inp_edition_number");
        inp_edition_number->setGeometry(QRect(160, 160, 261, 41));
        inp_edition_number->setSizeIncrement(QSize(0, 0));
        inp_edition_number->setFont(font2);
        inp_edition_number->setLayoutDirection(Qt::LeftToRight);
        inp_edition_number->setStyleSheet(QString::fromUtf8("border-bottom: 1px solid yellow;\n"
"background-color: rgb(11, 25, 38);\n"
"border-radius: 2px;\n"
"padding : 5px 45px 5px 45px;\n"
"color: rgb(255, 255, 255);\n"
"placeholder=\" ok \""));
        inp_edition_number->setMaxLength(50);
        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 170, 131, 21));
        label_6->setFont(font3);
        label_6->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(440, 40, 131, 21));
        label_4->setFont(font3);
        label_4->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        label_8 = new QLabel(frame);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(440, 170, 131, 21));
        label_8->setFont(font3);
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgba(255, 255, 255, 255);"));
        inp_publisher = new QLineEdit(frame);
        inp_publisher->setObjectName("inp_publisher");
        inp_publisher->setGeometry(QRect(580, 95, 261, 41));
        inp_publisher->setSizeIncrement(QSize(0, 0));
        inp_publisher->setFont(font2);
        inp_publisher->setLayoutDirection(Qt::LeftToRight);
        inp_publisher->setStyleSheet(QString::fromUtf8("border-bottom: 1px solid yellow;\n"
"background-color: rgb(11, 25, 38);\n"
"border-radius: 2px;\n"
"padding : 5px 45px 5px 45px;\n"
"color: rgb(255, 255, 255);\n"
"placeholder=\" ok \""));
        inp_publisher->setMaxLength(50);
        inp_release_date = new QLineEdit(frame);
        inp_release_date->setObjectName("inp_release_date");
        inp_release_date->setGeometry(QRect(580, 160, 261, 41));
        inp_release_date->setSizeIncrement(QSize(0, 0));
        inp_release_date->setFont(font2);
        inp_release_date->setLayoutDirection(Qt::LeftToRight);
        inp_release_date->setStyleSheet(QString::fromUtf8("border-bottom: 1px solid yellow;\n"
"background-color: rgb(11, 25, 38);\n"
"border-radius: 2px;\n"
"padding : 5px 45px 5px 45px;\n"
"color: rgb(255, 255, 255);\n"
"placeholder=\" ok \"\n"
"background-color: rgb(11, 25, 38);"));
        inp_release_date->setMaxLength(50);
        label_9 = new QLabel(frame);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(440, 105, 131, 21));
        label_9->setFont(font3);
        label_9->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        inp_autho_name = new QLineEdit(frame);
        inp_autho_name->setObjectName("inp_autho_name");
        inp_autho_name->setGeometry(QRect(580, 30, 261, 41));
        inp_autho_name->setSizeIncrement(QSize(0, 0));
        inp_autho_name->setFont(font2);
        inp_autho_name->setLayoutDirection(Qt::LeftToRight);
        inp_autho_name->setStyleSheet(QString::fromUtf8("border-bottom: 1px solid yellow;\n"
"background-color: rgb(11, 25, 38);\n"
"border-radius: 2px;\n"
"padding : 5px 45px 5px 45px;\n"
"color: rgb(255, 255, 255);\n"
"placeholder=\" ok \""));
        inp_autho_name->setMaxLength(50);
        inp_book_name = new QLineEdit(frame);
        inp_book_name->setObjectName("inp_book_name");
        inp_book_name->setGeometry(QRect(160, 30, 261, 41));
        inp_book_name->setSizeIncrement(QSize(0, 0));
        inp_book_name->setFont(font2);
        inp_book_name->setLayoutDirection(Qt::LeftToRight);
        inp_book_name->setStyleSheet(QString::fromUtf8("border-bottom: 1px solid yellow;\n"
"background-color: rgb(11, 25, 38);\n"
"border-radius: 2px;\n"
"padding : 5px 45px 5px 45px;\n"
"color: rgb(255, 255, 255);\n"
"placeholder=\" ok \""));
        inp_book_name->setMaxLength(50);
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 40, 141, 21));
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgba(255, 255, 255, 255);"));
        label_7 = new QLabel(insert_book);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(160, 70, 251, 41));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Andalus")});
        font4.setPointSize(22);
        font4.setBold(false);
        label_7->setFont(font4);
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_7->setAlignment(Qt::AlignCenter);

        retranslateUi(insert_book);

        QMetaObject::connectSlotsByName(insert_book);
    } // setupUi

    void retranslateUi(QDialog *insert_book)
    {
        insert_book->setWindowTitle(QCoreApplication::translate("insert_book", "insert a book", nullptr));
        label->setText(QString());
        label_20->setText(QCoreApplication::translate("insert_book", "MANAGMENT SYSTEM", nullptr));
        btn_insert->setText(QCoreApplication::translate("insert_book", "insert book", nullptr));
        btn_cancel->setText(QCoreApplication::translate("insert_book", "cancel", nullptr));
        label_5->setText(QString());
        err_empty->setText(QString());
#if QT_CONFIG(tooltip)
        inp_pag_number->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        inp_pag_number->setInputMask(QString());
        inp_pag_number->setText(QString());
        inp_pag_number->setPlaceholderText(QCoreApplication::translate("insert_book", "nomber of book page", nullptr));
        label_3->setText(QCoreApplication::translate("insert_book", "No of Book pages :", nullptr));
#if QT_CONFIG(tooltip)
        inp_edition_number->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        inp_edition_number->setInputMask(QString());
        inp_edition_number->setText(QString());
        inp_edition_number->setPlaceholderText(QCoreApplication::translate("insert_book", "nomber of edition..", nullptr));
        label_6->setText(QCoreApplication::translate("insert_book", "No edition :", nullptr));
        label_4->setText(QCoreApplication::translate("insert_book", "book author :", nullptr));
        label_8->setText(QCoreApplication::translate("insert_book", "Date of Release :", nullptr));
#if QT_CONFIG(tooltip)
        inp_publisher->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        inp_publisher->setInputMask(QString());
        inp_publisher->setText(QString());
        inp_publisher->setPlaceholderText(QCoreApplication::translate("insert_book", "enter publisher..", nullptr));
#if QT_CONFIG(tooltip)
        inp_release_date->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        inp_release_date->setInputMask(QString());
        inp_release_date->setText(QString());
        inp_release_date->setPlaceholderText(QCoreApplication::translate("insert_book", "date of Release..", nullptr));
        label_9->setText(QCoreApplication::translate("insert_book", "publisher :", nullptr));
#if QT_CONFIG(tooltip)
        inp_autho_name->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        inp_autho_name->setInputMask(QString());
        inp_autho_name->setText(QString());
        inp_autho_name->setPlaceholderText(QCoreApplication::translate("insert_book", "enter book author ..", nullptr));
#if QT_CONFIG(tooltip)
        inp_book_name->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        inp_book_name->setInputMask(QString());
        inp_book_name->setText(QString());
        inp_book_name->setPlaceholderText(QCoreApplication::translate("insert_book", "enter book name ..", nullptr));
        label_2->setText(QCoreApplication::translate("insert_book", "book full name :", nullptr));
        label_7->setText(QCoreApplication::translate("insert_book", "QUT LIBRARY", nullptr));
    } // retranslateUi

};

namespace Ui {
    class insert_book: public Ui_insert_book {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERT_BOOK_H
