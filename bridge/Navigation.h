/**
 * @file Navigation.h
 * Extends the interface defined by Abstraction.
 * @author Ken Hu
 */

#pragma once

#include "WebsiteModule.h"
#include "ModuleImp.h"

class Navigation : public WebsiteModule
{
public:
    Navigation(ModuleImp* imp): WebsiteModule(imp) {}

    virtual void setTheme() {
        getImplementor()->setThemeImp();
    }
};

