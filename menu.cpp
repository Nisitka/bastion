#include "menu.h"
#include "ui_menu.h"

Menu::Menu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Menu)
{
    ui->setupUi(this);

    //установка размеров
    this->setFixedHeight(600);
    this->setFixedWidth(475);

    //добавление надписи компании
    statusBarLabel = new QLabel;
    statusBarLabel->setText("©ВА ВКО"); //logo.jpeg
    setWindowIcon(QIcon(":/logo.jpeg"));
    this->statusBar()->addWidget(statusBarLabel);

    //блокировка кнопки выбора КСА
    ui->selectionKSApushButton->setEnabled(false);
    //пока не добавили окно для настроек
    ui->SettingsPushButton->setEnabled(false);

    ui->openKSApushButton->setEnabled(false);

    //инициализация адресса кнопки выбора КСА
    DirSelectionKSApushButton = ui->selectionKSApushButton;

}

void Menu::resizeEvent(QResizeEvent *evt)
{    QPixmap bkgnd(":/pult (2).jpg");
    bkgnd = bkgnd.scaled(size(), Qt::IgnoreAspectRatio);
    QPalette p = palette(); //copy current, not create new
    p.setBrush(QPalette::Window, bkgnd);
    setPalette(p);

    QWidget::resizeEvent(evt);

}

void Menu::autorisate()
{
    AutorisateDialog *a = new AutorisateDialog();
    a->setDirSelectionKSApushButton(getDirSelectionKSApushButton());
    a->setWindowTitle("Авторизация");
    a->exec();
}

QPushButton* Menu::getDirSelectionKSApushButton()
{
    return DirSelectionKSApushButton;
}

void Menu::OpenBuidKSA()
{
    buildKSA *buildBastion = new buildKSA;
    this->hide();
    buildBastion->show();
}

Menu::~Menu()
{
    delete ui;
}


