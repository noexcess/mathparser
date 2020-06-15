#ifndef MULTFUNCTION_H
#define MULTFUNCTION_H

#include "basefunction.h"
namespace mp {
class MultFunction : public BaseFunction
{
public:
    double evaluate(const double arg[]) override;
    MultFunction();
};
}


#endif // MULTFUNCTION_H
