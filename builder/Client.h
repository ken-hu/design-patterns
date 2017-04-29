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
        iPhoneBuilder iPhoneBuilderObject;
        Apple AppleInc(&iPhoneBuilderObject);
        AppleInc.buildProduct();
        return iPhoneBuilderObject.getProduct();
    }

    static Mac getMac() {
        MacBuilder MacBuilderObject;
        Apple AppleInc(&MacBuilderObject);
        AppleInc.buildProduct();
        return MacBuilderObject.getProduct();
    }
};

