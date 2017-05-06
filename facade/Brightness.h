/**
 * @file Brightness.h
 * Handle work assigned by the Facade object.
 * @author Ken Hu
 */

#pragma once

#include <iostream>

class Brightness
{
public:
    void increaseBrightness() {
        std::cout << "increase the brightness" << std::endl;
    }

    void decreaseBrightness() {
        std::cout << "decrease the brightness" << std::endl;
    }
};

