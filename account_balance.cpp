// This program calculates the current balance in a bank account
#include <iostream>
using namespace std;

int main()
{
    double balance, deposits, withdrawals;

    // Get starting balance
    cout << "Enter starting balance: $";
    cin >> balance;

    // Get total dollar amount of deposits
    cout << "Enter total dollar amount of deposits: $";
    cin >> deposits;

    // Get total dollar amount of withdrawls
    cout << "Enter total dollar amount of withdrawls: $";
    cin >> withdrawals;

    // Calculate current balance
    balance += deposits;
    balance -= withdrawals;

    // Display current balance of bank account
    cout << "Current balance of the bank account is $" << balance << ".\n";

    return 0;
}