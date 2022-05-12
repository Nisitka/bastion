#include "functiongroup.h"

FunctionGroup::FunctionGroup()
{
    numARM = 0;
}

void FunctionGroup::addARM(ARM* newARM){
    numARM++;
    ARMs.append(newARM);
}

ARM* FunctionGroup::getARM(int key)
{
    return ARMs.at(key);
}

QVector <ARM*>* FunctionGroup::getBoxARM()
{
    return &ARMs;
}

void FunctionGroup::setName(QString name_)
{
    name = name_;
}

QString FunctionGroup::getName()
{
    return name;
}

int FunctionGroup::getNumFails()
{
    return timeFails.size();
}

int FunctionGroup::getNumARM()
{
    return ARMs.size();
}

void FunctionGroup::clearAllARM()
{
    ARMs.clear();
}

double FunctionGroup::getTimeFails(int key)
{
    return timeFails.at(key);
}

void FunctionGroup::setTimeFails(double time)
{
    timeFails.append(time);
}

void FunctionGroup::setTimeWork(int TimeWork_)
{
    TimeWork = TimeWork_;
}

int FunctionGroup::getTimeWork()
{
    return TimeWork;
}

void FunctionGroup::setM(double *M_)
{
    M = M_;
}

double* FunctionGroup::getM()
{
    return M;
}

void FunctionGroup::setLamda(double *Lamda_)
{
    Lamda = Lamda_;
}

double* FunctionGroup::getLamda()
{
    return Lamda;
}

void FunctionGroup::setP(double *P_)
{
    P = P_;
}

void FunctionGroup::setImportance(int Importance_)
{
    Importance = Importance_;
}

int FunctionGroup::getImportance()
{
    return Importance;
}

double* FunctionGroup::getP()
{
    return P;
}

//Q_DECLARE_METATYPE(FunctionGroup*);
