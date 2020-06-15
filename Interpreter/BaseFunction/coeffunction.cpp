#include "coeffunction.h"
namespace mp {
CoefFunction::CoefFunction()
{
    BaseFunction::name = "coef";
    BaseFunction::argNumber = 0;
}
double CoefFunction::evaluate(const double arg[]){

    return 1;
}

}
