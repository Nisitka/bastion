#include "buildfunctiongroupdialog.h"
#include "ui_buildfunctiongroupdialog.h"

#include <cmath>

buildFunctionGroupDialog::buildFunctionGroupDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::buildFunctionGroupDialog)
{
    ui->setupUi(this);

    this->setWindowTitle("Создание функциональной группы");
    setWindowIcon(QIcon(":/logo.jpeg"));
    this->setFixedSize(730, 550);

    //данное окно еще ниразу не открывали
    notOpensWindow = true;

    //блокирование опций рассчета пар-ов ФГ
    ui->optionsTestingGroupBox->setEnabled(false);

    //блокирование кнопок редактирования списка АРМ
    ui->updataARMPushButton->setEnabled(false);
    ui->deleteARMPushButton->setEnabled(false);

    //блокирование поля списка АРМ
    ui->ARMsTextEdit->setReadOnly(true);

    Installed = new bool;
    *Installed = false;

    //----------Инициализация диалогового окна редакции списка АРМ-----------
    updataARM = new updataARMDialog(this);
    updataARM->setFixedSize(800, 400);
    updataARM->setWindowTitle("Редакция группы АРМ");

    connect(updataARM, SIGNAL(ListARMtext(QVector <QString>*)),
             this, SLOT(setListARM(QVector <QString>*)));

    connect(updataARM, SIGNAL(clearListARMsignal()),
             this, SLOT(clearListARM()));
    //-----------------------------------------------------------------------

    //----------------Иницализация диалогового окно графиков-----------------
    GD = new GraphicDialog(this);

    //экспорт функциональной группы в окно графиков
    connect(this, SIGNAL(signalSetGraphic(FunctionGroup*)),
             GD, SLOT(exportCalValues(FunctionGroup*)));
    //открытие окна инциализации(редактирования) ФГ после просмотра графиков
    connect(GD, SIGNAL(OpenBuldFGDialog_signal()),
             this, SLOT(OpenBuildFGDialog()));
    //-----------------------------------------------------------------------

    //изначальное кол-во АРМ
    numelARM = 0;

    //имя 1-го АРМ по умолчанию
    ui->nameARMLineEdit->setText("ARM №" + QString::number(numelARM + 1));

    //минимальная наработка на отказ у ЭВМ
    To_min = 10;

    //оператор

    //кол-во отказов
    numFails = 0;

    //случайное значение для АРМ
    int time = 16200;
    ui->workTimeLineEdit->setText(QString::number(time));
    ui->workRealTimeLineEdit->setText(QString::number(rand()%time));
}

GraphicDialog* buildFunctionGroupDialog::getGD()
{
    return GD;
}

//методы для работы с состоянием инциализации ФГ в КСА
void buildFunctionGroupDialog::setInsalled(bool Installed_)
{
    *Installed = Installed_;
}
bool buildFunctionGroupDialog::getInstalled()
{
    return *Installed;
}

void buildFunctionGroupDialog::OpenBuildFGDialog()
{
    this->show();
    //если до этого окно не окткрывали то поставить по умолчанию имя ФГ
    if (notOpensWindow)
    {
        ui->nameFGLineEdit->setText(FG->getName());
    }
    notOpensWindow = false;
}

