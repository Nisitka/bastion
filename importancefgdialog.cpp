#include "importancefgdialog.h"
#include "ui_importancefgdialog.h"

ImportanceFGdialog::ImportanceFGdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ImportanceFGdialog)
{
    ui->setupUi(this);

    this->setFixedSize(885, 610);
    this->setWindowTitle("Установка значей важности ФГ");
    setWindowIcon(QIcon(":/logo.jpeg"));

    ValueLineEdit.append(ui->lineEdit);
    ValueLineEdit.append(ui->lineEdit_2);
    ValueLineEdit.append(ui->lineEdit_3);
    ValueLineEdit.append(ui->lineEdit_4);
    ValueLineEdit.append(ui->lineEdit_5);
    ValueLineEdit.append(ui->lineEdit_6);
    ValueLineEdit.append(ui->lineEdit_7);
    ValueLineEdit.append(ui->lineEdit_8);
    ValueLineEdit.append(ui->lineEdit_9);
    ValueLineEdit.append(ui->lineEdit_10);
    ValueLineEdit.append(ui->lineEdit_11);
    ValueLineEdit.append(ui->lineEdit_12);

    NameLabel.append(ui->label1);
    NameLabel.append(ui->label2);
    NameLabel.append(ui->label3);
    NameLabel.append(ui->label4);
    NameLabel.append(ui->label5);
    NameLabel.append(ui->label6);
    NameLabel.append(ui->label7);
    NameLabel.append(ui->label8);
    NameLabel.append(ui->label9);
    NameLabel.append(ui->label10);
    NameLabel.append(ui->label11);
    NameLabel.append(ui->label12);

    Sliders.append(ui->horizontalSlider01);
    Sliders.append(ui->horizontalSlider02);
    Sliders.append(ui->horizontalSlider03);
    Sliders.append(ui->horizontalSlider04);
    Sliders.append(ui->horizontalSlider05);
    Sliders.append(ui->horizontalSlider06);
    Sliders.append(ui->horizontalSlider07);
    Sliders.append(ui->horizontalSlider08);
    Sliders.append(ui->horizontalSlider09);
    Sliders.append(ui->horizontalSlider10);
    Sliders.append(ui->horizontalSlider11);
    Sliders.append(ui->horizontalSlider12);


    for (int i=0;i<12;i++)
    {
        Sliders.at(i)->setValue(49);
        ValueLineEdit.at(i)->setReadOnly(true);
    }
    //блокировка кнопки установки значений
    ui->SetValuePushButton->setEnabled(false);

}

void ImportanceFGdialog::setKSA(KSA* ksa_)
{
    ksa = ksa_;

    //инцилизация полей
    for (int i=0;i<12;i++)
    {
        NameLabel.at(i)->setText(ksa->getFG(i)->getName());
    }

}

void ImportanceFGdialog::clickResetValue()
{
    for (int i=0; i<12; i++)
    {
        Sliders.at(i)->setValue(0);
    }
}

//слот отклика на изменения в значениях скролла
void ImportanceFGdialog::setChangeSliders(int value)
{
    ui->SetValuePushButton->setEnabled(true);

    QString keyString1 = sender()->objectName().at(sender()->objectName().size() - 2);
    QString keyString2 = sender()->objectName().at(sender()->objectName().size() - 1);

    QString keyString = keyString1 + keyString2;

    int key = keyString.toInt();

    switch (key)
    {
        case 1:
            ValueLineEdit.at(0)->setText(QString::number(value + 1));
        break;
        case 2:
            ValueLineEdit.at(1)->setText(QString::number(value + 1));
        break;
        case 3:
            ValueLineEdit.at(2)->setText(QString::number(value + 1));
        break;
        case 4:
            ValueLineEdit.at(3)->setText(QString::number(value + 1));
        break;
        case 5:
            ValueLineEdit.at(4)->setText(QString::number(value + 1));
        break;
        case 6:
            ValueLineEdit.at(5)->setText(QString::number(value + 1));
        break;
        case 7:
            ValueLineEdit.at(6)->setText(QString::number(value + 1));
        break;
        case 8:
            ValueLineEdit.at(7)->setText(QString::number(value + 1));
        break;
        case 9:
            ValueLineEdit.at(8)->setText(QString::number(value + 1));
        break;
        case 10:
            ValueLineEdit.at(9)->setText(QString::number(value + 1));
        break;
        case 11:
            ValueLineEdit.at(10)->setText(QString::number(value + 1));
        break;
        case 12:
            ValueLineEdit.at(11)->setText(QString::number(value + 1));
        break;
    }
}

//слот установки значений важности для ФГ
void ImportanceFGdialog::setValueImportanceFG()
{
    ui->SetValuePushButton->setEnabled(false);
    for (int i=0;i<12;i++)
    {
        ksa->getFG(i)->setImportance(ValueLineEdit.at(i)->text().toInt());
    }
}

ImportanceFGdialog::~ImportanceFGdialog()
{
    delete ui;
}
