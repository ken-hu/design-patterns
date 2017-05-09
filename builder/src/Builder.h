/**
 * @file Builder.h
 * The abstract build class specifies the interface for creating parts of a product.
 * @author Ken Hu
 */

#pragma once

#include <string>

class Builder
{
public:
    virtual void buildScreen() {}
    virtual void buildBattery() {}
    virtual void buildCPU() {}
    virtual void buildKeyboard() {}

    virtual ~Builder() {}
};

