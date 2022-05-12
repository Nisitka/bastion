/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QPushButton *autorisatedPushButton;
    QLabel *label_fon;
    QPushButton *SettingsPushButton;
    QLabel *label1;
    QPushButton *selectionKSApushButton;
    QLabel *label;
    QPushButton *exitPushButton;
    QPushButton *openKSApushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->resize(474, 600);
        centralwidget = new QWidget(Menu);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 461, 608));
        autorisatedPushButton = new QPushButton(widget);
        autorisatedPushButton->setObjectName(QString::fromUtf8("autorisatedPushButton"));
        autorisatedPushButton->setGeometry(QRect(160, 280, 161, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        autorisatedPushButton->setFont(font);
        label_fon = new QLabel(widget);
        label_fon->setObjectName(QString::fromUtf8("label_fon"));
        label_fon->setGeometry(QRect(11, 441, 16, 20));
        SettingsPushButton = new QPushButton(widget);
        SettingsPushButton->setObjectName(QString::fromUtf8("SettingsPushButton"));
        SettingsPushButton->setGeometry(QRect(190, 410, 101, 28));
        label1 = new QLabel(widget);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(11, 64, 451, 141));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(27);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(75);
        font1.setStrikeOut(false);
        font1.setStyleStrategy(QFont::PreferAntialias);
        label1->setFont(font1);
        label1->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.601, y1:0, x2:0.495, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"background-color: rgb(72, 117, 0);\n"
"color: rgb(67, 168, 0);\n"
"color: rgb(2, 253, 224);\n"
"color: rgb(0, 49, 212);\n"
"background-color: rgb(1, 200, 225);\n"
""));
        label1->setAlignment(Qt::AlignCenter);
        selectionKSApushButton = new QPushButton(widget);
        selectionKSApushButton->setObjectName(QString::fromUtf8("selectionKSApushButton"));
        selectionKSApushButton->setGeometry(QRect(160, 320, 161, 31));
        QFont font2;
        font2.setPointSize(9);
        selectionKSApushButton->setFont(font2);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 160, 361, 30));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Times New Roman"));
        font3.setPointSize(15);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setWeight(75);
        label->setFont(font3);
        label->setStyleSheet(QString::fromUtf8("border-top-color: rgb(0, 85, 255);\n"
"color: rgb(0, 85, 255);"));
        label->setAlignment(Qt::AlignCenter);
        exitPushButton = new QPushButton(widget);
        exitPushButton->setObjectName(QString::fromUtf8("exitPushButton"));
        exitPushButton->setGeometry(QRect(190, 470, 101, 28));
        exitPushButton->setFont(font2);
        openKSApushButton = new QPushButton(widget);
        openKSApushButton->setObjectName(QString::fromUtf8("openKSApushButton"));
        openKSApushButton->setGeometry(QRect(160, 360, 161, 31));
        openKSApushButton->setFont(font2);
        Menu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Menu);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 474, 25));
        Menu->setMenuBar(menubar);
        statusbar = new QStatusBar(Menu);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Menu->setStatusBar(statusbar);

        retranslateUi(Menu);
        QObject::connect(exitPushButton, SIGNAL(clicked()), Menu, SLOT(close()));
        QObject::connect(autorisatedPushButton, SIGNAL(clicked()), Menu, SLOT(autorisate()));
        QObject::connect(selectionKSApushButton, SIGNAL(clicked()), Menu, SLOT(OpenBuidKSA()));

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QMainWindow *Menu)
    {
        Menu->setWindowTitle(QCoreApplication::translate("Menu", "Menu", nullptr));
        autorisatedPushButton->setText(QCoreApplication::translate("Menu", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        label_fon->setText(QString());
        SettingsPushButton->setText(QCoreApplication::translate("Menu", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        label1->setText(QCoreApplication::translate("Menu", "Concurrent Betta  V1.0", nullptr));
        selectionKSApushButton->setText(QCoreApplication::translate("Menu", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\274\320\276\320\264\320\265\320\273\321\214", nullptr));
        label->setText(QString());
        exitPushButton->setText(QCoreApplication::translate("Menu", "\320\262\321\213\320\271\321\202\320\270", nullptr));
        openKSApushButton->setText(QCoreApplication::translate("Menu", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\274\320\276\320\264\320\265\320\273\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
