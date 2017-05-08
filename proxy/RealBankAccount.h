/**
 * @file RealBankAccount.h
 * Define the real object that the proxy represents.
 * @author Ken Hu
 */

#pragma once

#include <iostream>

#include "BankAccount.h"

class RealBankAccount : public BankAccount
{
public:
    virtual void withdraw(int amount) {
        std::cout << "Here is your money: " << amount << std::endl;
    }
};
