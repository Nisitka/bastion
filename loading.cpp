#include "loading.h"
#include "ui_loading.h"

Loading::Loading(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Loading)
{
    ui->setupUi(this);

    this->setFixedSize(970, 150);
    this->setWindowTitle("Загрузка..."); //имя окана по умолчанию
    ui->InfoTextLabel->clear();
    setWindowIcon(QIcon(":/logo.jpeg"));
    progress = 0;
    //установка соединение кнопки со слотом открытия окна после загрузки
    connect(ui->FinishPushButton, SIGNAL(clicked()),
            this, SLOT(clickFinishButton()));

    ui->progressBar->activateWindow();

    ui->progressBar->reset();
    ui->progressBar->setAlignment(Qt::AlignCenter);
    ui->progressBar->setRange(0, 0);
    ui->progressBar->setValue(0);

    ui->FinishPushButton->setEnabled(false);
}

void Loading::setDialogOpen(QDialog *nextDialog_)
{
    nextDialog = nextDialog_;
}

//слот для изменения значения прогресса
void Loading::setProgress(int value, QString text)
{
    progress+= value;

    ui->progressBar->setValue(progress);
    ui->InfoTextLabel->setText(text + "...");

    if (progress == RangeProgress)
        {
            ui->InfoTextLabel->clear();
            ui->FinishPushButton->setEnabled(true);
        }
}

//метод для установки максимального значения прогресса
void Loading::setRangeProgress(int Range)
{
    RangeProgress = Range;
    ui->progressBar->setRange(0, Range);
}

void Loading::clickFinishButton()
{
    this->accept();

    nextDialog->show();
}

Loading::~Loading()
{
    delete ui;
}
