/**
 * @file iPhoneCPU.h
 * A concrete prototype.
 * @author Ken Hu
 */

#pragma	once

#include <string>

#include "CPU.h"

class iPhoneCPU : public CPU
{
public:
    virtual CPUPtr clone() {
        return CPUPtr(new iPhoneCPU);
    }

    std::string getName() {
        return "iPhoneCPU";
    }

    virtual ~iPhoneCPU() {};
};

