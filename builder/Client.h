/**
 * @file Client.h
 * The client is in a position to know the concrete builders
 * and retrieves the product from the builder not the Director(Apple).
 * @author Ken Hu
 */

#pragma	once

#include "Apple.h"
#include "iPhoneBuilder.h"
#include "iPhone.h"
#include "MacBuilder.h"
#include "Mac.h"

class Client
{
public:
    static iPhone getiPhone() {
        Apple* AppleInc = new Apple;
        iPhoneBuilder* iPhoneBuilderObject = new iPhoneBuilder;
        AppleInc->buildProduct(iPhoneBuilderObject);
        return iPhoneBuilderObject->getProduct();
    }

    static Mac getMac() {
        Apple* AppleInc = new Apple;
        MacBuilder* MacBuilderObject = new MacBuilder;
        AppleInc->buildProduct(MacBuilderObject);
        return MacBuilderObject->getProduct();
    }
};

