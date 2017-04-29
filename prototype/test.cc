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
    ScreenPtr screen(new iPhoneScreen);
    BatteryPtr battery(new iPhoneBattery);
    CPUPtr cpu(new iPhoneCPU);

    PhoneFactory factory(screen, battery, cpu);
    factory.makePhone();
    factory.makeScreen();
    factory.makeBattery();
    factory.makeCPU();
}

