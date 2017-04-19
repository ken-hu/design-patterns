/**
 * @file Apple.h
 * The concrete class Director construct a product with Builder interface.
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
    }
};

