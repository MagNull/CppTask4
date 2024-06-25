#include "Product.h"
#include <sstream>
#include <iostream>

Product::Product() : price_(0.0), quantity_(0)
{
}

Product::Product(double p, int q) : price_(p), quantity_(q)
{
}

Product::Product(const Product& other) : price_(other.price_), quantity_(other.quantity_)
{
}

Product::~Product()
{
    std::cout << "Product destroyed" << std::endl;
}

double Product::getPrice() const
{
    return price_;
}

void Product::setPrice(double p)
{
    price_ = p;
}

int Product::getQuantity() const
{
    return quantity_;
}

void Product::setQuantity(int q)
{
    quantity_ = q;
}

std::string Product::toString() const
{
    std::ostringstream oss;
    oss << "Price: " << price_ << ", Quantity: " << quantity_;
    return oss.str();
}

Product& Product::operator=(const Product& other)
{
    if (this == &other)
    {
        return *this;
    }
    price_ = other.price_;
    quantity_ = other.quantity_;
    return *this;
}

bool Product::operator==(const Product& other) const
{
    return price_ == other.price_ && quantity_ == other.quantity_;
}

std::ostream& operator<<(std::ostream& os, const Product& product)
{
    os << "Price: " << product.price_ << ", Quantity: " << product.quantity_;
    return os;
}

std::istream& operator>>(std::istream& is, Product& product)
{
    is >> product.price_ >> product.quantity_;
    return is;
}
