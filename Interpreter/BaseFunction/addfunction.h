#ifndef ADDFUNCTION_H
#define ADDFUNCTION_H
#include "basefunction.h"
namespace mp {
class AddFunction : public BaseFunction
{
public:
    double evaluate(const double arg[]) override;
    AddFunction();
};
}

#endif // ADDFUNCTION_H
