#include "multfunction.h"
namespace mp {
MultFunction::MultFunction()
{
    BaseFunction::name = "mult";
    BaseFunction::argNumber = 2;
    BaseFunction::operIndex = 20;
    BaseFunction::oper='*';
}

double MultFunction::evaluate(const double arg[]){
    return arg[0]*arg[1];
}
}
