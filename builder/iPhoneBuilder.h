/**
 * @file iPhoneBuilder.h
 * A concrete class that construts and assembles a specific product.
 * @author Ken Hu
 */

#pragma once

#include "Builder.h"
#include "iPhone.h"

class iPhoneBuilder : public Builder
{
public:
    virtual void buildScreen() {
        _iPhone.assemble("iPhoneScreen");
    }

    virtual void buildBattery() {
        _iPhone.assemble("iPhoneBattery");
    }

    virtual void buildCPU() {
        _iPhone.assemble("iPhoneCPU");
    }

    iPhone getProduct() const {
        return _iPhone;
    }

private:
    iPhone _iPhone;
};

