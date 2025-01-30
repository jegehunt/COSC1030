//
// Jeff Hunt
// 1/30/25
// Restaurant Bill Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

int main()
{
    // Variable declarations
    double meal = 88.67;
    double tax = meal * 0.0675;
    double subtotal = meal + tax;
    double tip = subtotal * 0.15;
    double total = subtotal + tip;

    cout << "Meal Cost: " << meal << endl;
    cout << "Tax: "  << tax << endl;
    cout << "Tip: " << tip << endl;
    cout << "Total: " << total << endl;

    // Print information about the sale.
    return 0;
}


// Constants for the tax rate and tip percentage

// Get the amount of the purchase.

// Calculate the sales tax.

// Calculate the tip.

// Calculate the total of the sale.

// Print information about the sale.
