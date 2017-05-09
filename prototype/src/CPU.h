/**
 * @file CPU.h
 * An interface of a kind of prototypes.
 * @author Ken Hu
 */

#pragma	once

#include <string>
#include <memory>

class CPU
{
public:
    using CPUPtr = std::unique_ptr<CPU>;

    virtual CPUPtr clone() = 0;
    virtual std::string getName() = 0;

    virtual ~CPU() {};
};

