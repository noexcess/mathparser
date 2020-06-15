#ifndef IEXPRESSION_H
#define IEXPRESSION_H
namespace mp {

class IExpression
{
protected:
    IExpression(){}
public:

    virtual ~IExpression(){}
    virtual double Evaluate() = 0;
};
}
#endif // IEXPRESSION_H
