/**
 * @file iPhoneBuilder.h
 * A concrete class that construts and assembles a specific product.
 * @author Ken Hu
 */

#pragma once

#include "Builder.h"

#include <string>

class iPhoneBuilder : public Builder
{
public:
    virtual void buildScreen() {
        iPhone += "iPhoneScreen";
    }

    virtual void buildBattery() {
        iPhone += "iPhoneBattery";
    }

    virtual void buildCPU() {
        iPhone += "iPhoneCPU";
    }

    virtual std::string getProduct() const {
        return iPhone;
    }

private:
    std::string iPhone;
};

