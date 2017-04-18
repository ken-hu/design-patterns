/**
 * @file Microsoft.h
 * The operation to create concrete product objects.
 * This is a concrete factory subclass for a product family.
 * @author Ken Hu
 */

#pragma once

#include "Vendor.h"
#include "WindowsPhone.h"
#include "WindowsLaptop.h"

class Microsoft: public Vendor
{
public:
    virtual Phone* makePhone()  const {
        return new WindowsPhone;
    }
    virtual Laptop* makeLaptop() const {
        return new WindowsLaptop;
    }
};

