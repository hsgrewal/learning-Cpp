// This program calculates the total of a retail sale
#include <iostream>
using namespace std;

int main()
{
    double retail_price, sales_tax_rate, sales_tax, total;

    // Get retail price of item
    cout << "Enter retail price of purchased item: $";
    cin >> retail_price;

    // Get sales tax rate
    cout << "Enter sales tax rate: %";
    cin >> sales_tax_rate;

    // Calculate sales tax
    sales_tax = retail_price * sales_tax_rate / 100.0;

    // Calculate total
    total = retail_price + sales_tax;

    // Display total of retail sale
    cout << "Total of retail sale is $" << total << endl;

    return 0;
}