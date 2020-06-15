#include "functionexpression.h"
#include <memory>
namespace mp {
double FunctionExpression::Evaluate()
{
    int aNb=meta->getArgNumber();
    if (aNb){
    std::unique_ptr<double[]> a (new double[aNb]);
    for (int i =0;i<aNb;++i){
        a[i] = arg[i].Evaluate();
    }
    return coef * meta->evaluate(a.get());
    }
    else{

        return coef * meta->evaluate(nullptr);
    }
}

FunctionExpression::~FunctionExpression()
{
    delete[] arg;
}

void FunctionExpression::setMeta(std::shared_ptr<BaseFunction> & t_meta)
{
    this->meta = t_meta;
    this->arg = new FunctionExpression[t_meta->getArgNumber()];
}

FunctionExpression::FunctionExpression()
{
}
FunctionExpression::FunctionExpression(std::shared_ptr<BaseFunction> & t_meta)
{
    setMeta(t_meta);
}

}