//добавление АРМ
void buildFunctionGroupDialog::add_ARM(){

    //условие добаления
    if
            (
             ui->nameARMLineEdit->text().size() > 5 &&
             ui->workTimeLineEdit->text().toInt() >= To_min &&
             ui->workRealTimeLineEdit->text().toInt() < ui->workTimeLineEdit->text().toInt() &&
             ui->workRealTimeLineEdit->text().toInt() >= 0
            )
    {

        //добавление информации об АРМ
        ui->ARMsTextEdit->append(QString::number(numelARM + 1) + ". " +
                ui->nameARMLineEdit->text() + "\n" +
                "    t = " + ui->workRealTimeLineEdit->text() + " ч" + "\n" +
                "    To = " + ui->workTimeLineEdit->text()  + " ч" + "\n");

        //----------создание объекта АРМ и добавление его в функциональную группу------------------------------
        FG->addARM(new ARM(ui->nameARMLineEdit->text(),
                          ui->workTimeLineEdit->text().toDouble(),
                          ui->workRealTimeLineEdit->text().toDouble()
                          ));

        //-----------------------------------------------------------------------------------------------------
        numelARM = FG->getNumARM();

        //очистка полей ввода
        ui->nameARMLineEdit->setText("ARM №" + QString::number(numelARM + 1)); //ui->nameARMLineEdit->clear();

        //поля можно не очищать, если так будет удобнее пользователю
        //ui->workRealTimeLineEdit->clear();
        //ui->workTimeLineEdit->clear();

        //установка нормального фона полей ввода
        ui->nameARMLineEdit->setStyleSheet("background-color: white");
        ui->workRealTimeLineEdit->setStyleSheet("background-color: white");
        ui->workTimeLineEdit->setStyleSheet("background-color: white");

        if (numelARM == 1)
        {
            //разблокирование опций расчета пар-ов надежности ФГ
            ui->optionsTestingGroupBox->setEnabled(true);

            //установка значений по умолчанию
            ui->TimeTestLineEdit->setText("3000");
            ui->numTestLineEdit->setText("10000");

            //разблокирование кнопок редактирования списка АРМ
            ui->updataARMPushButton->setEnabled(true);
            ui->deleteARMPushButton->setEnabled(true);

        }

    }
    else
    {
        //создание и вывод окна об ошибке
        errorInfoDialog* e = new errorInfoDialog;
        QString ErrorText;
        int numError = 0;

        //работа с неккоректно заполнеными полямм (кроме подцвета поля можно будет ред-ть текст ошибки)
        //поле индентификации
        if (ui->nameARMLineEdit->text().size() <= 5)
        {
            numError++;
            ui->nameARMLineEdit->setStyleSheet("background-color: red");
            ErrorText+= "Индитификатор АРМ: слишком короткое имя\n";
        }
        else
        {
            ui->nameARMLineEdit->setStyleSheet("background-color: white");
        }
        //поле наработки на отказ
        if (ui->workTimeLineEdit->text().toInt() < To_min)
        {
            numError++;
            ui->workTimeLineEdit->setStyleSheet("background-color: red");
            ErrorText+= "Наработка на отказ ЭВМ: не должно быть меньше " +
                    QString::number(To_min) + "ч" + "\n";
        }
        else
        {
            ui->workTimeLineEdit->setStyleSheet("background-color: white");
        }
        //поле проработавшего времени
        if (ui->workRealTimeLineEdit->text().toInt() >= ui->workTimeLineEdit->text().toInt())
        {
            numError++;
            ui->workRealTimeLineEdit->setStyleSheet("background-color: red");
            ErrorText+= "Проработавшее время ЭВМ: не должно превышать наработки на отказ";
        }
        else
        {
            ui->workRealTimeLineEdit->setStyleSheet("background-color: white");
        }

        if (numError == 1)
        {
            ErrorText = "Неверно заполнено поле:\n" + ErrorText;
        }
        else
        {
            ErrorText = "Неверно заполнены поля:\n" + ErrorText;
        }

        e->SetTextError(ErrorText);
        e->exec();
    }

}

//слот очистки списка АРМ
void buildFunctionGroupDialog::clearListARM()
{
    ui->ARMsTextEdit->clear();
    FG->clearAllARM();

    numelARM = FG->getNumARM();
    ui->nameARMLineEdit->setText("ARM №" + QString::number(numelARM + 1));

    //блокировка кнопок изменения списка АРМ
    ui->deleteARMPushButton->setEnabled(false);
    ui->updataARMPushButton->setEnabled(false);

    //блокирование опций расчета пар-ов надежности ФГ
    ui->optionsTestingGroupBox->setEnabled(false);
}

//слот редакции списка АРМ
void buildFunctionGroupDialog::editListARM()
{
    updataARM->setARMs(FG->getBoxARM());
    updataARM->exec();
}

//выбор типа оператора
void buildFunctionGroupDialog::editTypeOperator()
{

}

