/**
 * @file WebsiteModule.h
 * Define the interface, maintain a reference to an object of implementor.
 * @author Ken Hu
 */

#pragma once

#include "ModuleImp.h"

class WebsiteModule
{
public:
    WebsiteModule(ModuleImp* imp): _imp(imp) {}

    virtual void setTheme() = 0;

    virtual ~WebsiteModule() {}

protected:
    ModuleImp* getImplementor() {
        return _imp;
    }

private:
    ModuleImp* _imp = nullptr;
};

