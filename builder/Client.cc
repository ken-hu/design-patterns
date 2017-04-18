/**
 * @file Client.cc
 * The client creates the Director object and configure it with a concrete Builder.
 * The client needs to know the Director and all the concrete builders.
 * @author Ken Hu
 */

#include "Apple.h"
#include "iPhoneBuilder.h"
#include "MacBuilder.h"

#include <string>
#include <iostream>

int main ()
{
    Apple* AppleInc = new Apple;
    std::string product = AppleInc->buildProduct(new iPhoneBuilder);
    std::string product2 = AppleInc->buildProduct(new MacBuilder);

    std::cout << product << std::endl;
    std::cout << product2 << std::endl;

    return 0;
}


