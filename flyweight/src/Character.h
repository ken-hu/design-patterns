/**
 * @file Character.h
 * Declare an interface for flyweights.
 * @author Ken Hu
 */

#pragma once

#include "Coord.h"

class Character
{
public:
    virtual void printCharacter(Coord coord) = 0;

    virtual ~Character() {}
};

