#ifndef FUNCTIONHASHMAP_H
#define FUNCTIONHASHMAP_H
#include "BaseFunction/basefunction.h"
#include <unordered_map>
#include <string>
#include <memory>
namespace mp {
class FunctionMap
{
std::unordered_map<std::string,std::shared_ptr<BaseFunction>> mapByName;
std::unordered_map<char,std::shared_ptr<BaseFunction>> mapByOperator;
public:
    FunctionMap();
    std::shared_ptr<BaseFunction>& getByName(const std::string&);
    std::shared_ptr<BaseFunction>& getByOperator(char);
    void addFunction(std::shared_ptr<BaseFunction>);
};
}


#endif // FUNCTIONHASHMAP_H
