#ifndef BUILDKSA_H
#define BUILDKSA_H

#include <QDialog>

#include "ksa.h"
#include "buildfunctiongroupdialog.h"
#include "importancefgdialog.h"
#include "graphicdialog.h"
#include "loading.h"
#include "ksagraphicdialog.h"

namespace Ui {
class buildKSA;
}

class buildKSA : public QDialog
{
    Q_OBJECT

public:
    explicit buildKSA(QWidget *parent = nullptr);

    ~buildKSA();
signals:
    void signalLoadingCalculate(int, QString);
    void signalExportValGraphic(double*, int);
    void exportKSA(KSA*);

public slots:
    void installFG();


private slots:
    void buildFunctionGroupPushButton();
    void openImportaceFGdialog();
    void analysisKSAPushButton();

private:
    Ui::buildKSA *ui;

    const int numMaxFunctionGroup = 12;
    int numInstallFunctionGroup;  //номер ФГ, с которой ведется работа

    int keyFG;

    QVector <buildFunctionGroupDialog*> bFGd_box;

    double* Pksa;
    int TimeWork_min; //время тестирования

    KSA* Bastion;

    KSAGraphicDialog* GraphicD; //окно с итоговыи графиком

    void sendSignalLoadingCal(int, QString);

    ImportanceFGdialog* ImpFGdialog;

};



#endif // BUILDKSA_H
