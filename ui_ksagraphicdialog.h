/********************************************************************************
** Form generated from reading UI file 'ksagraphicdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KSAGRAPHICDIALOG_H
#define UI_KSAGRAPHICDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_KSAGraphicDialog
{
public:
    QCustomPlot *PksaGraphic;
    QLabel *label;
    QLabel *label_2;
    QPushButton *SaveModelButton;
    QPushButton *closeButton;
    QFrame *line;

    void setupUi(QDialog *KSAGraphicDialog)
    {
        if (KSAGraphicDialog->objectName().isEmpty())
            KSAGraphicDialog->setObjectName(QString::fromUtf8("KSAGraphicDialog"));
        KSAGraphicDialog->resize(823, 482);
        PksaGraphic = new QCustomPlot(KSAGraphicDialog);
        PksaGraphic->setObjectName(QString::fromUtf8("PksaGraphic"));
        PksaGraphic->setGeometry(QRect(10, 10, 801, 371));
        label = new QLabel(PksaGraphic);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 0, 51, 31));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label_2 = new QLabel(PksaGraphic);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(770, 340, 16, 21));
        label_2->setFont(font);
        SaveModelButton = new QPushButton(KSAGraphicDialog);
        SaveModelButton->setObjectName(QString::fromUtf8("SaveModelButton"));
        SaveModelButton->setGeometry(QRect(240, 410, 141, 31));
        closeButton = new QPushButton(KSAGraphicDialog);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(400, 410, 141, 31));
        line = new QFrame(KSAGraphicDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(-23, 390, 851, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(KSAGraphicDialog);
        QObject::connect(closeButton, SIGNAL(clicked()), KSAGraphicDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(KSAGraphicDialog);
    } // setupUi

    void retranslateUi(QDialog *KSAGraphicDialog)
    {
        KSAGraphicDialog->setWindowTitle(QCoreApplication::translate("KSAGraphicDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("KSAGraphicDialog", "K\321\204\320\275", nullptr));
        label_2->setText(QCoreApplication::translate("KSAGraphicDialog", "t", nullptr));
        SaveModelButton->setText(QCoreApplication::translate("KSAGraphicDialog", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\274\320\276\320\264\320\265\320\273\321\214", nullptr));
        closeButton->setText(QCoreApplication::translate("KSAGraphicDialog", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KSAGraphicDialog: public Ui_KSAGraphicDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KSAGRAPHICDIALOG_H
