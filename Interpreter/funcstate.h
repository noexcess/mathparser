#ifndef FUNCSTATE_H
#define FUNCSTATE_H
#include "parserstate.h"
#include "string"
namespace mp {
class ParserContext;
class FuncState : public ParserState
{
public:
    std::string funcName;
    FuncState(ParserContext&);
    virtual void handle(char);
};
}


#endif // FUNCSTATE_H
