#ifndef COSFUNCTION_H
#define COSFUNCTION_H
#include "basefunction.h"
namespace mp {
class CosFunction : public BaseFunction
{

public:
    double evaluate(const double arg[]) override;
    CosFunction();
};

}

#endif // COSFUNCTION_H
