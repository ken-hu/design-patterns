/**
 * @file client.cc
 * Test the decorator.
 * @author Ken Hu
 */

#include "Person.h"
#include "Man.h"
#include "Woman.h"
#include "Jacket.h"
#include "Blouse.h"

int main()
{
    Person* man = new Man;
    Person* manInJacket = new Jacket(man);
    manInJacket->dress();
    delete man;
    delete manInJacket;

    Person* woman = new Woman;
    Person* womanInBlouse = new Blouse(woman);
    womanInBlouse->dress();
    delete woman;
    delete womanInBlouse;

    return 0;
}

