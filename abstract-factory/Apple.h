/**
 * @file Apple.h
 * Implement the operation to create concrete product objects.
 * This is a concrete factory subclass for a product family.
 * @author Ken Hu
 */

#pragma once

#include "Vendor.h"
#include "iPhone.h"
#include "Mac.h"

class Apple: public Vendor
{
public:
    virtual Phone* makePhone()  const {
        return new iPhone;
    }
    virtual Laptop* makeLaptop() const {
        return new Mac;
    }
};

