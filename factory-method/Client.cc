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
    ElecProductCreator* creator = new iOSCreator;
    ElecProduct* product = creator->createProduct(ProductType::iPhone);

    if (product->getProductType() == ProductType::iPhone) {
        std::cout << "iPhone is created" << std::endl;
    }
}

