
#include "DatedProduct.h"
#include "Product.h"

int main(int argc, char* argv[])
{
    Product p = Product(1, 2);
    DatedProduct dp = DatedProduct(2, 3, 1998);

    std::cout << p << std::endl;
    std::cout << dp << std::endl;
    return 0;
}
