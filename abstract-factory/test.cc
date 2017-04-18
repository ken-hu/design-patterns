/**
 * @file test.cc
 * Test Abstract Factory method.
 * @author Ken Hu
 */

#include "Client.h"
#include "Apple.h"
#include "Microsoft.h"

int main (void)
{
	Client::getAllProducts(new Apple);
	Client::getAllProducts(new Microsoft);
	Client::getPhone(new Apple);
	Client::getPhone(new Microsoft);
	return 0;
}
