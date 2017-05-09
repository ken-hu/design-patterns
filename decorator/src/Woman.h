/**
 * @file Woman.h
 * A concrete Component.
 * @author Ken Hu
 */

#pragma once

#include <iostream>

#include "Person.h"

class Woman : public Person
{
public:
    virtual void dress() {
        std::cout << "Dress a Woman in ";
    }
};

