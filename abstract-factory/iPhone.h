/**
 * @file iPhone.h
 * Define a object phone to be created by the corresponding factory.
 * @author Ken Hu
 */

#pragma once

#include "Phone.h"

#include <iostream>

class iPhone : public Phone
{
public:
    iPhone () {
        std::cout << "An iPhone is created." << std::endl;
    }
};

