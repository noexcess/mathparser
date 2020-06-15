#include "bracketsfunction.h"
namespace mp {
BracketsFunction::BracketsFunction()
{
    BaseFunction::name = "()";
    BaseFunction::argNumber=1;
}
double BracketsFunction::evaluate(const double arg[]){
    return *arg;
}
}

