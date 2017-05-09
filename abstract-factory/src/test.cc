/**
 * @file test.cc
 * Test Abstract Factory method.
 * @author Ken Hu
 */

#include "Client.h"
#include "Apple.h"
#include "Microsoft.h"

int main()
{
    VendorPtr ApplePtr(new Apple);
    VendorPtr MicrosoftPtr(new Microsoft);

    Client::getAllProducts(ApplePtr);
    Client::getAllProducts(MicrosoftPtr);
    Client::getPhone(ApplePtr);
    Client::getPhone(MicrosoftPtr);

    return 0;
}
