#include "ksagraphicdialog.h"
#include "ui_ksagraphicdialog.h"

KSAGraphicDialog::KSAGraphicDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::KSAGraphicDialog)
{
    ui->setupUi(this);

    this->setWindowTitle("Результаты оценки функциональной надежности КСА");
    setWindowIcon(QIcon(":/logo.jpeg"));
    this->setFixedSize(830, 450);
}

void KSAGraphicDialog::importValues(double* P, int timeTest)
{
    numPoint = timeTest;

    //заполнение вектора значениями времени и сред. кол-ва отказов
    for (int i=0; i<numPoint; i++)
    {
        xPksa.append(i);
        yPksa.append(P[i]);
    }

    //установка размеров графика
    ui->PksaGraphic->xAxis->setRange(0, numPoint);
    ui->PksaGraphic->yAxis->setRange(0, 1.1);

    ui->PksaGraphic->addGraph();
    ui->PksaGraphic->graph(0)->setData(xPksa, yPksa);
}

KSAGraphicDialog::~KSAGraphicDialog()
{
    delete ui;
}
