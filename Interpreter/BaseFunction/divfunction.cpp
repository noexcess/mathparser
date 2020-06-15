#include "divfunction.h"
namespace mp {
DivFunction::DivFunction()
{
    BaseFunction::name = "mult";
    BaseFunction::argNumber = 2;
    BaseFunction::operIndex = 20;
    BaseFunction::oper='/';
}

double DivFunction::evaluate(const double arg[]){
    return arg[0]/arg[1];
}
}
