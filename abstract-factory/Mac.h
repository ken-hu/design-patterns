/**
 * @file Mac.h
 * Define a object phone to be created by the corresponding factory.
 * @author Ken Hu
 */

#pragma once

#include "Laptop.h"

#include <iostream>

class Mac : public Laptop
{
public:
    Mac () {
        std::cout << "A Mac is created." << std::endl;
    }
};

