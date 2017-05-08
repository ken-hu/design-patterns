/**
 * @file BankAccountProxy.h
 * Maintain a refrence that lets the proxy access the real subject.
 * @author Ken Hu
 */

#pragma once

#include <iostream>
#include <memory>

#include "BankAccount.h"
#include "RealBankAccount.h"

class BankAccountProxy : public BankAccount
{
public:
    using RealBankAccountPtr = std::unique_ptr<RealBankAccount>;

    void authenticate(bool authenticated) {
        if (authenticated == true) {
            _authenticated = true;
            _realbankAccount = std::make_unique<RealBankAccount>();
        } else {
            std::cout << "Authentication failed" << std::endl;
        }
    }

    virtual void withdraw(int amount) {
        if (_authenticated = true) {
            _realbankAccount->withdraw(amount);
        }
    }

private:
    RealBankAccountPtr _realbankAccount;
    bool _authenticated = false;
};
