#ifndef GRAPHICDIALOG_H
#define GRAPHICDIALOG_H

#include <QDialog>

#include "qcustomplot.h"
#include "functiongroup.h"

namespace Ui {
class GraphicDialog;
}

class GraphicDialog : public QDialog
{
    Q_OBJECT

public:
    explicit GraphicDialog(QWidget *parent = nullptr);

    ~GraphicDialog();
signals:
    void InstallFG_signal();
    void OpenBuldFGDialog_signal();

public slots:
    void exportCalValues(FunctionGroup*);

private slots:
    void add_FG();     //инициализировать ФГ в КСА
    void atFirstFG();  //инициализировать ФГ по новой

private:
    Ui::GraphicDialog *ui;

    int numFails;

    //параметры графика
    int numPoint;

    QVector <double> xMFails, yMFails;
    QVector <double> xLamda, yLamda;
    QVector <double> xP, yP;

    int Xmax;
};

#endif // GRAPHICDIALOG_H
