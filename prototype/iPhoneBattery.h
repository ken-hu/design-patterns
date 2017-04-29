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
    virtual BatteryPtr clone() {
        return BatteryPtr(new iPhoneBattery);
    }

    std::string getName() {
        return "iPhoneBattery";
    }

    virtual ~iPhoneBattery() {};
};

