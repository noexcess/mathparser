#include "addfunction.h"
namespace mp {
AddFunction::AddFunction()
{
    BaseFunction::name = "add";
    BaseFunction::argNumber = 2;
    BaseFunction::oper='+';
    BaseFunction::operIndex = 10;

}
double AddFunction::evaluate(const double arg[]){

    return arg[0]+arg[1];
}
}
