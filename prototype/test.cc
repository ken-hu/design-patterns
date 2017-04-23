/**
 * @file test.cc
 * Test the client class.
 * @author Ken Hu
 */

#include "PhoneFactory.h"
#include "iPhoneScreen.h"
#include "iPhoneBattery.h"
#include "iPhoneCPU.h"

int main ()
{
    iPhoneScreen screen;
    iPhoneBattery battery;
    iPhoneCPU cpu;
    PhoneFactory factory(&screen, &battery, &cpu);
    factory.makePhone();
}

