/**
 * @file MacBuilder.h
 * A concrete class that construts and assembles a specific product.
 * @author Ken Hu
 */

#pragma once

#include "Builder.h"

#include <string>

class MacBuilder : public Builder
{
public:
    virtual void buildScreen() {
        Mac += "MacScreen";
    }

    virtual void buildBattery() {
        Mac += "MacBattery";
    }

    virtual void buildCPU() {
        Mac += "MacCPU";
    }

    virtual std::string getProduct() const {
        return Mac;
    }

private:
    std::string Mac;
};

