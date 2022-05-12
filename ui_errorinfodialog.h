/********************************************************************************
** Form generated from reading UI file 'errorinfodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERRORINFODIALOG_H
#define UI_ERRORINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_errorInfoDialog
{
public:
    QPushButton *pushButton;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *errorInfoDialog)
    {
        if (errorInfoDialog->objectName().isEmpty())
            errorInfoDialog->setObjectName(QString::fromUtf8("errorInfoDialog"));
        errorInfoDialog->resize(634, 493);
        pushButton = new QPushButton(errorInfoDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 100, 121, 31));
        textBrowser = new QTextBrowser(errorInfoDialog);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(30, 10, 361, 81));

        retranslateUi(errorInfoDialog);
        QObject::connect(pushButton, SIGNAL(clicked()), errorInfoDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(errorInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *errorInfoDialog)
    {
        errorInfoDialog->setWindowTitle(QCoreApplication::translate("errorInfoDialog", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("errorInfoDialog", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class errorInfoDialog: public Ui_errorInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERRORINFODIALOG_H
