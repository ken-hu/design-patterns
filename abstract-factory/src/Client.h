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

#include <memory>

using VendorPtr = std::unique_ptr<Vendor>;
using PhonePtr = std::unique_ptr<Phone>;
using LaptopPtr = std::unique_ptr<Laptop>;

class Client
{
public:
    static void getAllProducts(VendorPtr& vendor) {
        vendor->makePhone();
        vendor->makeLaptop();
    }

    static PhonePtr getPhone(VendorPtr& vendor) {
        return vendor->makePhone();
    }

    static LaptopPtr getLaptop(VendorPtr& vendor) {
        return vendor->makeLaptop();
    }
};

