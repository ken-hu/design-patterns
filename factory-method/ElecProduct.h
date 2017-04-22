/**
 * @file ElecProduct.h
 * The abstract interface for products.
 * @author Ken Hu
 */

#pragma	once

#include "ProductType.h"

class ElecProduct
{
public:
    virtual ProductType getProductType() {};
};

