#ifndef DATEDPRODUCT_H
#define DATEDPRODUCT_H

#include "Product.h"

class DatedProduct : public Product
{
public:
    DatedProduct();

    DatedProduct(double p, int q, int y);

    DatedProduct(const DatedProduct& other);

    ~DatedProduct() override;

    int getYearOfManufacture() const;
    void setYearOfManufacture(int y);

    std::string toString() const override;

    DatedProduct& operator=(const DatedProduct& other);
    bool operator==(const DatedProduct& other) const;

    friend std::ostream& operator<<(std::ostream& os, const DatedProduct& product);
    friend std::istream& operator>>(std::istream& is, DatedProduct& product);

    int calculateAge(int currentYear) const;

private:
    int createdYear_;
};

#endif
