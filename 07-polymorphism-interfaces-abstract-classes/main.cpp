// Section 16 
// Challenge - Polymorphism
#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std; 

int main() {
    cout.precision(2);
    cout << fixed;
    
    // Accounts
    vector<Account *> accounts;
    accounts.push_back(new Checking_Account {"Larry", 0});
    accounts.push_back(new Checking_Account {"Moe", 2000});
    accounts.push_back(new Savings_Account {"Curly", 5000, 5.0});
    accounts.push_back(new Trust_Account {"Athos", 10000, 5.0});
    accounts.push_back(new Trust_Account {"Porthos", 20000, 4.0});
    accounts.push_back(new Trust_Account {"Aramis", 30000});
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);
    
    // Trust withdrawal limits test
    cout << "\n=== Trust withdrawal limit test ===========================" << endl;
    // Withdraw 5 times from trust accounts only
    vector<Account *> trust_accounts;
    trust_accounts.push_back(new Trust_Account {"James", 10000, 5.0});
    trust_accounts.push_back(new Trust_Account {"Bond", 20000, 4.0});
    
    display(trust_accounts);
    for (int i = 1; i <= 5; i++)
        withdraw(trust_accounts, 1000);

    // Clean up
    for (auto acc: accounts)
        delete acc;
    for (auto acc: trust_accounts)
        delete acc;
        
    return 0;
}
