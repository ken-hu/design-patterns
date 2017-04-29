/**
 * @file ElecProduct.h
 * The abstract interface for products.
 * @author Ken Hu
 */

#pragma	once

#include <memory>

#include "ProductType.h"

class ElecProduct
{
public:
    using ElecProductPtr = std::unique_ptr<ElecProduct>;

    virtual ProductType getProductType() = 0;

    virtual ~ElecProduct() {}
};

