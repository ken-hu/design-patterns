/**
 * @file MonitorMode.h
 * Delegate the requests to appropriate subsystem objects.
 * @author Ken Hu
 */

#pragma once

#include "Brightness.h"
#include "Contrast.h"
#include "Sharpness.h"

class MonitorMode
{
public:
    void powerSave() {
        Brightness brightness;
        Contrast contrast;
        Sharpness sharpness;

        brightness.decreaseBrightness();
        contrast.decreaseContrast();
        sharpness.decreaseSharpness();
		std::cout << "Power Save Mode Enabled" << std::endl;
    }

    void highPerformance() {
        Brightness brightness;
        Contrast contrast;
        Sharpness sharpness;

        brightness.increaseBrightness();
        contrast.increaseContrast();
        sharpness.increaseSharpness();
		std::cout << "High Performance Mode Enabled" << std::endl;
    }
};

