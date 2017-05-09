/**
 * @file BankAccount.h
 * Defines the common interface for Real Subject and Proxy.
 * @author Ken Hu
 */

#pragma once

class BankAccount
{
public:
    virtual void withdraw(int amount) = 0;

    virtual ~BankAccount() {}
};
