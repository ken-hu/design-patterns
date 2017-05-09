/**
 * @file PhoneFactory.h
 * The client than make the phone and get the clone from prototypes
 * @author Ken Hu
 */

#pragma	once

#include <iostream>
#include <utility>

#include "Screen.h"
#include "Battery.h"
#include "CPU.h"

using ScreenPtr = std::unique_ptr<Screen>;
using BatteryPtr = std::unique_ptr<Battery>;
using CPUPtr = std::unique_ptr<CPU>;

class PhoneFactory
{
public:
    PhoneFactory (ScreenPtr& screen, BatteryPtr& battery, CPUPtr& cpu) {
        _prototypeScreen = std::move(screen);
        _prototypeBattery = std::move(battery);
        _prototypeCPU = std::move(cpu);
    }

    ScreenPtr makeScreen() {
        return _prototypeScreen->clone();
    }

    BatteryPtr makeBattery() {
        return _prototypeBattery->clone();
    }

    CPUPtr makeCPU() {
        return _prototypeCPU->clone();
    }

    void makePhone() {
        std::cout << _prototypeScreen->getName() + _prototypeBattery->getName() + _prototypeCPU->getName() << std::endl;
    }

private:
    ScreenPtr _prototypeScreen;
    BatteryPtr _prototypeBattery;
    CPUPtr _prototypeCPU;
};

