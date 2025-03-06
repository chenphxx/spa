/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextBrowser *receive_browser;
    QTextEdit *send_edit;
    QLineEdit *ip_line;
    QLabel *label_3;
    QLineEdit *port_line;
    QLabel *label_4;
    QPushButton *connect_button;
    QPushButton *disconnect_button;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *local_port_line;
    QComboBox *protocol;
    QPushButton *send_button;
    QComboBox *port_local;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QComboBox *receive_mode;
    QComboBox *port_local_3;
    QCheckBox *send_cyclically;
    QLineEdit *send_time;
    QLabel *label_11;
    QLineEdit *rate;
    QLabel *label_12;
    QTextBrowser *local_ip_browser;
    QCheckBox *variable_ip;
    QPushButton *connect_serial;
    QPushButton *disconnect_button_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(950, 659);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        receive_browser = new QTextBrowser(centralwidget);
        receive_browser->setObjectName("receive_browser");
        receive_browser->setGeometry(QRect(10, 10, 371, 601));
        QFont font;
        font.setFamilies({QString::fromUtf8("Cascadia Code")});
        font.setPointSize(12);
        receive_browser->setFont(font);
        send_edit = new QTextEdit(centralwidget);
        send_edit->setObjectName("send_edit");
        send_edit->setGeometry(QRect(390, 430, 461, 181));
        send_edit->setFont(font);
        send_edit->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CursorShape::IBeamCursor)));
        ip_line = new QLineEdit(centralwidget);
        ip_line->setObjectName("ip_line");
        ip_line->setGeometry(QRect(390, 180, 181, 41));
        ip_line->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(390, 150, 71, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Cascadia Code")});
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setItalic(false);
        label_3->setFont(font1);
        port_line = new QLineEdit(centralwidget);
        port_line->setObjectName("port_line");
        port_line->setGeometry(QRect(580, 180, 91, 41));
        port_line->setFont(font);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(580, 150, 51, 31));
        label_4->setFont(font1);
        connect_button = new QPushButton(centralwidget);
        connect_button->setObjectName("connect_button");
        connect_button->setGeometry(QRect(770, 180, 80, 41));
        QFont font2;
        font2.setPointSize(12);
        connect_button->setFont(font2);
        connect_button->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        connect_button->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(185, 187, 223);"));
        disconnect_button = new QPushButton(centralwidget);
        disconnect_button->setObjectName("disconnect_button");
        disconnect_button->setGeometry(QRect(860, 180, 80, 41));
        disconnect_button->setFont(font2);
        disconnect_button->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        disconnect_button->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(185, 187, 223);"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(390, 80, 101, 31));
        label_5->setFont(font1);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(580, 80, 51, 31));
        label_6->setFont(font1);
        local_port_line = new QLineEdit(centralwidget);
        local_port_line->setObjectName("local_port_line");
        local_port_line->setGeometry(QRect(580, 110, 91, 41));
        local_port_line->setFont(font);
        protocol = new QComboBox(centralwidget);
        protocol->addItem(QString());
        protocol->addItem(QString());
        protocol->setObjectName("protocol");
        protocol->setGeometry(QRect(680, 180, 81, 41));
        protocol->setFont(font);
        protocol->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        send_button = new QPushButton(centralwidget);
        send_button->setObjectName("send_button");
        send_button->setGeometry(QRect(859, 430, 81, 181));
        send_button->setFont(font2);
        send_button->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        send_button->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(185, 187, 223);"));
        port_local = new QComboBox(centralwidget);
        port_local->addItem(QString());
        port_local->setObjectName("port_local");
        port_local->setGeometry(QRect(390, 250, 101, 41));
        port_local->setFont(font);
        port_local->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(390, 220, 61, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font3.setPointSize(12);
        font3.setBold(false);
        font3.setItalic(false);
        label_7->setFont(font3);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(680, 150, 51, 31));
        label_8->setFont(font3);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(390, 10, 141, 31));
        label_9->setFont(font1);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(550, 10, 111, 31));
        label_10->setFont(font1);
        receive_mode = new QComboBox(centralwidget);
        receive_mode->addItem(QString());
        receive_mode->addItem(QString());
        receive_mode->setObjectName("receive_mode");
        receive_mode->setGeometry(QRect(390, 40, 141, 41));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Cascadia Code")});
        font4.setPointSize(12);
        font4.setBold(false);
        receive_mode->setFont(font4);
        receive_mode->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        port_local_3 = new QComboBox(centralwidget);
        port_local_3->addItem(QString());
        port_local_3->addItem(QString());
        port_local_3->setObjectName("port_local_3");
        port_local_3->setGeometry(QRect(550, 40, 141, 41));
        port_local_3->setFont(font);
        port_local_3->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        send_cyclically = new QCheckBox(centralwidget);
        send_cyclically->setObjectName("send_cyclically");
        send_cyclically->setGeometry(QRect(700, 40, 91, 41));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font5.setPointSize(12);
        send_cyclically->setFont(font5);
        send_cyclically->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        send_time = new QLineEdit(centralwidget);
        send_time->setObjectName("send_time");
        send_time->setGeometry(QRect(790, 40, 151, 41));
        send_time->setFont(font);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(790, 10, 101, 31));
        label_11->setFont(font3);
        rate = new QLineEdit(centralwidget);
        rate->setObjectName("rate");
        rate->setGeometry(QRect(500, 250, 101, 41));
        rate->setFont(font);
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(500, 220, 61, 31));
        label_12->setFont(font3);
        local_ip_browser = new QTextBrowser(centralwidget);
        local_ip_browser->setObjectName("local_ip_browser");
        local_ip_browser->setGeometry(QRect(390, 110, 181, 41));
        local_ip_browser->setFont(font);
        variable_ip = new QCheckBox(centralwidget);
        variable_ip->setObjectName("variable_ip");
        variable_ip->setGeometry(QRect(680, 110, 171, 41));
        variable_ip->setFont(font5);
        variable_ip->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        connect_serial = new QPushButton(centralwidget);
        connect_serial->setObjectName("connect_serial");
        connect_serial->setGeometry(QRect(610, 250, 80, 41));
        connect_serial->setFont(font2);
        connect_serial->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        connect_serial->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(185, 187, 223);"));
        disconnect_button_2 = new QPushButton(centralwidget);
        disconnect_button_2->setObjectName("disconnect_button_2");
        disconnect_button_2->setGeometry(QRect(700, 250, 80, 41));
        disconnect_button_2->setFont(font2);
        disconnect_button_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        disconnect_button_2->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(185, 187, 223);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 950, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Aim IP", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Port", nullptr));
        connect_button->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245", nullptr));
        disconnect_button->setText(QCoreApplication::translate("MainWindow", "\346\226\255\345\274\200", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Local IP", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Port", nullptr));
        protocol->setItemText(0, QCoreApplication::translate("MainWindow", "UDP", nullptr));
        protocol->setItemText(1, QCoreApplication::translate("MainWindow", "TCP", nullptr));

        send_button->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        port_local->setItemText(0, QCoreApplication::translate("MainWindow", "NULL", nullptr));

        label_7->setText(QCoreApplication::translate("MainWindow", "\347\253\257\345\217\243\345\217\267", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\345\215\217\350\256\256", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Receive Mode", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Send Mode", nullptr));
        receive_mode->setItemText(0, QCoreApplication::translate("MainWindow", "\346\226\207\346\234\254\346\250\241\345\274\217\346\216\245\346\224\266", nullptr));
        receive_mode->setItemText(1, QCoreApplication::translate("MainWindow", "16\350\277\233\345\210\266\346\216\245\346\224\266", nullptr));

        port_local_3->setItemText(0, QCoreApplication::translate("MainWindow", "\346\226\207\346\234\254\346\250\241\345\274\217\345\217\221\351\200\201", nullptr));
        port_local_3->setItemText(1, QCoreApplication::translate("MainWindow", "16\350\277\233\345\210\266\345\217\221\351\200\201", nullptr));

        send_cyclically->setText(QCoreApplication::translate("MainWindow", "\345\276\252\347\216\257\345\217\221\351\200\201", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\345\217\221\351\200\201\351\227\264\351\232\224(ms)</p></body></html>", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207", nullptr));
        variable_ip->setText(QCoreApplication::translate("MainWindow", "\347\233\256\347\232\204\345\234\260\345\235\200\351\232\217\345\257\271\346\226\271\345\217\230\345\214\226", nullptr));
        connect_serial->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245", nullptr));
        disconnect_button_2->setText(QCoreApplication::translate("MainWindow", "\346\226\255\345\274\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
