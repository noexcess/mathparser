#include "functionmap.h"
#include "BaseFunction/cosfunction.h"
#include "BaseFunction/sinfunction.h"
#include "BaseFunction/addfunction.h"
#include "BaseFunction/multfunction.h"
#include "BaseFunction/divfunction.h"
#include "BaseFunction/powerfunction.h"
#include "BaseFunction/bracketsfunction.h"
#include "BaseFunction/coeffunction.h"
namespace mp {
FunctionMap::FunctionMap()
{
    addFunction(std::make_shared<CosFunction>());
    addFunction(std::make_shared<SinFunction>());
    addFunction(std::make_shared<MultFunction>());
    addFunction(std::make_shared<DivFunction>());
    addFunction(std::make_shared<AddFunction>());
    addFunction(std::make_shared<PowerFunction>());
    addFunction(std::make_shared<BracketsFunction>());
    addFunction(std::make_shared<CoefFunction>());
}
std::shared_ptr<BaseFunction>& FunctionMap::getByName(const std::string& name)
{
    auto bf = mapByName.find(name);
    if(bf != mapByName.end()) {
        return bf->second;
    }
    else{
        throw "Not Found";
    }

}

std::shared_ptr<BaseFunction>& FunctionMap::getByOperator(char oper)
{
    auto bf = mapByOperator.find(oper);
    if(bf != mapByOperator.end()) {
        return bf->second;
    }
    else{
        throw "Not Found";
    }
}
void FunctionMap::addFunction(std::shared_ptr<BaseFunction> func){
    if (!func->getName().empty()){
        this->mapByName.insert({func->getName(),func});
    }
    if (func->getOperator()){
        this->mapByOperator.insert({func->getOperator(),func});
    }
}

}

