#include "graphicdialog.h"
#include "ui_graphicdialog.h"

#include "maxValue.h"

GraphicDialog::GraphicDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GraphicDialog)
{
    ui->setupUi(this);

    ui->numFailsLineEdit->setReadOnly(true);

    this->setWindowTitle("Результаты рассчетов");
    setWindowIcon(QIcon(":/logo.jpeg"));
    this->setFixedSize(1400, 800);

    numPoint = 1;
}

//слот эекспорта значений графиков и их реализация
void GraphicDialog::exportCalValues(FunctionGroup* FG)
{
    numPoint = FG->getTimeWork();

    //------заполнение вектора значениями времени и сред. кол-ва отказов----
    for (int i=0; i<numPoint; i++)
    {
        xMFails.append(i);
        yMFails.append(FG->getM()[i]);
    }

    ui->MFailsGraphic->xAxis->setRange(0, numPoint);
    ui->MFailsGraphic->yAxis->setRange(0, maxValue(&yMFails));

    ui->MFailsGraphic->addGraph();
    ui->MFailsGraphic->graph(0)->setData(xMFails, yMFails);
    //----------------------------------------------------------------------

    //------заполнение вектора значениями времени и сред. кол-ва отказов----
    for (int i=0; i<numPoint; i++)
    {
        xLamda.append(i);
        yLamda.append(FG->getLamda()[i]);
    }

    ui->LamdaGraphic->xAxis->setRange(0, numPoint);
    ui->LamdaGraphic->yAxis->setRange(0, maxValue(&yLamda));

    ui->LamdaGraphic->addGraph();
    ui->LamdaGraphic->graph(0)->setData(xLamda, yLamda);
    //----------------------------------------------------------------------

    //-------------------заполнение вектора значениями ВБР------------------
    for (int i=0; i<numPoint; i++)
    {
        xP.append(i);
        yP.append(FG->getP()[i]);
    }

    ui->PGraphic->xAxis->setRange(0, numPoint);
    ui->PGraphic->yAxis->setRange(-0.05, 1.1);

    ui->PGraphic->addGraph();
    ui->PGraphic->graph(0)->setData(xP, yP);
    //----------------------------------------------------------------------

    ui->numFailsLineEdit->setText(QString::number(FG->getNumFails()));
}

void  GraphicDialog::add_FG()
{
    this->accept();
    InstallFG_signal();
}

void  GraphicDialog::atFirstFG()
{
    this->accept();
    OpenBuldFGDialog_signal();
}

GraphicDialog::~GraphicDialog()
{
    delete ui;
}
