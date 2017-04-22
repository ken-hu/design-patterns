/**
 * @file MacBuilder.h
 * A concrete class that construts and assembles a specific product.
 * @author Ken Hu
 */

#pragma once

#include "Builder.h"
#include "Mac.h"

class MacBuilder : public Builder
{
public:
    virtual void buildScreen() {
        _Mac.assemble("MacScreen");
    }

    virtual void buildBattery() {
        _Mac.assemble("MacBattery");
    }

    virtual void buildCPU() {
        _Mac.assemble("MacCPU");
    }

    virtual void buildKeyboard() {
        _Mac.assemble("MacKeyboard");
    }

    Mac getProduct() const {
        return _Mac;
    }

private:
    Mac _Mac;
};

