#include "DatedProduct.h"
#include <sstream>
#include <iostream>

DatedProduct::DatedProduct() : createdYear_(0)
{
}

DatedProduct::DatedProduct(double p, int q, int y) : Product(p, q), createdYear_(y)
{
}

DatedProduct::DatedProduct(const DatedProduct& other) : Product(other), createdYear_(other.createdYear_)
{
}

DatedProduct::~DatedProduct()
{
    std::cout << "DatedProduct destroyed" << std::endl;
}

int DatedProduct::getYearOfManufacture() const
{
    return createdYear_;
}

void DatedProduct::setYearOfManufacture(int y)
{
    createdYear_ = y;
}

std::string DatedProduct::toString() const
{
    std::ostringstream oss;
    oss << Product::toString() << ", Year of Manufacture: " << createdYear_;
    return oss.str();
}

DatedProduct& DatedProduct::operator=(const DatedProduct& other)
{
    if (this == &other)
    {
        return *this;
    }
    Product::operator=(other);
    createdYear_ = other.createdYear_;
    return *this;
}

bool DatedProduct::operator==(const DatedProduct& other) const
{
    return Product::operator==(other) && createdYear_ == other.createdYear_;
}

std::ostream& operator<<(std::ostream& os, const DatedProduct& product)
{
    os << static_cast<const Product&>(product) << ", Year of Manufacture: " << product.createdYear_;
    return os;
}

std::istream& operator>>(std::istream& is, DatedProduct& product)
{
    is >> static_cast<Product&>(product) >> product.createdYear_;
    return is;
}

int DatedProduct::calculateAge(int currentYear) const
{
    return currentYear - createdYear_;
}
