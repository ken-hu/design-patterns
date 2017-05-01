/**
 * @file DarkTheme.h
 * Concrete implementor.
 * @author Ken Hu
 */

#pragma once

#include <iostream>

#include "ModuleImp.h"

class DarkTheme : public ModuleImp
{
public:
    virtual void setThemeImp() {
        std::cout << "Dark theme is set to the moudle." << std::endl;
    }
};

