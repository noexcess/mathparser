#include "parsercontext.h"
namespace mp
{


ParserContext::ParserContext():initState(*this),coefState(*this),functState(*this)
{

state = &initState;
cursor = new FunctionExpression;
}


void ParserContext::handle(char it)
{
    state->handle(it);
}



void ParserContext::changeState(ParserState &t_state)
{
    state=&t_state;
}

void ParserContext::newOperator(char it)
{
    if(!it) return;
    std::shared_ptr<BaseFunction>& currentOp = functionMap->getByOperator(it);
    FunctionExpression * func =  new FunctionExpression(currentOp);
    BaseFunction * operSearch;
    while (true){
        if(interpeterStack.empty()){break;}
        operSearch = interpeterStack.top()->meta.get();

        if(operSearch->getOperator()
                && operSearch->getOperIndex()>currentOp->getOperIndex()){
            cursor = interpeterStack.top();
            interpeterStack.pop();
        }else{break;}
    }
    interpeterStack.push(func);
    func->arg[0] = *cursor;
    *cursor = *func;
    cursor = func->arg+1;
}

void ParserContext::popToFunc()
{
    while(interpeterStack.top()->meta->getOperator()){
        interpeterStack.pop();
    }
    cursor = interpeterStack.top();
    interpeterStack.pop();
}
}
