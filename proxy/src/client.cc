/**
 * @file client.cc
 * Deal with the proxy instead of the real subject.
 * @author Ken Hu
 */

#include "BankAccount.h"
#include "BankAccountProxy.h"

int main()
{
    BankAccountProxy bankAccount;
    bankAccount.authenticate(true);
    bankAccount.withdraw(1);

    return 0;
}
