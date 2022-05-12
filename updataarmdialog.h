#ifndef UPDATAARMDIALOG_H
#define UPDATAARMDIALOG_H

#include <QDialog>
#include <QVBoxLayout>

#include "functiongroup.h"

#include <QtWidgets/QStatusBar>
#include <QtCharts/QChartView>
#include <QtCharts/QChart>
#include <QtCharts/QPieSeries>

QT_CHARTS_USE_NAMESPACE

namespace Ui {
class updataARMDialog;
}

class updataARMDialog : public QDialog
{
    Q_OBJECT

public:
    explicit updataARMDialog(QWidget *parent = nullptr);

    void setARMs(QVector <ARM*>*);
    void setARMs();

    ~updataARMDialog();
signals:
    void ListARMtext(QVector <QString>*);
    void clearListARMsignal();

private slots:
    void nextARM();
    void backARM();

    void deleteARMbutton();
    void editARMtext(QString);
    void editARMbutton();
    void closeEditARMbutton();

private:
    int keyARM;
    int numARM;

    void buildListARM();

    QVector <QChartView*> DiagramBox;
    QVector <QWidget*> DiagramWidgets;
    QVector <QVBoxLayout*> DiagramLayout;

    QVector <QString> textListARM;

    QVector <ARM*>* pARMorig;
    QVector <ARM*> ARMs;

    Ui::updataARMDialog *ui;
};

#endif // UPDATAARMDIALOG_H
