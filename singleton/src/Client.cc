/**
 * @file Client.cpp
 * Clients can access a Singleton solely through the instance member function.
 * @author Ken Hu
 */

#include "Singleton.h"

int main()
{
    Singleton* singletonInstance = Singleton::instance();

    return 0;
}

