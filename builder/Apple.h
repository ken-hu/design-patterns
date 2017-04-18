/**
 * @file Apple.h
 * The concrete class Director construct a product with Builder interface.
 * @author Ken Hu
 */

#pragma once

#include "Builder.h"

#include <string>

class Apple
{
public:
    std::string buildProduct(Builder* builder) {
        builder->buildScreen();
        builder->buildBattery();
        builder->buildCPU();

        return builder->getProduct();
    }
};

