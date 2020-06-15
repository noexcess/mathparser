#ifndef COEFSTATE_H
#define COEFSTATE_H
#include "parserstate.h"
#include <string>
#include <memory>
namespace mp {
class BaseFunction;
class CoefState : public ParserState
{
    int decimal=0;
    std::shared_ptr<BaseFunction> coefFunction;
public:
    std::string funcName;
    CoefState(ParserContext&);
    void handle(char);
};
}


#endif // COEFSTATE_H
