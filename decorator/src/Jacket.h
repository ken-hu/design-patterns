/**
 * @file Jacket.h
 * A concrete decorator.
 * @author Ken Hu
 */

#pragma once

#include <iostream>

#include "Clothes.h"

class Person;
class Jacket : public Clothes
{
public:
    Jacket(Person* person) : Clothes(person) {}

    virtual void dress() {
        Clothes::dress();
        dressInJacket();
    }

private:
    void dressInJacket() {
        std::cout << "Jacket" << std::endl;
    }
};

