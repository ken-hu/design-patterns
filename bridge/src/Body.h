/**
 * @file Body.h
 * Extends the interface defined by Abstraction.
 * @author Ken Hu
 */

#pragma once

#include "WebsiteModule.h"
#include "ModuleImp.h"

class Body : public WebsiteModule
{
public:
    Body(ModuleImp* imp): WebsiteModule(imp) {}

    virtual void setTheme() {
        getImplementor()->setThemeImp();
    }
};

