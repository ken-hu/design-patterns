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

    virtual ~iOSProduct() {}
private:
    ProductType _productType;
};

