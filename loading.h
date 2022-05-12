#ifndef LOADING_H
#define LOADING_H

#include <QDialog>

#include <QTimer>
#include <QTime>

#include "graphicdialog.h"
#include "ksagraphicdialog.h"

namespace Ui {
class Loading;
}

class Loading : public QDialog
{
    Q_OBJECT

public:
    explicit Loading(QWidget *parent = nullptr);

    void setRangeProgress(int Range);
    void setDialogOpen(QDialog*);

    ~Loading();
signals:
    void signalOpenGD();

public slots:
    void setProgress(int valueProgress, QString textInformation);

private slots:
    void clickFinishButton();

private:
    Ui::Loading *ui;

    QDialog* nextDialog;

    int RangeProgress;
    int progress;

};

#endif // LOADING_H
