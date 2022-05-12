#include "updataarmdialog.h"
#include "ui_updataarmdialog.h"

#include "donutbreakdownchart.h"

updataARMDialog::updataARMDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::updataARMDialog)
{
    ui->setupUi(this);

    ui->backARMpushButton->setEnabled(false);

    keyARM = 0;
}

void updataARMDialog::setARMs(QVector<ARM*>* ARMbox)
{
    pARMorig = ARMbox;

    //очистка от предыдущих диаграмм
    for (int i=0;i<numARM;i++)  //ui->stackedDiagram->count()
    {
        ui->stackedDiagram->removeWidget(DiagramWidgets.at(i));
    }

    ui->upDataARMButton->setEnabled(false);

    numARM = ARMbox->size();    //инициализация кол-ва АРМ

    ARMs.clear();               //очистка массива с АРМ-ми от пред. раза
    DiagramBox.clear();         //очистка массива с диаграммами от пред. раза
    DiagramWidgets.clear();
    DiagramLayout.clear();

    for (int i=0;i<numARM;i++)
    {
        ARMs.append(ARMbox->at(i));   //добавление АРМ в массив

        //-------------------------инициализация диаграмм и добавление их в массив--------------------------------------
        QPieSeries *series1 = new QPieSeries();
        series1->setName("");
        series1->append("Оставшийся тех. ресурс", ARMs.at(i)->getTo() - ARMs.at(i)->getStartWorkTime());

        QPieSeries *series2 = new QPieSeries();
        series2->setName("");
        series2->append("Проработавшее время", ARMs.at(i)->getStartWorkTime());

        DonutBreakdownChart *donutBreakdown = new DonutBreakdownChart();
        donutBreakdown->setAnimationOptions(QChart::AllAnimations);
        donutBreakdown->setTitle("Технический ресурс АРМ");
    //    donutBreakdown->legend()->setAlignment(Qt::AlignRight);
        donutBreakdown->addBreakdownSeries(series1, Qt::darkGreen);
        donutBreakdown->addBreakdownSeries(series2, Qt::red);

        DiagramBox.append(new QChartView(donutBreakdown));
        DiagramBox.at(i)->setRenderHint(QPainter::Antialiasing);
        //-------------------------------------------------------------------------------------------------------------

        DiagramWidgets.append(new QWidget);
        DiagramLayout.append(new QVBoxLayout(DiagramWidgets.at(i)));
        DiagramLayout.at(i)->addWidget(DiagramBox.at(i));

        ui->stackedDiagram->addWidget(DiagramWidgets.at(i));

    }

    if (numARM == 1)
    {
        ui->nextARMpushButton->setEnabled(false);
    }
    else
    {
        if (keyARM == numARM - 1)
        {
            ui->nextARMpushButton->setEnabled(false);
        }
        else
        {
            ui->nextARMpushButton->setEnabled(true);
        }
    }

    ui->stackedDiagram->setCurrentIndex(keyARM + 2); //так как там еще 2 по умолчанию

    //установка первоначальных значений
    ui->nameARMLineEdit->setText(ARMs.at(keyARM)->getName());
    ui->T_ARMLineEdit->setText(QString::number(ARMs.at(keyARM)->getTo()));
    ui->timeWorkARMLineEdit->setText(QString::number(ARMs.at(keyARM)->getStartWorkTime()));

    if (numARM > 1)
    {
        ui->label->setText(QString::number(keyARM + 1) + "-е АРМ из " +
                           QString::number(numARM) + "  "
                           );
    }
    else
    {
        ui->label->clear();
    }

}

