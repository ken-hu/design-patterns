/**
 * @file Battery.h
 * An interface of a kind of prototypes.
 * @author Ken Hu
 */

#pragma	once

#include <string>
#include <memory>

class Battery
{
public:
    using BatteryPtr = std::unique_ptr<Battery>;

    virtual BatteryPtr clone() = 0;
    virtual std::string getName() = 0;

    virtual ~Battery() {};
};

