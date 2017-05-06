/**
 * @file Contrast.h
 * Handle work assigned by the Facade object.
 * @author Ken Hu
 */

#pragma once

#include <iostream>

class Contrast
{
public:
    void increaseContrast() {
        std::cout << "increase the contrast" << std::endl;
    }

    void decreaseContrast() {
        std::cout << "decrease the contrast" << std::endl;
    }
};

