#include "cosfunction.h"
#include <cmath>
namespace mp {
CosFunction::CosFunction()
{
    BaseFunction::name = "cos";
    BaseFunction::argNumber = 1;
}
double CosFunction::evaluate(const double arg[]){

    return std::cos(*arg);
}
}

