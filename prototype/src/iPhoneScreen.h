/**
 * @file iPhoneScreen.h
 * A concrete prototype.
 * @author Ken Hu
 */

#pragma	once

#include <string>

#include "Screen.h"

class iPhoneScreen : public Screen
{
public:
    virtual ScreenPtr clone() {
        return ScreenPtr(new iPhoneScreen);
    }

    std::string getName() {
        return "iPhoneScreen";
    }

    virtual ~iPhoneScreen() {};
};

