#ifndef SINFUNCTION_H
#define SINFUNCTION_H
#include "basefunction.h"
namespace mp {
class SinFunction : public BaseFunction
{
public:

    double evaluate(const double arg[]) override;
    SinFunction();
};
}


#endif // SINFUNCTION_H
