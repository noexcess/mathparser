#include "basefunction.h"
namespace mp {
int BaseFunction::getOperIndex() const
{
    return this->operIndex;
}

BaseFunction::BaseFunction()
{

}

int BaseFunction::getArgNumber()const {
    return this->argNumber;
}

const std::string & BaseFunction::getName() const{
    return this->name;
}
char BaseFunction::getOperator() const{
    return this->oper;
}
}


