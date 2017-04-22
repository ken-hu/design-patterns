/**
 * @file ElecProductCreator.h
 * Defines a default implementation of a phoneCreator(e.g. iOSCreator).
 * The class knows a new Product to create, but doesn't know which type of Product.
 * @author Ken Hu
 */

#pragma	once

#include "ProductType.h"
#include "ElecProduct.h"

class ElecProductCreator
{
public:
    virtual ElecProduct* createProduct(ProductType productType) {};
};

