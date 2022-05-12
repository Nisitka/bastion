#ifndef MAXVALUE_H
#define MAXVALUE_H

#include <QVector>

double maxValue(QVector <double>* box){
    double max = 0;
    for (int i=0;i<box->size();i++)
    {
        if (box->at(i) > max)
        {
            max = box->at(i);
        }
    }

    return max;
}

#endif // MAXVALUE_H
