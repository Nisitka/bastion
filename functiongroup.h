#ifndef FUNCTIONGROUP_H
#define FUNCTIONGROUP_H

#include <QVector>
#include <QMetaType>
#include "arm.h"

class FunctionGroup
{
public:
    FunctionGroup();

    void addARM(ARM*);
    ARM* getARM(int);

    QVector <ARM*>* getBoxARM();

    void setName(QString);
    QString getName();

    void setTimeFails(double);
    double getTimeFails(int);

    void setTimeWork(int);
    int getTimeWork();

    void setM(double*);
    double* getM();

    void setLamda(double*);
    double* getLamda();

    void setP(double*);
    double* getP();

    int getNumFails();

    int getNumARM();

    void clearAllARM();
    void clearARM(int);

    void setImportance(int);
    int getImportance();

private:
    QString name;

    QVector <ARM*> ARMs;
    int numARM;   //кол-во АРМ
    int TimeWork; //время работы
    QVector <double> timeFails;  //вектор с временами ошибок

    double* M;        //указатель на массив со средним кол-ом отказов функциональной группы
    double* Lamda;    //указатель на массив с интенсивностью отказов функциональной группы
    double* P;        //указатель на массив с ВБР функциональной группы

    int Importance;
};

#endif // FUNCTIONGROUP_H
