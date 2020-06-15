#ifndef COEFFUNCTION_H
#define COEFFUNCTION_H
#include "basefunction.h"
namespace mp {
class CoefFunction : public BaseFunction
{
public:
    double evaluate(const double arg[]);
    CoefFunction();
};

}

#endif // COEFFUNCTION_H
