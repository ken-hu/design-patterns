/**
 * @file Blouse.h
 * A concrete decorator.
 * @author Ken Hu
 */

#pragma once

#include <iostream>

#include "Clothes.h"

class Person;
class Blouse : public Clothes
{
public:
    Blouse(Person* person) : Clothes(person) {}

    virtual void dress() {
        Clothes::dress();
        dressInBlouse();
    }

private:
    void dressInBlouse() {
        std::cout << "Blouse" << std::endl;
    }
};

