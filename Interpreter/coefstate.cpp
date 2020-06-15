#include "coefstate.h"
#include "parsercontext.h"
#include <cmath>
namespace mp {
CoefState::CoefState(ParserContext& context): ParserState(context){

}

void CoefState::handle(char it) {

    if (isdigit(it)) {
        if(decimal==0)
            context.cursor->coef = context.cursor->coef * 10 + it - '0';
        else{
            context.cursor->coef = context.cursor->coef + (double)(it - '0')/(pow(10,decimal));
            ++decimal;
        }
    } else{
        context.cursor->setMeta(context.functionMap->getByName("coef"));
        decimal=0;
        if (isalpha(it)) {
            context.changeState(context.functState);
            context.functState.funcName = it;
        } else{
            if (it == ')') {
                context.popToFunc();
                context.changeState(context.functState);
            } else if (it == '.') {
                ++decimal;
            } else if (it == '-') {

                context.newOperator('+');
                context.cursor->coef *=-1;
                context.changeState(context.initState);
            } else if (it == '(') {

                context.newOperator('*');
                context.cursor->setMeta(context.functionMap->getByName("()"));
                context.interpeterStack.push(context.cursor);
                context.cursor = context.cursor->arg;
                context.changeState(context.initState);
            } else {

                context.newOperator(it);
                context.changeState(context.initState);

            }
        }
    }
}
}
