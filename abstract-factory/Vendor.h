/**
 * @file Vendor.h
 * Declare an interface for operations that create abstract product objects.
 * @author Ken Hu
 */

#pragma once

#include "Phone.h"
#include "Laptop.h"

class Vendor
{
public:
    virtual Phone*  makePhone()  const {}
    virtual Laptop* makeLaptop() const {}
};

