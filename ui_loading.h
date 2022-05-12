/********************************************************************************
** Form generated from reading UI file 'loading.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADING_H
#define UI_LOADING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Loading
{
public:
    QLabel *InfoTextLabel;
    QProgressBar *progressBar;
    QPushButton *FinishPushButton;

    void setupUi(QDialog *Loading)
    {
        if (Loading->objectName().isEmpty())
            Loading->setObjectName(QString::fromUtf8("Loading"));
        Loading->setEnabled(true);
        Loading->resize(1324, 300);
        Loading->setAutoFillBackground(false);
        Loading->setModal(false);
        InfoTextLabel = new QLabel(Loading);
        InfoTextLabel->setObjectName(QString::fromUtf8("InfoTextLabel"));
        InfoTextLabel->setEnabled(true);
        InfoTextLabel->setGeometry(QRect(10, 40, 951, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Palatino Linotype"));
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        InfoTextLabel->setFont(font);
        progressBar = new QProgressBar(Loading);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setEnabled(true);
        progressBar->setGeometry(QRect(10, 10, 951, 31));
        progressBar->setValue(24);
        FinishPushButton = new QPushButton(Loading);
        FinishPushButton->setObjectName(QString::fromUtf8("FinishPushButton"));
        FinishPushButton->setEnabled(true);
        FinishPushButton->setGeometry(QRect(410, 100, 151, 31));
        FinishPushButton->setAutoExclusive(false);
        progressBar->raise();
        FinishPushButton->raise();
        InfoTextLabel->raise();

        retranslateUi(Loading);

        QMetaObject::connectSlotsByName(Loading);
    } // setupUi

    void retranslateUi(QDialog *Loading)
    {
        Loading->setWindowTitle(QCoreApplication::translate("Loading", "Dialog", nullptr));
        InfoTextLabel->setText(QCoreApplication::translate("Loading", "TextLabel", nullptr));
        FinishPushButton->setText(QCoreApplication::translate("Loading", "\320\240\320\265\320\273\321\214\321\202\320\260\321\202\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Loading: public Ui_Loading {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADING_H
