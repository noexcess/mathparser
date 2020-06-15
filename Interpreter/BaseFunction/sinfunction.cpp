#include "sinfunction.h"
#include "cmath"
namespace mp {
SinFunction::SinFunction()
{
    BaseFunction::name = "sin";
    BaseFunction::argNumber = 1;
}
double SinFunction::evaluate(const double arg[]){

    return std::sin(*arg);
}
}
