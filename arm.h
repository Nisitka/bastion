#ifndef ARM_H
#define ARM_H

#include <QString>
#include <QVector>

class ARM
{
public:
    ARM();
    ARM(QString, double, double); //индетификатор,время наработка на отказ, время начало работы, время тестирования

    QString getName();
    void setName(QString);

    double getTimeFail(int);
    void setTimeTest(double);

    double getStartWorkTime();
    void setStartWorkTime(double);

    double getTo();
    void setTo(double);

    int getNumFails();

    void simulationWork(int numTest);

private:
    QString name;
    double To;                   //время наработки на отказ
    double StartWorkTime;        //время начала тестирования (работы)
    double testTime;             //время тестирования АРМ

    QVector <double> failTimes;  //время отказа

};

#endif // ARM_H
