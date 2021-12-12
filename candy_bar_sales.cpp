// This program calculates candy bar sales
#include <iostream>
using namespace std;

int main()
{
    int number_candy_sold;
    double price, earnings;

    // Get number of candy bars sold
    cout << "Enter number of candy bars sold: ";
    cin >> number_candy_sold;

    // Get price of candy bars
    cout << "Enter price of each candy bar sold: $";
    cin >> price;

    // Calculate earnings
    earnings = number_candy_sold * price;

    // Display total earnings
    cout << "The total amount earned is $" << earnings << endl;

    return 0;
}