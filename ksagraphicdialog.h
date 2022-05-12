#ifndef KSAGRAPHICDIALOG_H
#define KSAGRAPHICDIALOG_H

#include <QDialog>

namespace Ui {
class KSAGraphicDialog;
}

class KSAGraphicDialog : public QDialog
{
    Q_OBJECT

public:
    explicit KSAGraphicDialog(QWidget *parent = nullptr);

    ~KSAGraphicDialog();

public slots:
    void importValues(double* P, int timeTest);

private:
    Ui::KSAGraphicDialog *ui;

    int numPoint;
    QVector <double> xPksa;
    QVector <double> yPksa;
};

#endif // KSAGRAPHICDIALOG_H
