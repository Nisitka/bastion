/********************************************************************************
** Form generated from reading UI file 'graphicdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHICDIALOG_H
#define UI_GRAPHICDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_GraphicDialog
{
public:
    QCustomPlot *MFailsGraphic;
    QLabel *label;
    QLabel *label_2;
    QFrame *line;
    QPushButton *addOnFGPushButton;
    QPushButton *restartPushButton;
    QCustomPlot *LamdaGraphic;
    QLabel *label_4;
    QLabel *label_5;
    QCustomPlot *PGraphic;
    QLabel *label_3;
    QLabel *label_6;
    QFrame *line_2;
    QLabel *numFailsLabel;
    QLineEdit *numFailsLineEdit;

    void setupUi(QDialog *GraphicDialog)
    {
        if (GraphicDialog->objectName().isEmpty())
            GraphicDialog->setObjectName(QString::fromUtf8("GraphicDialog"));
        GraphicDialog->resize(2250, 803);
        MFailsGraphic = new QCustomPlot(GraphicDialog);
        MFailsGraphic->setObjectName(QString::fromUtf8("MFailsGraphic"));
        MFailsGraphic->setGeometry(QRect(10, 20, 681, 371));
        label = new QLabel(MFailsGraphic);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 55, 16));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label_2 = new QLabel(MFailsGraphic);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(650, 320, 16, 21));
        label_2->setFont(font);
        line = new QFrame(GraphicDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 400, 691, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        addOnFGPushButton = new QPushButton(GraphicDialog);
        addOnFGPushButton->setObjectName(QString::fromUtf8("addOnFGPushButton"));
        addOnFGPushButton->setGeometry(QRect(120, 740, 201, 31));
        restartPushButton = new QPushButton(GraphicDialog);
        restartPushButton->setObjectName(QString::fromUtf8("restartPushButton"));
        restartPushButton->setGeometry(QRect(350, 740, 201, 31));
        LamdaGraphic = new QCustomPlot(GraphicDialog);
        LamdaGraphic->setObjectName(QString::fromUtf8("LamdaGraphic"));
        LamdaGraphic->setGeometry(QRect(700, 20, 681, 371));
        label_4 = new QLabel(LamdaGraphic);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(660, 320, 16, 21));
        label_4->setFont(font);
        label_5 = new QLabel(LamdaGraphic);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 0, 16, 31));
        label_5->setFont(font);
        PGraphic = new QCustomPlot(GraphicDialog);
        PGraphic->setObjectName(QString::fromUtf8("PGraphic"));
        PGraphic->setGeometry(QRect(700, 400, 681, 371));
        label_3 = new QLabel(PGraphic);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(660, 320, 16, 21));
        label_3->setFont(font);
        label_6 = new QLabel(PGraphic);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 20, 16, 41));
        label_6->setFont(font);
        line_2 = new QFrame(GraphicDialog);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(680, 410, 16, 391));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        numFailsLabel = new QLabel(GraphicDialog);
        numFailsLabel->setObjectName(QString::fromUtf8("numFailsLabel"));
        numFailsLabel->setGeometry(QRect(20, 430, 421, 31));
        QFont font1;
        font1.setPointSize(11);
        numFailsLabel->setFont(font1);
        numFailsLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        numFailsLineEdit = new QLineEdit(GraphicDialog);
        numFailsLineEdit->setObjectName(QString::fromUtf8("numFailsLineEdit"));
        numFailsLineEdit->setGeometry(QRect(450, 430, 221, 31));

        retranslateUi(GraphicDialog);
        QObject::connect(addOnFGPushButton, SIGNAL(clicked()), GraphicDialog, SLOT(add_FG()));
        QObject::connect(restartPushButton, SIGNAL(clicked()), GraphicDialog, SLOT(atFirstFG()));

        QMetaObject::connectSlotsByName(GraphicDialog);
    } // setupUi

    void retranslateUi(QDialog *GraphicDialog)
    {
        GraphicDialog->setWindowTitle(QCoreApplication::translate("GraphicDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("GraphicDialog", "m", nullptr));
        label_2->setText(QCoreApplication::translate("GraphicDialog", "t", nullptr));
        addOnFGPushButton->setText(QCoreApplication::translate("GraphicDialog", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\262 \320\232\320\241\320\220", nullptr));
        restartPushButton->setText(QCoreApplication::translate("GraphicDialog", "\320\230\320\275\320\270\321\206\320\270\320\260\320\273\320\270\320\267\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \321\201\320\275\320\260\321\207\320\260\320\273\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("GraphicDialog", "t", nullptr));
        label_5->setText(QCoreApplication::translate("GraphicDialog", "\316\273", nullptr));
        label_3->setText(QCoreApplication::translate("GraphicDialog", "t", nullptr));
        label_6->setText(QCoreApplication::translate("GraphicDialog", "P", nullptr));
        numFailsLabel->setText(QCoreApplication::translate("GraphicDialog", "\320\236\320\261\321\211\320\265\320\265 \320\272\320\276\320\273\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\276\321\202\320\272\320\260\320\267\320\276\320\262:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GraphicDialog: public Ui_GraphicDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHICDIALOG_H
