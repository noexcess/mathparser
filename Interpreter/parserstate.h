#ifndef PARSERSTATE_H
#define PARSERSTATE_H
#include "parserstate.h"
namespace mp {
class ParserContext;
class ParserState
{


public:
    virtual void handle(char) = 0;
protected:
    ParserContext& context;
    ParserState(ParserContext& t_context):context(t_context){}
};
}
#endif // PARSERSTATE_H
