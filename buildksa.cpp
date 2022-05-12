#include <QPixmap>
#include <QLabel>
#include <QString>
#include <QChar>
#include <QDebug>

#include "buildksa.h"
#include "ui_buildksa.h"

buildKSA::buildKSA(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::buildKSA)
{
    ui->setupUi(this);

    this->setFixedHeight(810);
    this->setFixedWidth(1350);
    this->setWindowTitle("Моделирование КСА");
    setWindowIcon(QIcon(":/logo.jpeg"));

//    QPixmap bk(":/img_ksa_.jpg");
    QPixmap bk(":/KSA.jpeg");
    ui->label_arm->setPixmap(bk);

    numInstallFunctionGroup = 0;
    ui->numCalculetedInfoValueLabel->setText(
                QString::number(numInstallFunctionGroup) +
                " из 12");

    //создание КСА
    Bastion = new KSA;

    for (int i=0;i<numMaxFunctionGroup;i++)
    {
        //создание окна для инициализации функциональной группы
        bFGd_box.append(new buildFunctionGroupDialog(this));
        //установка связи каждого окна графиков с окном инициализации КСА
        connect(bFGd_box.at(i)->getGD(), SIGNAL(InstallFG_signal()),
                 this, SLOT(installFG()));

        //создание и добавление в КСА функциональной группы
        Bastion->addFG(new FunctionGroup);

        //установка в очередное диалоговое окно соответствующей ФГ
        bFGd_box.at(i)->setFG(Bastion->getFG(i));
    }

    //инициализация окна установки важности ФГ
    ImpFGdialog = new ImportanceFGdialog(this);
    connect(this, SIGNAL(exportKSA(KSA*)),
    ImpFGdialog, SLOT(setKSA(KSA*)));
    //блокировка кнопки открытия окна важности ФГ
    ui->ImportancePushButton->setEnabled(false);

    //инициализация окна графика
    GraphicD = new KSAGraphicDialog(this);
    connect(this, SIGNAL(signalExportValGraphic(double*, int)),
             GraphicD, SLOT(importValues(double*, int)));

    //блокировка опций расчета надежности КСА
    ui->OptionsTestingGroupBox->setEnabled(false);

    //прогреес инициализации
    ui->progressBar->setRange(0, numMaxFunctionGroup);
    ui->progressBar->setValue(numInstallFunctionGroup);

    keyFG = 0;
}

//слот нажатия кнопки инициализации(редактирования) ФГ
void buildKSA::buildFunctionGroupPushButton()
{
    //какая именно кнопка была нажата
    QString keyString1 = sender()->objectName().at(sender()->objectName().size() - 2);
    QString keyString2 = sender()->objectName().at(sender()->objectName().size() - 1);

    QString keyString = keyString1 + keyString2;

    keyFG = keyString.toInt() - 1;

    QString nameFG;
    switch (keyFG)
    {
        case 0:
//            signalNameOpenFG("1");
            nameFG = "Группа управления обеспечениями";
        break;
        case 1:
            nameFG = "Пункт управления ПВО";
        break;
        case 2:
            nameFG = "Пункт управления разведки";
        break;
        case 3:
            nameFG = "Пункт управления РЭБ";
        break;
        case 4:
            nameFG = "Пункт управления авиации";
        break;
        case 5:
            nameFG = "Пункт управления ВПР";
        break;
        case 6:
            nameFG = "Пункт управления ЗГТ";
        break;
        case 7:
            nameFG = "Серверная группа";
        break;
        case 8:
            nameFG = "Пункт управления связи РТО и АСУ";
        break;
        case 9:
            nameFG = "Пункт управления РХБЗ";
        break;
        case 10:
            nameFG = "Пункт управления охраны и обороны КП";
        break;
        case 11:
            nameFG = "Группа боевого управления";
        break;
    }
    bFGd_box.at(keyFG)->getFG()->setName(nameFG);

    //отображение окна
    bFGd_box.at(keyFG)->OpenBuildFGDialog();


}

