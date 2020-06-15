#include "funcstate.h"
#include "parsercontext.h"
namespace mp {

void FuncState::handle(char it)
{
    if (isdigit(it) || isalpha(it)) {
        funcName += it;
    } else {
        if (it == '(') {
            context.cursor->setMeta(context.functionMap->getByName(funcName));
            funcName="";
            context.interpeterStack.push(context.cursor);
            context.cursor = context.cursor->arg;
            context.changeState(context.initState);
        } else if (it == ')') {
            context.popToFunc();
        } else if (it == '-') {

            context.newOperator('+');
            context.cursor->coef *=-1;
            context.changeState(context.initState);
        } else {

            context.newOperator(it);
            context.changeState(context.initState);

        }
    }
}

FuncState::FuncState(ParserContext & context):ParserState(context)
{

}

}

