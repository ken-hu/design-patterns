/**
 * @file iOSProduct.h
 * The concrete class for constructing a product.
 * @author Ken Hu
 */

#pragma	once

#include "ProductType.h"

class iOSProduct : public ElecProduct
{
public:
    iOSProduct(ProductType productType) {
        _productType = productType;
    }

    virtual ProductType getProductType() {
        return _productType;
    }
private:
    ProductType _productType;
};

