#include "menu.h"

#include <QApplication>
#include <QSplashScreen>

//#include <QtWidgets/QApplication>
//#include <QtWidgets/QMainWindow>
//#include <QtWidgets/QStatusBar>
//#include <QtCharts/QChartView>
//#include <QtCharts/QChart>
//#include <QtCharts/QPieSeries>
//#include "donutbreakdownchart.h"

//QT_CHARTS_USE_NAMESPACE

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QSplashScreen* sp = new QSplashScreen;

    QString Dir = ":/fon2.jpg";
    sp->setPixmap(QPixmap(Dir));
    sp->show();

    Menu WindowMenu;
    WindowMenu.setWindowTitle("Concurent Betta v1.0");

    WindowMenu.show();

    delete sp; //экран загрузки

    return app.exec();
}
