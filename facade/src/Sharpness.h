/**
 * @file Sharpness.h
 * Handle work assigned by the Facade object.
 * @author Ken Hu
 */

#pragma once

#include <iostream>

class Sharpness
{
public:
    void increaseSharpness() {
        std::cout << "increase the sharpness" << std::endl;
    }

    void decreaseSharpness() {
        std::cout << "decrease the sharpness" << std::endl;
    }
};

