/********************************************************************************
** Form generated from reading UI file 'buildfunctiongroupdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUILDFUNCTIONGROUPDIALOG_H
#define UI_BUILDFUNCTIONGROUPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_buildFunctionGroupDialog
{
public:
    QGroupBox *ARMgroupBox;
    QLineEdit *nameARMLineEdit;
    QLabel *nameARMLabel;
    QPushButton *addARMButton;
    QGroupBox *ParamGroupBox;
    QLabel *workTimeLabel;
    QLineEdit *workTimeLineEdit;
    QLabel *ed_1;
    QLabel *ed_2;
    QLabel *workRealTimeLabel;
    QLineEdit *workRealTimeLineEdit;
    QCheckBox *PeopleFactorCheckBox;
    QGroupBox *ReserveGroupBox;
    QGroupBox *optionsTestingGroupBox;
    QLabel *numTestLabel;
    QLineEdit *numTestLineEdit;
    QPushButton *FinishPushButton;
    QLabel *TimeTestLabel;
    QLabel *ed_3;
    QLineEdit *TimeTestLineEdit;
    QGroupBox *ARMsGroupBox;
    QTextEdit *ARMsTextEdit;
    QLabel *ListARMLabel;
    QLabel *nameFGLabel;
    QLineEdit *nameFGLineEdit;
    QPushButton *updataARMPushButton;
    QPushButton *deleteARMPushButton;

    void setupUi(QDialog *buildFunctionGroupDialog)
    {
        if (buildFunctionGroupDialog->objectName().isEmpty())
            buildFunctionGroupDialog->setObjectName(QString::fromUtf8("buildFunctionGroupDialog"));
        buildFunctionGroupDialog->resize(873, 565);
        ARMgroupBox = new QGroupBox(buildFunctionGroupDialog);
        ARMgroupBox->setObjectName(QString::fromUtf8("ARMgroupBox"));
        ARMgroupBox->setGeometry(QRect(10, 20, 351, 381));
        nameARMLineEdit = new QLineEdit(ARMgroupBox);
        nameARMLineEdit->setObjectName(QString::fromUtf8("nameARMLineEdit"));
        nameARMLineEdit->setGeometry(QRect(150, 30, 191, 20));
        nameARMLabel = new QLabel(ARMgroupBox);
        nameARMLabel->setObjectName(QString::fromUtf8("nameARMLabel"));
        nameARMLabel->setGeometry(QRect(10, 20, 131, 41));
        addARMButton = new QPushButton(ARMgroupBox);
        addARMButton->setObjectName(QString::fromUtf8("addARMButton"));
        addARMButton->setGeometry(QRect(10, 340, 331, 31));
        ParamGroupBox = new QGroupBox(ARMgroupBox);
        ParamGroupBox->setObjectName(QString::fromUtf8("ParamGroupBox"));
        ParamGroupBox->setGeometry(QRect(10, 60, 331, 121));
        workTimeLabel = new QLabel(ParamGroupBox);
        workTimeLabel->setObjectName(QString::fromUtf8("workTimeLabel"));
        workTimeLabel->setGeometry(QRect(20, 30, 161, 21));
        workTimeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        workTimeLineEdit = new QLineEdit(ParamGroupBox);
        workTimeLineEdit->setObjectName(QString::fromUtf8("workTimeLineEdit"));
        workTimeLineEdit->setGeometry(QRect(190, 30, 111, 20));
        ed_1 = new QLabel(ParamGroupBox);
        ed_1->setObjectName(QString::fromUtf8("ed_1"));
        ed_1->setGeometry(QRect(310, 30, 16, 21));
        ed_2 = new QLabel(ParamGroupBox);
        ed_2->setObjectName(QString::fromUtf8("ed_2"));
        ed_2->setGeometry(QRect(310, 60, 16, 21));
        workRealTimeLabel = new QLabel(ParamGroupBox);
        workRealTimeLabel->setObjectName(QString::fromUtf8("workRealTimeLabel"));
        workRealTimeLabel->setGeometry(QRect(10, 60, 171, 21));
        workRealTimeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        workRealTimeLineEdit = new QLineEdit(ParamGroupBox);
        workRealTimeLineEdit->setObjectName(QString::fromUtf8("workRealTimeLineEdit"));
        workRealTimeLineEdit->setGeometry(QRect(190, 60, 111, 20));
        PeopleFactorCheckBox = new QCheckBox(ParamGroupBox);
        PeopleFactorCheckBox->setObjectName(QString::fromUtf8("PeopleFactorCheckBox"));
        PeopleFactorCheckBox->setGeometry(QRect(10, 90, 301, 22));
        ReserveGroupBox = new QGroupBox(ARMgroupBox);
        ReserveGroupBox->setObjectName(QString::fromUtf8("ReserveGroupBox"));
        ReserveGroupBox->setGeometry(QRect(10, 189, 331, 141));
        optionsTestingGroupBox = new QGroupBox(buildFunctionGroupDialog);
        optionsTestingGroupBox->setObjectName(QString::fromUtf8("optionsTestingGroupBox"));
        optionsTestingGroupBox->setGeometry(QRect(10, 410, 351, 131));
        numTestLabel = new QLabel(optionsTestingGroupBox);
        numTestLabel->setObjectName(QString::fromUtf8("numTestLabel"));
        numTestLabel->setGeometry(QRect(0, 30, 181, 21));
        numTestLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        numTestLineEdit = new QLineEdit(optionsTestingGroupBox);
        numTestLineEdit->setObjectName(QString::fromUtf8("numTestLineEdit"));
        numTestLineEdit->setGeometry(QRect(190, 30, 121, 20));
        FinishPushButton = new QPushButton(optionsTestingGroupBox);
        FinishPushButton->setObjectName(QString::fromUtf8("FinishPushButton"));
        FinishPushButton->setGeometry(QRect(10, 90, 321, 31));
        TimeTestLabel = new QLabel(optionsTestingGroupBox);
        TimeTestLabel->setObjectName(QString::fromUtf8("TimeTestLabel"));
        TimeTestLabel->setGeometry(QRect(0, 60, 181, 21));
        TimeTestLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ed_3 = new QLabel(optionsTestingGroupBox);
        ed_3->setObjectName(QString::fromUtf8("ed_3"));
        ed_3->setGeometry(QRect(320, 60, 16, 21));
        TimeTestLineEdit = new QLineEdit(optionsTestingGroupBox);
        TimeTestLineEdit->setObjectName(QString::fromUtf8("TimeTestLineEdit"));
        TimeTestLineEdit->setGeometry(QRect(190, 60, 121, 20));
        ARMsGroupBox = new QGroupBox(buildFunctionGroupDialog);
        ARMsGroupBox->setObjectName(QString::fromUtf8("ARMsGroupBox"));
        ARMsGroupBox->setGeometry(QRect(380, 20, 341, 521));
        ARMsTextEdit = new QTextEdit(ARMsGroupBox);
        ARMsTextEdit->setObjectName(QString::fromUtf8("ARMsTextEdit"));
        ARMsTextEdit->setGeometry(QRect(10, 80, 321, 391));
        ListARMLabel = new QLabel(ARMsGroupBox);
        ListARMLabel->setObjectName(QString::fromUtf8("ListARMLabel"));
        ListARMLabel->setGeometry(QRect(20, 60, 81, 16));
        nameFGLabel = new QLabel(ARMsGroupBox);
        nameFGLabel->setObjectName(QString::fromUtf8("nameFGLabel"));
        nameFGLabel->setGeometry(QRect(10, 20, 131, 41));
        nameFGLineEdit = new QLineEdit(ARMsGroupBox);
        nameFGLineEdit->setObjectName(QString::fromUtf8("nameFGLineEdit"));
        nameFGLineEdit->setGeometry(QRect(140, 30, 191, 20));
        updataARMPushButton = new QPushButton(ARMsGroupBox);
        updataARMPushButton->setObjectName(QString::fromUtf8("updataARMPushButton"));
        updataARMPushButton->setGeometry(QRect(10, 480, 171, 31));
        deleteARMPushButton = new QPushButton(ARMsGroupBox);
        deleteARMPushButton->setObjectName(QString::fromUtf8("deleteARMPushButton"));
        deleteARMPushButton->setGeometry(QRect(190, 480, 141, 31));

        retranslateUi(buildFunctionGroupDialog);
        QObject::connect(addARMButton, SIGNAL(clicked()), buildFunctionGroupDialog, SLOT(add_ARM()));
        QObject::connect(FinishPushButton, SIGNAL(clicked()), buildFunctionGroupDialog, SLOT(calculate()));
        QObject::connect(deleteARMPushButton, SIGNAL(clicked()), buildFunctionGroupDialog, SLOT(clearListARM()));
        QObject::connect(updataARMPushButton, SIGNAL(clicked()), buildFunctionGroupDialog, SLOT(editListARM()));

        QMetaObject::connectSlotsByName(buildFunctionGroupDialog);
    } // setupUi

    void retranslateUi(QDialog *buildFunctionGroupDialog)
    {
        buildFunctionGroupDialog->setWindowTitle(QCoreApplication::translate("buildFunctionGroupDialog", "Dialog", nullptr));
        ARMgroupBox->setTitle(QCoreApplication::translate("buildFunctionGroupDialog", "\320\220\320\240\320\234", nullptr));
        nameARMLabel->setText(QCoreApplication::translate("buildFunctionGroupDialog", "\320\230\320\275\320\264\320\265\320\275\321\202\320\270\321\204\320\270\320\272\320\260\321\202\320\276\321\200 \320\220\320\240\320\234:", nullptr));
        addARMButton->setText(QCoreApplication::translate("buildFunctionGroupDialog", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\220\320\240\320\234 \320\262 \320\263\321\200\321\203\320\277\320\277\321\203", nullptr));
        ParamGroupBox->setTitle(QCoreApplication::translate("buildFunctionGroupDialog", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\320\265\320\273\320\270 \320\275\320\260\320\264\320\265\320\266\320\275\320\276\321\201\321\202\320\270", nullptr));
        workTimeLabel->setText(QCoreApplication::translate("buildFunctionGroupDialog", "\320\235\320\260\321\200\320\260\320\261\320\276\321\202\320\272\320\260 \320\275\320\260 \320\276\321\202\320\272\320\260\320\267 \320\255\320\222\320\234:", nullptr));
        ed_1->setText(QCoreApplication::translate("buildFunctionGroupDialog", "\321\207", nullptr));
        ed_2->setText(QCoreApplication::translate("buildFunctionGroupDialog", "\321\207", nullptr));
        workRealTimeLabel->setText(QCoreApplication::translate("buildFunctionGroupDialog", "\320\242\320\265\320\272\321\203\321\211\320\265\320\265 \320\262\321\200\320\265\320\274\321\217 \321\200\320\260\320\261\320\276\321\202\321\213 \320\255\320\222\320\234:", nullptr));
        PeopleFactorCheckBox->setText(QCoreApplication::translate("buildFunctionGroupDialog", "\320\247\320\265\320\273\320\276\320\262\320\265\321\207\320\265\321\201\320\272\320\270\320\271 \321\204\320\260\320\272\321\202\320\276\321\200", nullptr));
        ReserveGroupBox->setTitle(QCoreApplication::translate("buildFunctionGroupDialog", "\320\240\320\265\320\267\320\265\321\200\320\262", nullptr));
        optionsTestingGroupBox->setTitle(QCoreApplication::translate("buildFunctionGroupDialog", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270 \321\202\320\265\321\201\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217 \321\204\321\203\320\275\320\272\321\206\320\270\320\276\320\275\320\260\320\273\321\214\320\275\320\276\320\271 \320\263\321\200\321\203\320\277\320\277\321\213", nullptr));
        numTestLabel->setText(QCoreApplication::translate("buildFunctionGroupDialog", "\320\232\320\276\320\273\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\202\320\265\321\201\321\202\320\276\320\262:", nullptr));
        FinishPushButton->setText(QCoreApplication::translate("buildFunctionGroupDialog", "\320\237\321\200\320\276\320\270\320\267\320\262\320\265\321\201\321\202\320\270 \321\200\320\260\321\201\321\201\321\207\320\265\321\202 \320\277\320\276\320\272\320\260\320\267\320\260\321\202\320\265\320\273\320\265\320\271", nullptr));
        TimeTestLabel->setText(QCoreApplication::translate("buildFunctionGroupDialog", "\320\224\320\273\320\270\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\321\214 \321\202\320\265\321\201\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217:", nullptr));
        ed_3->setText(QCoreApplication::translate("buildFunctionGroupDialog", "\321\207", nullptr));
        ARMsGroupBox->setTitle(QCoreApplication::translate("buildFunctionGroupDialog", "\320\244\321\203\320\275\320\272\321\206\320\270\320\276\320\275\320\260\320\273\321\214\320\275\320\260\321\217 \320\263\321\200\321\203\320\277\320\277\320\260", nullptr));
        ListARMLabel->setText(QCoreApplication::translate("buildFunctionGroupDialog", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\220\320\240\320\234", nullptr));
        nameFGLabel->setText(QCoreApplication::translate("buildFunctionGroupDialog", "\320\230\320\275\320\264\320\265\320\275\321\202\320\270\321\204\320\270\320\272\320\260\321\202\320\276\321\200 \320\244\320\223:", nullptr));
        updataARMPushButton->setText(QCoreApplication::translate("buildFunctionGroupDialog", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \321\201\320\277\320\270\321\201\320\276\320\272 \320\220\320\240\320\234", nullptr));
        deleteARMPushButton->setText(QCoreApplication::translate("buildFunctionGroupDialog", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \321\201\320\277\320\270\321\201\320\276\320\272 \320\220\320\240\320\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class buildFunctionGroupDialog: public Ui_buildFunctionGroupDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUILDFUNCTIONGROUPDIALOG_H
