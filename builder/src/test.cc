/**
 * @file test.cc
 * The client creates the Director object and configure it with a concrete Builder.
 * The client needs to know the Director and all the concrete builders.
 * @author Ken Hu
 */

#include <iostream>
#include <string>

#include "Client.h"
#include "iPhone.h"
#include "Mac.h"

int main ()
{
    iPhone product = Client::getiPhone();
    Mac product2 = Client::getMac();

    std::cout << product.toString() << std::endl;
    std::cout << product2.toString() << std::endl;

    return 0;
}