//расчет ВБР функциональной группы на основе ланных всех АРМ-ов
void buildFunctionGroupDialog::calculate()
{
    if (numelARM > 0)
    {
        if (
                ui->TimeTestLineEdit->text().toInt() > 500 &&  //время тестирования
                ui->numTestLineEdit->text().toInt() > 1000 &&  //кол-во тестов
                ui->nameFGLineEdit->text().size() > 3          //размер имени ФГ
           )
        {
            //потом добавить проверку на цифры

            //подцветка всех полей на нормальное состояние
            ui->numTestLineEdit->setStyleSheet("background-color: white");
            ui->TimeTestLineEdit->setStyleSheet("background-color: white");
            ui->nameFGLineEdit->setStyleSheet("background-color: white");

            //------------------------Вся математика по расчету ВБР функциональной группы------------------------------------------

            int u = 5; //процент от интервала времени теста, при котором отказы будут синергировать
            int T = ui->TimeTestLineEdit->text().toDouble(); //интервал времени теста
            int q = T * (double)u/(100 * 3); //СКО в функции Гаусса

            //кол-во тестов для каждого АРМ
            int N = ui->numTestLineEdit->text().toInt(); //кол-во тестов

            FG->setName(ui->nameFGLineEdit->text()); //экспорт имени функциональной группы
            //--------инициализация окна загрузки и установка с ним связи------------
            Loading* ld = new Loading(this);
            //установка связи окна загрузки и окна график
            ld->setDialogOpen(GD);
            ld->setWindowTitle("Тестирование функциональной группы");

            connect(this, SIGNAL(signalLoadingCalculate(int, QString)),
                    ld, SLOT(setProgress(int, QString)));
            //-----------------------------------------------------------------------

            ld->setRangeProgress(100); //установка "объема вычеслений"

            this->hide();
            ld->show();

            ld->activateWindow();
            sendSignalLoadingCal(1, "Моделирование работы АРМ-в");

            //установка времени тестирования во всех АРМ-х и моделирование их работы на этом интервале
            for (int i=0;i<numelARM;i++)
            {
                FG->getARM(i)->setTimeTest(T);
                FG->getARM(i)->simulationWork(N);
            }
            sendSignalLoadingCal(15, "Инициализация отказов");

            //подсчет кол-ва отказов и сохранение времени их происхождения

            //общее кол-во отказов
            for (int i=0;i<numelARM;i++)
            {
                numFails+= FG->getARM(i)->getNumFails();  //инпорт кол-ва отказов очередного АРМ к общему кол-ву
                for (int j=0;j<FG->getARM(i)->getNumFails();j++)
                {
                        FG->setTimeFails(FG->getARM(i)->getTimeFail(j));  //инпорт времен отказов очередного АРМ
                }               
            }
            sendSignalLoadingCal(11, "Расчет среднего кол-ва отказов");

            int size = T;
            m = new double[size];
            //---расчет среднего кол-ва отказов
            for (int i=0;i<T;i++)
            {
                m[i] = 0;
                for (int j=0;j<numFails;j++)
                {
                    m[i]+= (double) 1/(numFails) *(double) exp((double)-pow(i - FG->getTimeFails(j),2)/(2*pow(q,2)));
                }
            }
            sendSignalLoadingCal(16, "Расчет интенсивности отказов");
            //---расчет интенсивности отказов

            //расчет минимальной общей интенсивности отказов у функциональной группы
            double lamda_min = 0; //минимальное значение интенсивности оказов

            double* lamda = new double[T];
            for (int i=0;i<T-1;i++)
            {
                lamda[i] = abs((double) (m[i+1]-m[i])/1); //производная по модулю
                if (lamda[i]<lamda_min)
                {
                    lamda[i] = lamda_min;
                }    
            }
            lamda[T-1] = lamda[T-2];
            sendSignalLoadingCal(14, "Сглаживание значений");

            //сглаживание значений интенсивности отказов
            double* SmoothLamda = new double[T]; //массив для сглаженной интенсивности отказов
            int r = round(T*0.03); //радиус апроксимации точки
            for (int i = 0; i < T; i++) //ВОЗЬМИ СРЕДНЕЕ ОТ ПРОРАБОТАВШЕГО У ВСЕХ АРМ!!!
            {
                if (i <= r)
                {
                    double s = 0;
                    for (int j=0;j<2*r;j++)
                    {
                        s+= lamda[j];
                    }
                    SmoothLamda[i] = (double) s/(2*r);
                }
                if (i > r && i < T - r)
                {
                    double s = 0;
                    for (int j=i-r;j<i+r;j++)
                    {
                        s+= lamda[j];
                    }
                    SmoothLamda[i] = (double) s/(2*r + 1);
                }
                if (i >= T - r)
                {
                    double s = 0;
                    for (int j=T-1;j>T - 2*r;j--)
                    {
                        s+= lamda[j];
                    }
                    SmoothLamda[i] = (double) s/(2*r);
                }  
            }
            sendSignalLoadingCal(12, "Расчет вероятности безотказной работы АРМ");

            //---расчет вероятности безотказной работы функциональной группы

            //расчет среднего времени начала работы
            double timeStart = 0;
            for (int i=0;i<numelARM;i++)
            {
                timeStart+= FG->getARM(i)->getStartWorkTime();
            }
            timeStart = round((double)timeStart/numelARM);
            sendSignalLoadingCal(13, "Синтез функциональной группы");

            double* p = new double[T];
            for (int i=0;i<T;i++)
            {
                p[i] = (double) exp(-(i+timeStart)*SmoothLamda[i]);
            }
            sendSignalLoadingCal(18, "Расчет ВБР для всей ФГ");

            //----------------------------------установка значений функциональной группы-------------------------------------------
            FG->setTimeWork(T);
            FG->setM(m);
            FG->setLamda(SmoothLamda);
            FG->setP(p);
            //---------------------------------------------------------------------------------------------------------------------

            //-----------эекспорт функциональной группы в диалоговое окно графиков-------------------------------------------------
            signalSetGraphic(FG);
            //---------------------------------------------------------------------------------------------------------------------
        }
        else
        {

            //создание и вывод окна об ошибке
            errorInfoDialog *e = new errorInfoDialog;
            QString textError;

            //подцветка полей в зависимости от их корректности
            if (ui->TimeTestLineEdit->text().toInt() < 500)
            {
                ui->TimeTestLineEdit->setStyleSheet("background-color: red");
                textError = "Укажите опции тестирования";
            }
            else
            {
                ui->TimeTestLineEdit->setStyleSheet("background-color: white");
            }

            if (ui->numTestLineEdit->text().toInt() < 1000)
            {
                ui->numTestLineEdit->setStyleSheet("background-color: red");
                if (textError.size() != 0)
                {
                    textError = "Укажите опции тестирования";
                }
            }
            else
            {
                ui->numTestLineEdit->setStyleSheet("background-color: white");
            }

            if (ui->nameFGLineEdit->text().size() < 3)
            {
                ui->nameFGLineEdit->setStyleSheet("background-color: red");
                if (textError.size() == 0)
                {
                    textError = "Укажите имя ФГ";
                }
                else
                {
                    textError+= " и имя ФГ";
                }
            }
            else
            {
                ui->nameFGLineEdit->setStyleSheet("background-color: white");
            }

            textError+= "!";
            e->SetTextError(textError);
            e->exec();
        }

    }
    else
    {
        //создание и вывод окна об ошибке
        errorInfoDialog *e = new errorInfoDialog;
        e->SetTextError("Не добавлено ни одного АРМ!");
        e->exec();
    }

}

//слот обновления списка АРМ
void buildFunctionGroupDialog::setListARM(QVector <QString>* text)
{
    ui->ARMsTextEdit->clear();
    numelARM = text->size();

    for (int i=0;i<numelARM;i++)
    {
        ui->ARMsTextEdit->append(text->at(i));
    }
}

void buildFunctionGroupDialog::setFG(FunctionGroup* FG_)
{
    FG = FG_;
}

FunctionGroup* buildFunctionGroupDialog::getFG()
{
    return FG;
}

void buildFunctionGroupDialog::delay()
{
    QTime dieTime= QTime::currentTime().addMSecs(100);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

void buildFunctionGroupDialog::sendSignalLoadingCal(int values, QString textInformation)
{
    emit signalLoadingCalculate(values, textInformation);
    delay();
}

buildFunctionGroupDialog::~buildFunctionGroupDialog()
{
    delete ui;
}
