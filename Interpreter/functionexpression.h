#ifndef FUNCTIONEXPRESSION_H
#define FUNCTIONEXPRESSION_H
#include <memory>
#include"iexpression.h"
#include"BaseFunction/basefunction.h"
namespace mp {
class FunctionExpression : public IExpression
{
    friend class ParserContext;
    std::shared_ptr<BaseFunction> meta;
public:
    double Evaluate();
    ~FunctionExpression();
    FunctionExpression* arg ;
    double coef=1;
    void setMeta(std::shared_ptr<BaseFunction> &);
    FunctionExpression(std::shared_ptr<BaseFunction> &);
    FunctionExpression();

};
}

#endif // FUNCTIONEXPRESSION_H
