#ifndef IMPORTANCEFGDIALOG_H
#define IMPORTANCEFGDIALOG_H

#include <QDialog>
#include <QLineEdit>
#include <QLabel>
#include <QSlider>

#include "ksa.h"

namespace Ui {
class ImportanceFGdialog;
}

class ImportanceFGdialog : public QDialog
{
    Q_OBJECT

public:
    explicit ImportanceFGdialog(QWidget *parent = nullptr);

    ~ImportanceFGdialog();

signals:

protected slots:
    void setKSA(KSA*);

private slots:
    void setChangeSliders(int);
    void clickResetValue();
    void setValueImportanceFG();

private:
    KSA* ksa;

    QVector <QLineEdit*> ValueLineEdit;
    QVector <QLabel*> NameLabel;
    QVector <QSlider*> Sliders;

    Ui::ImportanceFGdialog *ui;
};

#endif // IMPORTANCEFGDIALOG_H
