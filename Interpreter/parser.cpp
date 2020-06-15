#include "parser.h"
#include <memory>
namespace mp {

Parser::Parser()
{
    parserContext.functionMap = std::make_shared<FunctionMap>();
}

void Parser::buildExpression(std::string & str)
{
    funcExpression = parserContext.cursor;
     for (auto it: str){

         parserContext.handle(it);
     }
     parserContext.handle(0);
}

double Parser::eval()
{
    return funcExpression->Evaluate();
}


}
