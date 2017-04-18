/**
 * @file Laptop.h
 * Declare an interface for a type of product object.
 * @author Ken Hu
 */

#pragma once

class Laptop
{
public:
    virtual Laptop* makeLaptop() const {
        return new Laptop;
    }
};

