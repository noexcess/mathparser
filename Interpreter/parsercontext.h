#ifndef PARSERCONTEXT_H
#define PARSERCONTEXT_H

#include<stack>
#include "functionexpression.h"
#include <memory>
#include "functionmap.h"
#include"initstate.h"
#include"funcstate.h"
#include"coefstate.h"
namespace mp {
class ParserState;
class ParserContext
{
    ParserState * state;
protected:
    friend class InitState;
    friend class FuncState;
    friend class CoefState;

    void changeState(ParserState&);
    void handleDefault(char);
    void newOperator(char it);
    void popToFunc();
    InitState initState;
    FuncState functState;
    CoefState coefState;
public:
    ParserContext();

    std::stack<FunctionExpression*> interpeterStack;
    std::shared_ptr<FunctionMap> functionMap;
    FunctionExpression * cursor;

    void handle(char);

};

}

#endif // PARSERCONTEXT_H
