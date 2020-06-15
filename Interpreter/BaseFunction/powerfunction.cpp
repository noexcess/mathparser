#include "powerfunction.h"
#include "cmath"
namespace mp {
PowerFunction::PowerFunction()
{
    BaseFunction::name = "pow";
    BaseFunction::argNumber = 2;
    BaseFunction::oper = '^';
    BaseFunction::operIndex = 30;
}
double PowerFunction::evaluate(const double arg[]){
    return std::pow(arg[0],arg[1]);
}
}

