#ifndef ABSTRACTPRODUCT_H
#define ABSTRACTPRODUCT_H

#include <string>
#include <iostream>

class AbstractProduct
{
public:
    virtual ~AbstractProduct()
    {
        std::cout << "AbstractProduct destroyed" << '\n';
    }

    virtual std::string toString() const = 0;
};

#endif
