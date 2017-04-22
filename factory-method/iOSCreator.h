/**
 * @file iOSCreator.h
 * A concrete class that returns the actual product.
 * @author Ken Hu
 */

#pragma	once

#include "ElecProductCreator.h"
#include "ProductType.h"
#include "iOSProduct.h"

class iOSCreator : public ElecProductCreator
{
public:
    virtual ElecProduct* createProduct(ProductType productType) {
        return new iOSProduct(productType);
    }
};

