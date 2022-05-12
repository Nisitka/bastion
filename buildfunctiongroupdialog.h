#ifndef BUILDFUNCTIONGROUPDIALOG_H
#define BUILDFUNCTIONGROUPDIALOG_H

#include <QDialog>

#include "functiongroup.h"

#include "errorinfodialog.h"
#include "graphicdialog.h"
#include "loading.h"
#include "updataarmdialog.h"

namespace Ui {
class buildFunctionGroupDialog;
}

class buildFunctionGroupDialog : public QDialog
{
    Q_OBJECT

public:
    explicit buildFunctionGroupDialog(QWidget *parent = nullptr);

    void setInsalled(bool);
    bool getInstalled();

    void setFG(FunctionGroup*);
    FunctionGroup* getFG();

    GraphicDialog* getGD();

    void delay();
    void sendSignalLoadingCal(int, QString);

    ~buildFunctionGroupDialog();

signals:
    void signalLoadingCalculate(int valueDeltaProgress, QString text);
    void signalSetGraphic(FunctionGroup*);

public slots:
    void OpenBuildFGDialog();
    void setListARM(QVector <QString>*);
protected slots:
    void clearListARM();


private slots:
    void add_ARM();
    void editTypeOperator();
    void calculate();

    void editListARM();

private:
    Ui::buildFunctionGroupDialog *ui;

    //инициализирована ли ФГ в КСА
    bool* Installed;

    //функциональная группа
    FunctionGroup* FG;
    GraphicDialog* GD;
    updataARMDialog* updataARM;

    double* m;

    int numFails;

    int numelARM;
    int To_min;

    bool notOpensWindow;
};

#endif // BUILDFUNCTIONGROUPDIALOG_H
