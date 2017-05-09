/**
 * @file client.cc
 * Clients that use the facade don't have to access its subsystem objects directly.
 * @author Ken Hu
 */

#include "MonitorMode.h"

int main()
{
    MonitorMode monitorMode;

    monitorMode.powerSave();
    monitorMode.highPerformance();

    return 0;
}

