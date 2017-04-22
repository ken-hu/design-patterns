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
    void buildProduct(Builder* builder) {
        builder->buildScreen();
        builder->buildBattery();
        builder->buildCPU();
        builder->buildKeyboard();
    }
};

