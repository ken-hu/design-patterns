/**
 * @file Clothes.h
 * The abstract decorator.
 * @author Ken Hu
 */

#pragma once

#include "Person.h"

class Clothes : public Person
{
public:
    Clothes(Person* person) {
        _person = person;
    }

    virtual void dress() {
        _person->dress();
    }

    virtual ~Clothes() {}

private:
    Person* _person;
};

