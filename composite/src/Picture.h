/**
 * @file Picture.h
 * Declares the interface for objects in the compositions.
 * @author Ken Hu
 */

#pragma once

#include <string>
#include <iostream>

class Picture
{
public:
    virtual void add(Picture* picture) {}
    virtual void remove(Picture* pictureToRemove) {}

    virtual void print() = 0;
    virtual std::string getContent() = 0;

    virtual ~Picture() {}
};

