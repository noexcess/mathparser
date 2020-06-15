#ifndef BASEFUNCTION_H
#define BASEFUNCTION_H
#include <string>
#include <memory>
namespace mp {

class BaseFunction
{
public:
    virtual int getArgNumber() const;
    virtual const std::string & getName() const;
    virtual char getOperator() const;
    virtual int getOperIndex() const;
    virtual double evaluate(const double arg[]) = 0;
protected:
    std::string name;
    char oper = '\0';
    int argNumber = 0;
    int operIndex = 0;
    BaseFunction();
};

}
#endif // BASEFUNCTION_H
