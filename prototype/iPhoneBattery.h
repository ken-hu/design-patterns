/**
 * @file iPhoneBattery.h
 * A concrete prototype.
 * @author Ken Hu
 */

#pragma	once

#include <string>

#include "Battery.h"

class iPhoneBattery : public Battery
{
public:
    virtual Battery* clone() {
        return new iPhoneBattery;
    }

    std::string getName() {
        return "iPhoneBattery";
    }

    virtual ~iPhoneBattery() {};
};

