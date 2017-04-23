/**
 * @file CPU.h
 * An interface of a kind of prototypes.
 * @author Ken Hu
 */

#pragma	once

#include <string>

class CPU
{
public:
    virtual CPU* clone() = 0;
    virtual std::string getName() = 0;

    virtual ~CPU() {};
};

