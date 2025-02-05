//
// Jeff Hunt
// 2/5/2025
// Stadium Seating Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Constants for the ticket prices
    const double CLASS_A_Price = 15.0;
    const double CLASS_B_Price = 12.0;
    const double CLASS_C_Price = 9.0;

    // Variables for tickets sold and the total from ticket sales
    int classATickets; 
    int classBTickets;
    int classCTickets;
    double total; 

    // Output for the number of Class A Tickets
    cout << "Enter the number of Class A tickets sold: ";
    cin >> classATickets;

    // Output for the number of Class B Tickets
    cout << "Enter the number of Class B tickets sold: ";
    cin >> classBTickets;

    // Output for the number of Class C Tickets
    cout << "Enter the number of Class C tickets sold: ";
    cin >> classCTickets;

    // Calculate the total amount from the ticket sales.
    total = (classATickets * CLASS_A_Price) +
            (classBTickets * CLASS_B_Price) +
            (classCTickets * CLASS_C_Price);
    
    // Display the total amount
    cout << "The total amount in ticket sales is $"
    << setprecision(2) << fixed << total << endl;

    return 0;
}