//слот инсталяции очередной ФГ
void buildKSA::installFG()
{
    if (!bFGd_box.at(keyFG)->getInstalled())
    {
        bFGd_box.at(keyFG)->setInsalled(true);
        numInstallFunctionGroup++;
        ui->progressBar->setValue(numInstallFunctionGroup);

        //разблокирование кнопки установки важности ФГ
        if (numInstallFunctionGroup == numMaxFunctionGroup)
        {
            ui->ImportancePushButton->setEnabled(true);
            ui->OptionsTestingGroupBox->setEnabled(true);
        }

        bFGd_box.at(keyFG)->setWindowTitle("Редактирование функциональной группы");

        ui->numCalculetedInfoValueLabel->setText(
                    QString::number(numInstallFunctionGroup) +
                    " из " +
                    QString::number(numMaxFunctionGroup));
    }

    switch (keyFG)
    {
        case 0:
            ui->pushButton_01->setText("Редактировать");
        break;
        case 1:
            ui->pushButton_02->setText("Редактировать");
        break;
        case 2:
            ui->pushButton_03->setText("Редактировать");
        break;
        case 3:
            ui->pushButton_04->setText("Редактировать");
        break;
        case 4:
            ui->pushButton_05->setText("Редактировать");
        break;
        case 5:
            ui->pushButton_06->setText("Редактировать");
        break;
        case 6:
            ui->pushButton_07->setText("Редактировать");
        break;
        case 7:
            ui->pushButton_08->setText("Редактировать");
        break;
        case 8:
            ui->pushButton_09->setText("Редактировать");
        break;
        case 9:
            ui->pushButton_10->setText("Редактировать");
        break;
        case 10:
            ui->pushButton_11->setText("Редактировать");
        break;
        case 11:
            ui->pushButton_12->setText("Редактировать");
        break;
    }

    bFGd_box.at(keyFG)->hide();
}



void buildKSA::analysisKSAPushButton()
{
    if (numInstallFunctionGroup == numMaxFunctionGroup)
    {
//----------------------------математика по расчету функциональной надежности КСА-----------------------------------------------------
        //--------инициализация окна загрузки и установка с ним связи------------
        Loading* ld = new Loading(this);
        ld->setDialogOpen(GraphicD);
        ld->setWindowTitle("Тестирование функциональной группы");
        connect(this, SIGNAL(signalLoadingCalculate(int, QString)),
                ld, SLOT(setProgress(int, QString)));
        //-----------------------------------------------------------------------

        ld->setRangeProgress(100); //установка "объема вычеслений"

        this->hide();
        ld->show();

        ld->activateWindow();

        sendSignalLoadingCal(4, "Расчет надежности КСА");

        //поиск минимального времени тестирования у ФГ
        TimeWork_min = Bastion->getFG(0)->getTimeWork();
        for (int i=0;i<numMaxFunctionGroup;i++)
        {
            if (TimeWork_min > Bastion->getFG(i)->getTimeWork())
            {
                    TimeWork_min = Bastion->getFG(i)->getTimeWork();
            }
        }
        sendSignalLoadingCal(48, "Расчет надежности КСА");

        //--------инициализация значений функцилнальной надежности----------------------------

        //расчет знаменателя (суммы важностей)
        int AllImportance = 0;
        for (int i=0;i<numMaxFunctionGroup;i++)
        {
            AllImportance+= Bastion->getFG(i)->getImportance();
        }

        Pksa = new double[TimeWork_min];
        for (int i=0;i<TimeWork_min;i++)
        {
            Pksa[i] = 0;
            for (int j=0;j<numMaxFunctionGroup;j++)
            {
                Pksa[i]+= Bastion->getFG(j)->getP()[i] * Bastion->getFG(j)->getImportance();
            }
            Pksa[i] = (double)Pksa[i]/AllImportance;
        }
        //------------------------------------------------------------------------------------
        emit signalExportValGraphic(Pksa, TimeWork_min);

        sendSignalLoadingCal(48, "Расчет надежности КСА");


//------------------------------------------------------------------------------------------------------------------------------------


    }
    else
    {
        errorInfoDialog* error = new errorInfoDialog;
        error->SetTextError("Не все функциональные группы инициализированы!");
        error->exec();
    }
}

void buildKSA::openImportaceFGdialog()
{
    exportKSA(Bastion);
    ImpFGdialog->show();
}

void buildKSA::sendSignalLoadingCal(int value, QString text)
{
    emit signalLoadingCalculate(value, text);
}

buildKSA::~buildKSA()
{
    delete ui;
}