void updataARMDialog::setARMs()
{
    numARM = ARMs.size(); //инициализация кол-ва АРМ

    //очистка от предыдущих диаграмм
    for (int i=0;i<numARM;i++) //ui->stackedDiagram->count()
    {
        ui->stackedDiagram->removeWidget(DiagramWidgets.at(i));
    }

    //если после удаления элемент стал крайним, то заблокировать кнопку след. АРМ
    if (keyARM == numARM - 1)
    {
        ui->nextARMpushButton->setEnabled(false);
    }

    ui->upDataARMButton->setEnabled(false);         

    DiagramBox.clear();         //очистка массива с диаграммами от пред. раза
    DiagramWidgets.clear();
    DiagramLayout.clear();

    for (int i=0;i<numARM;i++)
    {
        //-------------------------инициализация диаграмм и добавление их в массив--------------------------------------
        QPieSeries *series1 = new QPieSeries();
        series1->setName("");
        series1->append("Оставшийся тех. ресурс", ARMs.at(i)->getTo() - ARMs.at(i)->getStartWorkTime());

        QPieSeries *series2 = new QPieSeries();
        series2->setName("");
        series2->append("Проработавшее время", ARMs.at(i)->getStartWorkTime());

        DonutBreakdownChart *donutBreakdown = new DonutBreakdownChart();
        donutBreakdown->setAnimationOptions(QChart::AllAnimations);
        donutBreakdown->setTitle("Технический ресурс АРМ");
    //    donutBreakdown->legend()->setAlignment(Qt::AlignRight);
        donutBreakdown->addBreakdownSeries(series1, Qt::darkGreen);
        donutBreakdown->addBreakdownSeries(series2, Qt::red);

        DiagramBox.append(new QChartView(donutBreakdown));
        DiagramBox.at(i)->setRenderHint(QPainter::Antialiasing);
        //-------------------------------------------------------------------------------------------------------------

        DiagramWidgets.append(new QWidget);
        DiagramLayout.append(new QVBoxLayout(DiagramWidgets.at(i)));
        DiagramLayout.at(i)->addWidget(DiagramBox.at(i));

        ui->stackedDiagram->addWidget(DiagramWidgets.at(i));
    }

    if (numARM == 1)
    {
        ui->nextARMpushButton->setEnabled(false);
        ui->backARMpushButton->setEnabled(false);
    }
//    else
//    {
//        ui->nextARMpushButton->setEnabled(true);
//    }

    ui->stackedDiagram->setCurrentIndex(keyARM + 2); //так как там еще 2 по умолчанию

    //установка первоначальных значений
    ui->nameARMLineEdit->setText(ARMs.at(keyARM)->getName());
    ui->T_ARMLineEdit->setText(QString::number(ARMs.at(keyARM)->getTo()));
    ui->timeWorkARMLineEdit->setText(QString::number(ARMs.at(keyARM)->getStartWorkTime()));

    //если АРМ один, то не показывать какое из скольки выбрано
    if (numARM > 1)
    {
        ui->label->setText(QString::number(keyARM + 1) + "-е АРМ из " +
                           QString::number(numARM) + "  "
                           );
    }
    else
    {
        ui->label->clear();
    }
}

void updataARMDialog::nextARM()
{
    ui->upDataARMButton->setEnabled(false);
    ui->backARMpushButton->setEnabled(true);
    keyARM++;

    setARMs();

    //если достигли последнего элемента, то заблокировать кнопку на след. АРМ
    if (keyARM == numARM - 1)
    {
        ui->nextARMpushButton->setEnabled(false);
    }

    ui->stackedDiagram->setCurrentIndex(keyARM + 2); //так как там еще 2 по умолчанию
}

void updataARMDialog::backARM()
{
    ui->upDataARMButton->setEnabled(false);
    ui->nextARMpushButton->setEnabled(true);
    keyARM--;

    setARMs();

    if (keyARM == 0)
    {
        ui->backARMpushButton->setEnabled(false);
    }

    ui->stackedDiagram->setCurrentIndex(keyARM + 2); //так как там еще 2 по умолчанию
}

void updataARMDialog::editARMtext(QString text)
{
    ui->upDataARMButton->setEnabled(true);

}

void updataARMDialog::editARMbutton()
{
    ui->upDataARMButton->setEnabled(false);

    //изменение пар-ов АРМ
    ARMs.at(keyARM)->setName(ui->nameARMLineEdit->text());
    ARMs.at(keyARM)->setTo(ui->T_ARMLineEdit->text().toDouble());
    ARMs.at(keyARM)->setStartWorkTime(ui->timeWorkARMLineEdit->text().toDouble());

    setARMs();
}

void updataARMDialog::closeEditARMbutton()
{
    buildListARM();
    this->close();
    emit ListARMtext(&textListARM);
}

void updataARMDialog::buildListARM()
{
    numARM = ARMs.size();
    textListARM.clear();

    for (int i=0;i<numARM;i++)
    {
        textListARM.append(QString::number(i + 1) + ". " +
                           ARMs.at(i)->getName() + "\n" +
                           "    t = " + QString::number(ARMs.at(i)->getStartWorkTime()) + " ч" + "\n" +
                           "    To = " + QString::number(ARMs.at(i)->getTo())  + " ч" + "\n");
    }
}

void updataARMDialog::deleteARMbutton()
{
    if (numARM == 1)
    {
        emit clearListARMsignal();
        this->close();
    }
    else
    {
        //удаляем диаграмму
        ui->stackedDiagram->removeWidget(DiagramWidgets.at(keyARM));
        DiagramWidgets.remove(keyARM);

        //удаляем АРМ из вспомогательного массива и оригинального
        ARMs.remove(keyARM);
        pARMorig->remove(keyARM);

        //спускаемся на олин элемент, если сечас смотрим последний
        if (keyARM == numARM - 1)
        {
            keyARM--;
        }

        numARM = ARMs.size(); //numARM--;
        setARMs();
    }
}

updataARMDialog::~updataARMDialog()
{
    delete ui;
}
