#include <QMessageBox>

#include "autorisatedialog.h"
#include "ui_autorisatedialog.h"

AutorisateDialog::AutorisateDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AutorisateDialog)
{
    ui->setupUi(this);

    this->setFixedSize(420, 200);

    ui->password->setEchoMode(QLineEdit::Password);  //скрытие написанного в поле пароля
}

void AutorisateDialog::setDirSelectionKSApushButton(QPushButton *DirButton)
{
    DirSelectionKSApushButton = DirButton;
}

void AutorisateDialog::Login()
{
    QString login_ = ui->login->text();
    QString password_ = ui->password->text();

    if(
       login_ == "kursant" &&
       password_ == "12345678"
       )
    {
        DirSelectionKSApushButton->setEnabled(true);
        this->accept();
    }
    else{
        QMessageBox::warning(this,"Ошибка","Неверный логин или пароль");

    }
}

AutorisateDialog::~AutorisateDialog()
{
    delete ui;
}
