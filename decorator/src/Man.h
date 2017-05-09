/**
 * @file Man.h
 * A concrete Component.
 * @author Ken Hu
 */

#pragma once

#include <iostream>

#include "Person.h"

class Man : public Person
{
public:
    virtual void dress() {
        std::cout << "Dress a man in ";
    }
};

