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
    virtual ElecProductPtr createProduct(ProductType productType) {
        return ElecProductPtr(new iOSProduct(productType));
    }

    virtual ~iOSCreator() {}
};

