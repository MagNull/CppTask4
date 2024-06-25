#ifndef PRODUCT_H
#define PRODUCT_H

#include "AbstractProduct.h"
#include <string>
#include <iostream>

class Product : public AbstractProduct
{
public:
    Product();

    Product(double p, int q);

    Product(const Product& other);

    ~Product() override;

    double getPrice() const;
    void setPrice(double p);

    int getQuantity() const;
    void setQuantity(int q);

    std::string toString() const override;

    Product& operator=(const Product& other);
    bool operator==(const Product& other) const;

    friend std::ostream& operator<<(std::ostream& os, const Product& product);
    friend std::istream& operator>>(std::istream& is, Product& product);
    
private:
    double price_;
    int quantity_;
};

#endif // PRODUCT_H
