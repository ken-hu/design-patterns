/**
 * @file WindowsPhone.h
 * Define a object phone to be created by the corresponding factory.
 * @author Ken Hu
 */

#pragma once

#include "Phone.h"

#include <iostream>

class WindowsPhone : public Phone
{
public:
    WindowsPhone () {
        std::cout << "A WindowsPhone is created." << std::endl;
    }
};

