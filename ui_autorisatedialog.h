/********************************************************************************
** Form generated from reading UI file 'autorisatedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTORISATEDIALOG_H
#define UI_AUTORISATEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AutorisateDialog
{
public:
    QLabel *label_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *login;
    QLabel *label_2;
    QLineEdit *password;
    QPushButton *LoginPushButton;

    void setupUi(QDialog *AutorisateDialog)
    {
        if (AutorisateDialog->objectName().isEmpty())
            AutorisateDialog->setObjectName(QString::fromUtf8("AutorisateDialog"));
        AutorisateDialog->resize(423, 187);
        label_3 = new QLabel(AutorisateDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 0, 401, 32));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(AutorisateDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 40, 401, 103));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        login = new QLineEdit(layoutWidget);
        login->setObjectName(QString::fromUtf8("login"));

        verticalLayout->addWidget(login);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        password = new QLineEdit(layoutWidget);
        password->setObjectName(QString::fromUtf8("password"));

        verticalLayout->addWidget(password);

        LoginPushButton = new QPushButton(AutorisateDialog);
        LoginPushButton->setObjectName(QString::fromUtf8("LoginPushButton"));
        LoginPushButton->setGeometry(QRect(180, 150, 71, 28));

        retranslateUi(AutorisateDialog);
        QObject::connect(LoginPushButton, SIGNAL(clicked()), AutorisateDialog, SLOT(Login()));

        QMetaObject::connectSlotsByName(AutorisateDialog);
    } // setupUi

    void retranslateUi(QDialog *AutorisateDialog)
    {
        AutorisateDialog->setWindowTitle(QCoreApplication::translate("AutorisateDialog", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("AutorisateDialog", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        label->setText(QCoreApplication::translate("AutorisateDialog", "\320\233\320\276\320\263\320\270\320\275:", nullptr));
        label_2->setText(QCoreApplication::translate("AutorisateDialog", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        LoginPushButton->setText(QCoreApplication::translate("AutorisateDialog", "\320\222\320\276\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AutorisateDialog: public Ui_AutorisateDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTORISATEDIALOG_H
