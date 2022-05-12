#ifndef KSA_H
#define KSA_H

#include <QVector>

#include "functiongroup.h"

class KSA
{
public:
    KSA();

    void addFG(FunctionGroup*);
    FunctionGroup* getFG(int);

private:
    const int numelFG = 8;
    QVector <FunctionGroup*> FGs;

};

#endif // KSA_H
