/**
 * @file iPhoneCPU.h
 * A concrete prototype.
 * @author Ken Hu
 */

#pragma	once

#include <string>

#include "Battery.h"

class iPhoneCPU : public CPU
{
public:
    virtual CPU* clone() {
        return new iPhoneCPU ;
    }

    std::string getName() {
        return "iPhoneCPU";
    }

    virtual ~iPhoneCPU() {};
};

