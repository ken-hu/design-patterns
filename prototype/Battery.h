/**
 * @file Battery.h
 * An interface of a kind of prototypes.
 * @author Ken Hu
 */

#pragma	once

#include <string>

class Battery
{
public:
    virtual Battery* clone() = 0;
    virtual std::string getName() = 0;

    virtual ~Battery() {};
};

