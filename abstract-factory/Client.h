/**
 * @file Client.h
 * Uses only the interfaces declared by AbstractFactory(Vendor) and
 * AbstractProduct(Phone, Laptop).
 * @author Ken Hu
 */

#pragma once

#include "Vendor.h"
#include "Phone.h"
#include "Laptop.h"

#include <iostream>

class Client
{
public:
    static void getAllProducts(Vendor* vendor) {
        vendor->makePhone();
        vendor->makeLaptop();
    }

    static Phone* getPhone(Vendor* vendor) {
        return vendor->makePhone();
    }

    static Laptop* getLaptop(Vendor* vendor) {
        return vendor->makeLaptop();
    }
};

