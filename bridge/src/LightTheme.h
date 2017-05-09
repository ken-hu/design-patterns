/**
 * @file LightTheme.h
 * Concrete implementor.
 * @author Ken Hu
 */

#pragma once

#include <iostream>

#include "ModuleImp.h"

class LightTheme : public ModuleImp
{
public:
    virtual void setThemeImp() {
        std::cout << "Light theme is set to the moudle." << std::endl;
    }
};

