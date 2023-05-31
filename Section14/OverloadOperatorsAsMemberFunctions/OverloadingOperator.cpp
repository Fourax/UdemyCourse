#include "OverloadingOperator.h"
using namespace std;
OverloadingOperator::OverloadingOperator()
{

}

OverloadingOperator::~OverloadingOperator()
{

}
void OverloadingOperator::display()const
{
    cout << str <<" : "<<getLenght()<<endl;
}

OverloadingOperator &OverloadingOperator::operator=(OverloadingOperator &&rhs)
{
    cout <<"Using move assignment"<<endl;

    if(this==&rhs)
    {
        return *this
    }
    delete[] str;
    str = rhs.str;
    return *this;
}

int OverloadingOperator::getLenght()const
{
    return strlen(str);
}

const hcar *OverloadingOperator::getStr()const
{
    return str;
}