#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
    : Savings_Account{name, balance, int_rate}, num_withdrawals{0} {
}

// Deposit works like Savings_Account (interest on amount),
// but deposits >= $5000 get a $50 bonus
bool Trust_Account::deposit(double amount) {
    if (amount >= bonus_threshold)
        amount += bonus_amount;
    return Savings_Account::deposit(amount);
}

// Max 3 withdrawals per year, each must be < 20% of balance
bool Trust_Account::withdraw(double amount) {
    if (num_withdrawals >= max_withdrawals_per_year || amount > balance * max_withdraw_pct)
        return false;
    else {
        ++num_withdrawals;
        return Account::withdraw(amount);
    }
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account) {
    os << "[Trust_Account: " << account.name << ": " << account.balance 
       << ", " << account.int_rate << "%, withdrawals: " << account.num_withdrawals << "]";
    return os;
}
