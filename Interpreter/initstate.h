#ifndef INITSTATE_H
#define INITSTATE_H
#include "parserstate.h"
namespace mp {
class ParserContext;
class InitState : public ParserState
{
public:
    void handle(char);
    InitState(ParserContext& t_context);
};
}


#endif // INITSTATE_H
