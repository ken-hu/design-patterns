/**
 * @file Phone.h
 * Declare an interface for a type of product object.
 * @author Ken Hu
 */

#pragma once

class Phone
{
public:
    virtual Phone* makePhone() const {
        return new Phone;
    }
};

