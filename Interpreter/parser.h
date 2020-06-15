#ifndef PARSER_H
#define PARSER_H
#include "parsercontext.h"
namespace mp {



class Parser
{
    ParserContext parserContext;
    FunctionExpression * funcExpression;
public:
    Parser();
    void buildExpression(std::string&);
    double eval();

};
}


#endif // PARSER_H
