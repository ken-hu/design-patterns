/**
 * @file Screen.h
 * An interface of a kind of prototypes.
 * @author Ken Hu
 */

#pragma	once

#include <string>

class Screen
{
public:
    virtual Screen* clone() = 0;
    virtual std::string getName() = 0;

    virtual ~Screen() {};
};

