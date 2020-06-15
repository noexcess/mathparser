#include "initstate.h"
#include "parsercontext.h"
#include <memory>
namespace mp {
InitState::InitState(ParserContext& context):ParserState(context){}

void InitState::handle(char it)
{
    if (isdigit(it)) {
        context.changeState(context.coefState);
        context.cursor->coef *= (it - '0');

    } else if (isalpha(it)) {
        context.changeState(context.functState);
        context.functState.funcName = it;
    } else if (it == '+') {
        context.cursor->coef = 1;
    } else if (it == '-') {
        context.cursor->coef = -1;
    } else if (it == '(') {
        context.cursor->setMeta(context.functionMap->getByName("()"));
        context.interpeterStack.push(context.cursor);
        context.cursor = context.cursor->arg;
    }
}
}

