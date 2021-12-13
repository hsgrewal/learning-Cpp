// This program calculates a customer's available credit
#include <iostream>
using namespace std;

int main()
{
    int max_credit, used_credit, available_credit;

    // Get customer's maximum credit
    cout << "Enter the customer's maximum credit: ";
    cin >> max_credit;

    // Get customer's used credit
    cout << "Enter the amount of credit used by the customer: ";
    cin >> used_credit;

    // Calculate customer's available credit
    available_credit = max_credit - used_credit;

    // Display customer's available cred
    cout << "The customer's available credit is " << available_credit << ".\n";

    return 0;
}