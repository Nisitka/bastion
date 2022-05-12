/********************************************************************************
** Form generated from reading UI file 'updataarmdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATAARMDIALOG_H
#define UI_UPDATAARMDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_updataARMDialog
{
public:
    QLabel *nameARMLabel;
    QLineEdit *nameARMLineEdit;
    QLabel *T_ARMLabel;
    QLabel *timeWorkARMLabel;
    QLineEdit *T_ARMLineEdit;
    QLineEdit *timeWorkARMLineEdit;
    QPushButton *nextARMpushButton;
    QPushButton *backARMpushButton;
    QLabel *ed_1;
    QLabel *ed_2;
    QFrame *line;
    QPushButton *deleteARMpushButton;
    QCheckBox *checkBox;
    QFrame *line_2;
    QFrame *line_3;
    QPushButton *exitpushButton;
    QPushButton *upDataARMButton;
    QLabel *label;
    QStackedWidget *stackedDiagram;
    QWidget *page1;
    QWidget *page2;

    void setupUi(QDialog *updataARMDialog)
    {
        if (updataARMDialog->objectName().isEmpty())
            updataARMDialog->setObjectName(QString::fromUtf8("updataARMDialog"));
        updataARMDialog->resize(894, 459);
        nameARMLabel = new QLabel(updataARMDialog);
        nameARMLabel->setObjectName(QString::fromUtf8("nameARMLabel"));
        nameARMLabel->setGeometry(QRect(0, 17, 131, 31));
        nameARMLabel->setLayoutDirection(Qt::LeftToRight);
        nameARMLabel->setTextFormat(Qt::AutoText);
        nameARMLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        nameARMLineEdit = new QLineEdit(updataARMDialog);
        nameARMLineEdit->setObjectName(QString::fromUtf8("nameARMLineEdit"));
        nameARMLineEdit->setGeometry(QRect(140, 20, 191, 31));
        T_ARMLabel = new QLabel(updataARMDialog);
        T_ARMLabel->setObjectName(QString::fromUtf8("T_ARMLabel"));
        T_ARMLabel->setGeometry(QRect(30, 90, 131, 21));
        T_ARMLabel->setLayoutDirection(Qt::LeftToRight);
        T_ARMLabel->setTextFormat(Qt::AutoText);
        T_ARMLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        timeWorkARMLabel = new QLabel(updataARMDialog);
        timeWorkARMLabel->setObjectName(QString::fromUtf8("timeWorkARMLabel"));
        timeWorkARMLabel->setGeometry(QRect(20, 120, 141, 21));
        timeWorkARMLabel->setLayoutDirection(Qt::LeftToRight);
        timeWorkARMLabel->setTextFormat(Qt::AutoText);
        timeWorkARMLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        T_ARMLineEdit = new QLineEdit(updataARMDialog);
        T_ARMLineEdit->setObjectName(QString::fromUtf8("T_ARMLineEdit"));
        T_ARMLineEdit->setGeometry(QRect(170, 90, 101, 21));
        timeWorkARMLineEdit = new QLineEdit(updataARMDialog);
        timeWorkARMLineEdit->setObjectName(QString::fromUtf8("timeWorkARMLineEdit"));
        timeWorkARMLineEdit->setGeometry(QRect(170, 120, 101, 21));
        nextARMpushButton = new QPushButton(updataARMDialog);
        nextARMpushButton->setObjectName(QString::fromUtf8("nextARMpushButton"));
        nextARMpushButton->setGeometry(QRect(380, 20, 31, 31));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons8_right.png"), QSize(), QIcon::Normal, QIcon::Off);
        nextARMpushButton->setIcon(icon);
        backARMpushButton = new QPushButton(updataARMDialog);
        backARMpushButton->setObjectName(QString::fromUtf8("backARMpushButton"));
        backARMpushButton->setGeometry(QRect(340, 20, 31, 31));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons8_left.png"), QSize(), QIcon::Normal, QIcon::Off);
        backARMpushButton->setIcon(icon1);
        ed_1 = new QLabel(updataARMDialog);
        ed_1->setObjectName(QString::fromUtf8("ed_1"));
        ed_1->setGeometry(QRect(280, 90, 16, 16));
        ed_2 = new QLabel(updataARMDialog);
        ed_2->setObjectName(QString::fromUtf8("ed_2"));
        ed_2->setGeometry(QRect(280, 120, 16, 16));
        line = new QFrame(updataARMDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 60, 811, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        deleteARMpushButton = new QPushButton(updataARMDialog);
        deleteARMpushButton->setObjectName(QString::fromUtf8("deleteARMpushButton"));
        deleteARMpushButton->setGeometry(QRect(30, 310, 101, 31));
        checkBox = new QCheckBox(updataARMDialog);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(30, 150, 161, 22));
        line_2 = new QFrame(updataARMDialog);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(290, 70, 21, 331));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(updataARMDialog);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(0, 340, 301, 21));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        exitpushButton = new QPushButton(updataARMDialog);
        exitpushButton->setObjectName(QString::fromUtf8("exitpushButton"));
        exitpushButton->setGeometry(QRect(80, 360, 141, 31));
        upDataARMButton = new QPushButton(updataARMDialog);
        upDataARMButton->setObjectName(QString::fromUtf8("upDataARMButton"));
        upDataARMButton->setGeometry(QRect(140, 310, 151, 31));
        label = new QLabel(updataARMDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(440, 20, 371, 31));
        QFont font;
        font.setPointSize(11);
        label->setFont(font);
        stackedDiagram = new QStackedWidget(updataARMDialog);
        stackedDiagram->setObjectName(QString::fromUtf8("stackedDiagram"));
        stackedDiagram->setGeometry(QRect(300, 70, 511, 331));
        page1 = new QWidget();
        page1->setObjectName(QString::fromUtf8("page1"));
        stackedDiagram->addWidget(page1);
        page2 = new QWidget();
        page2->setObjectName(QString::fromUtf8("page2"));
        stackedDiagram->addWidget(page2);

        retranslateUi(updataARMDialog);
        QObject::connect(nextARMpushButton, SIGNAL(clicked()), updataARMDialog, SLOT(nextARM()));
        QObject::connect(backARMpushButton, SIGNAL(clicked()), updataARMDialog, SLOT(backARM()));
        QObject::connect(T_ARMLineEdit, SIGNAL(textEdited(QString)), updataARMDialog, SLOT(editARMtext(QString)));
        QObject::connect(nameARMLineEdit, SIGNAL(textEdited(QString)), updataARMDialog, SLOT(editARMtext(QString)));
        QObject::connect(timeWorkARMLineEdit, SIGNAL(textEdited(QString)), updataARMDialog, SLOT(editARMtext(QString)));
        QObject::connect(upDataARMButton, SIGNAL(clicked()), updataARMDialog, SLOT(editARMbutton()));
        QObject::connect(exitpushButton, SIGNAL(clicked()), updataARMDialog, SLOT(closeEditARMbutton()));
        QObject::connect(deleteARMpushButton, SIGNAL(clicked()), updataARMDialog, SLOT(deleteARMbutton()));

        stackedDiagram->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(updataARMDialog);
    } // setupUi

    void retranslateUi(QDialog *updataARMDialog)
    {
        updataARMDialog->setWindowTitle(QCoreApplication::translate("updataARMDialog", "Dialog", nullptr));
        nameARMLabel->setText(QCoreApplication::translate("updataARMDialog", "\320\230\320\275\320\264\320\270\321\202\320\270\321\204\320\270\320\272\320\260\321\202\320\276\321\200 \320\220\320\240\320\234:", nullptr));
        T_ARMLabel->setText(QCoreApplication::translate("updataARMDialog", "\320\235\320\260\321\200\320\260\320\261\320\276\321\202\320\272\320\260 \320\275\320\260 \320\276\321\202\320\272\320\260\320\267:", nullptr));
        timeWorkARMLabel->setText(QCoreApplication::translate("updataARMDialog", "\320\237\321\200\320\276\321\200\320\260\320\261\320\276\321\202\320\260\320\262\321\210\320\265\320\265 \320\262\321\200\320\265\320\274\321\217:", nullptr));
        nextARMpushButton->setText(QString());
        backARMpushButton->setText(QString());
        ed_1->setText(QCoreApplication::translate("updataARMDialog", "\321\207", nullptr));
        ed_2->setText(QCoreApplication::translate("updataARMDialog", "\321\207", nullptr));
        deleteARMpushButton->setText(QCoreApplication::translate("updataARMDialog", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\220\320\240\320\234", nullptr));
        checkBox->setText(QCoreApplication::translate("updataARMDialog", "\320\247\320\265\320\273\320\276\320\262\320\265\321\207\320\265\321\201\320\272\320\270\320\271 \321\204\320\260\320\272\321\202\320\276\321\200", nullptr));
        exitpushButton->setText(QCoreApplication::translate("updataARMDialog", "\320\222\321\213\320\271\321\202\320\270 \320\270\320\267 \321\200\320\265\320\264\320\260\320\272\321\202\320\276\321\200\320\260", nullptr));
        upDataARMButton->setText(QCoreApplication::translate("updataARMDialog", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217", nullptr));
        label->setText(QCoreApplication::translate("updataARMDialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class updataARMDialog: public Ui_updataARMDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATAARMDIALOG_H
