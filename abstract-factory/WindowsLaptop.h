/**
 * @file WindowsLaptop.h
 * Define a object phone to be created by the corresponding factory.
 * @author Ken Hu
 */

#pragma once

#include "Laptop.h"

#include <iostream>

class WindowsLaptop : public Laptop
{
public:
    WindowsLaptop() {
        std::cout << "A WindowsLaptop is created." << std::endl;
    }

    virtual ~WindowsLaptop() {}
};

