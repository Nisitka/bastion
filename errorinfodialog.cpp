#include "errorinfodialog.h"
#include "ui_errorinfodialog.h"

errorInfoDialog::errorInfoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::errorInfoDialog)
{
    ui->setupUi(this);

    this->setWindowTitle("Ошибка");
    this->setFixedHeight(140);
    this->setFixedWidth(430);
}


//установление текста ошибки
void errorInfoDialog::SetTextError(QString text)
{
    ui->textBrowser->setText(text);
}

errorInfoDialog::~errorInfoDialog()
{
    delete ui;
}
