/**
 * @file SharedCharacter.h
 * A concrete flyweight which actually allcoates the memory.
 * @author Ken Hu
 */

#pragma once

#include <iostream>

#include "Character.h"
#include "Coord.h"

class SharedCharacter : public Character
{
public:
    SharedCharacter(char value): _value(value) {}

    void printCharacter(Coord coord) {
        std::cout << _value
                  << " Coord("
                  << coord.getXCoord()
                  << ", "
                  << coord.getYCoord()
                  << ")"
                  << std::endl;
    }

private:
    char _value;
};

