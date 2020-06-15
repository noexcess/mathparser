#ifndef BRACKETSFUNCTION_H
#define BRACKETSFUNCTION_H
#include "basefunction.h"
namespace mp {
class BracketsFunction : public BaseFunction
{
public:
    double evaluate(const double arg[]) override;
    BracketsFunction();
};
}


#endif // BRACKETSFUNCTION_H
