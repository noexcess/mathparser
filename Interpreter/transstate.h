#ifndef TRANSSTATE_H
#define TRANSSTATE_H
#include"parserstate.h"
namespace mp {
class TransState : public ParserState
{
public:
    TransState();
    virtual void handle();
};

}

#endif // TRANSSTATE_H
