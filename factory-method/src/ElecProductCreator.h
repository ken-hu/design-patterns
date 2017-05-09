/**
 * @file ElecProductCreator.h
 * Defines a default implementation of a phoneCreator(e.g. iOSCreator).
 * The class knows a new Product to create, but doesn't know which type of Product.
 * @author Ken Hu
 */

#pragma	once

#include <memory>

#include "ProductType.h"
#include "ElecProduct.h"

class ElecProductCreator
{
public:
    using ElecProductPtr = std::unique_ptr<ElecProduct>;

    virtual ElecProductPtr createProduct(ProductType productType) = 0;

    virtual ~ElecProductCreator() {}
};

