#ifndef AUTORISATEDIALOG_H
#define AUTORISATEDIALOG_H

#include <QDialog>

namespace Ui {class AutorisateDialog;}

class AutorisateDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AutorisateDialog(QWidget *parent = nullptr);

    void setDirSelectionKSApushButton(QPushButton*);

    ~AutorisateDialog();

private slots:
    void Login();

private:
    Ui::AutorisateDialog *ui;

    QPushButton* DirSelectionKSApushButton;
};

#endif // AUTORISATEDIALOG_H
