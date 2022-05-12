#include "ksa.h"

KSA::KSA()
{

}

void KSA::addFG(FunctionGroup* FG_)
{
    FGs.append(FG_);
}

FunctionGroup* KSA::getFG(int key)
{
    return FGs.at(key);
}
