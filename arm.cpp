#include "arm.h"
#include <QDebug>
#include <cmath>

ARM::ARM()
{

}

ARM::ARM(QString name_, double To_, double StartWorkTime_)
{
    name = name_;
    To = To_;
    StartWorkTime = StartWorkTime_;

}

QString ARM::getName()
{
    return name;
}

void ARM::setName(QString name_)
{
    name = name_;
}

double ARM::getTo()
{
    return To;
}

void ARM::setTo(double To_)
{
    To = To_;
}

double ARM::getStartWorkTime()
{
    return StartWorkTime;
}

void ARM::setStartWorkTime(double StartWorkTime_)
{
    StartWorkTime = StartWorkTime_;
}

void ARM::simulationWork(int numTest)
{
    //расчет времени отказа
    for (int k = 0;k<numTest;k++)
    {
        long int i = StartWorkTime;
        while (i < (StartWorkTime + testTime))
        {
            if ((long double)1/rand() > (long double) exp(-(long double)i/To))
            {
                failTimes.append(i - StartWorkTime);
                i = StartWorkTime + testTime;
            }
            i++;
        }
    }
}

int ARM::getNumFails()
{
    return failTimes.size();
};

void ARM::setTimeTest(double testTime_)
{
    testTime = testTime_;
}

double ARM::getTimeFail(int key)
{
    return failTimes.at(key);
}
