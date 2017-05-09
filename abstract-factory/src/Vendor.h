/**
 * @file Vendor.h
 * Declare an interface for operations that create abstract product objects.
 * @author Ken Hu
 */

#pragma once

#include "Phone.h"
#include "Laptop.h"

#include <memory>

class Vendor
{
public:
    using PhonePtr = std::unique_ptr<Phone>;
    using LaptopPtr = std::unique_ptr<Laptop>;

    virtual PhonePtr makePhone() = 0;
    virtual LaptopPtr makeLaptop() = 0;

    virtual ~Vendor() {}
};

