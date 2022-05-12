#ifndef MENU_H
#define MENU_H

#include <QMainWindow>
#include <QPixmap>
#include <QWidget>
#include <QLabel>

#include "autorisatedialog.h"
#include "buildksa.h"


QT_BEGIN_NAMESPACE
namespace Ui { class Menu; }
QT_END_NAMESPACE

class Menu : public QMainWindow
{
    Q_OBJECT

public:
    Menu(QWidget *parent = nullptr);

    void resizeEvent(QResizeEvent *evt);

    QPushButton* getDirSelectionKSApushButton();

    ~Menu();

private slots:
    void autorisate();
    void OpenBuidKSA();

private:
    Ui::Menu *ui;
    QLabel *statusBarLabel;

    QPushButton* DirSelectionKSApushButton;
};
#endif // MENU_H
