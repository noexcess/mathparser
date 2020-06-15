#ifndef POWERFUNCTION_H
#define POWERFUNCTION_H

#include "basefunction.h"
namespace mp {

class PowerFunction : public BaseFunction
{
public:
    double evaluate(const double arg[]) override;
    PowerFunction();
};
}

#endif // POWERFUNCTION_H
