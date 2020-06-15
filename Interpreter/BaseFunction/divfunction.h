#ifndef DIVFUNCTION_H
#define DIVFUNCTION_H

#include "basefunction.h"
namespace mp {
class DivFunction : public BaseFunction
{
public:
    double evaluate(const double arg[]) override;
    DivFunction();
};
}


#endif // MULTFUNCTION_H
