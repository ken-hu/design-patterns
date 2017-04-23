/**
 * @file PhoneFactory.h
 * The client than make the phone and get the clone from prototypes
 * @author Ken Hu
 */

#pragma	once

#include <iostream>

#include "Screen.h"
#include "Battery.h"
#include "CPU.h"

class PhoneFactory
{
public:
    PhoneFactory (Screen* screen, Battery* battery, CPU* cpu) {
        _prototypeScreen = screen;
        _prototypeBattery = battery;
        _prototypeCPU = cpu;
    }

    Screen* makeScreen() {
        _prototypeScreen->clone();
    }

    Battery* makeBattery() {
        _prototypeBattery->clone();
    }

    Battery* makeCPU() {
        _prototypeCPU->clone();
    }

    void makePhone() {
        std::cout << _prototypeScreen->getName() + _prototypeBattery->getName() + _prototypeCPU->getName() << std::endl;
    }

private:
    Screen* _prototypeScreen;
    Battery* _prototypeBattery;
    CPU* _prototypeCPU;
};

