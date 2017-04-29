/**
 * @file Client.cc
 *
 * @author Ken Hu
 */

#include <iostream>

#include "ElecProductCreator.h"
#include "ProductType.h"
#include "ElecProduct.h"
#include "iOSCreator.h"
#include "iOSProduct.h"

int main()
{
    iOSCreator creator;
    // The ownweship is passed to product since the return value is a temporary object
    // that will be destroyed as soon as the function exits.
    std::unique_ptr<ElecProduct> product = creator.createProduct(ProductType::iPhone);

    if (product->getProductType() == ProductType::iPhone) {
        std::cout << "iPhone is created" << std::endl;
    }
}

