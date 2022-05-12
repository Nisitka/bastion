#ifndef ERRORINFODIALOG_H
#define ERRORINFODIALOG_H

#include <QDialog>

namespace Ui {
class errorInfoDialog;
}

class errorInfoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit errorInfoDialog(QWidget *parent = nullptr);

    void SetTextError(QString);

    ~errorInfoDialog();

private:
    Ui::errorInfoDialog *ui;
    QString TextError;
};

#endif // ERRORINFODIALOG_H
