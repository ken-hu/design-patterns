/**
 * @file Screen.h
 * An interface of a kind of prototypes.
 * @author Ken Hu
 */

#pragma	once

#include <string>
#include <memory>

class Screen
{
public:
    using ScreenPtr = std::unique_ptr<Screen>;

    virtual ScreenPtr clone() = 0;
    virtual std::string getName() = 0;

    virtual ~Screen() {};
};

