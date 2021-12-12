// This program calculates money spent by a little league baseball team to
// purchase new baseballs last year.
#include <iostream>
using namespace std;

int main()
{
    int num_baseballs;
    double price, total;

    // Get number of baseballs purchased last year
    cout << "Enter the number of baseballs purchased last year: ";
    cin >> num_baseballs;

    // Get price of each baseball
    cout << "Enter the price of each baseball: $";
    cin >> price;

    // Calculate the total cost of baseballs
    total = num_baseballs * price;

    // Display total cost of baseballs
    cout << "The total cost of baseballs purchased last year is $" << total << endl;

    return 0;
}