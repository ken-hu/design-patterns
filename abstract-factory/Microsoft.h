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
    virtual PhonePtr makePhone() {
        return PhonePtr(new WindowsPhone);
    }
    virtual LaptopPtr makeLaptop() {
        return LaptopPtr(new WindowsLaptop);
    }

    virtual ~Microsoft() {}
};

