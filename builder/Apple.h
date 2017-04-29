/**
 * @file Apple.h
 * The concrete class Director construct a product with Builder interface.
 * Different directors can reuse different parts to build product variants.
 * @author Ken Hu
 */

#pragma once

#include "Builder.h"

class Apple
{
public:
    Apple(Builder* builder) {
        _builder = builder;
    }

    void buildProduct() {
        _builder->buildScreen();
        _builder->buildBattery();
        _builder->buildCPU();
        _builder->buildKeyboard();
    }

private:
    Builder* _builder = nullptr;
};

